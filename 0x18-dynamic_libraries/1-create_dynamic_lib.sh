#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -o -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRIRY_PATH=.:$LD_LIBRARY_PATH
