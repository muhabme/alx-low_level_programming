#!/bin/bash
gcc -c *.c
ar rc liballl.a *.o
rm -f *.o