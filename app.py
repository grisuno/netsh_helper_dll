#!/usr/bin/env python3
# _*_ coding: utf8 _*_
"""
app.py

Autor: Gris Iscomeback
Correo electrónico: grisiscomeback[at]gmail[dot]com
Fecha de creación: 21/09/2025
Licencia: GPL v3

Descripción:  This project leverages the legitimate "Netsh Helper DLL" functionality in Windows to execute malicious code (shellcode) within the context of the trusted netsh.exe process. Ideal for evasion and lateral movement in Windows environments.
"""
import os

os.system("sh install.sh")
