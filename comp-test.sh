#!/bin/bash
for i in $(find . -type f -name "*.c") ;do if grep math.h "$i">/dev/null; then gcc -o out $i -lm ;else gcc -o out $i; fi ; done && for i in $(find . -type f -name "*.cpp") ; do g++ -o out $i  ; done  | grep error

