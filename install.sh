#!/bin/bash
sudo apt install mingw-w64
x86_64-w64-mingw32-gcc -shared -o helper.dll main.c -lkernel32 -luser32
