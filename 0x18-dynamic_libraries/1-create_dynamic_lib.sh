#!/bin/bash
gcc -fPIC -g -c -Wall *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o -lc
