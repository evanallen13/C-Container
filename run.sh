#!/bin/bash
file=${1}

mkdir -p build
# gcc -o ./build/$file "$file.c"
# ./build/$file

gcc main.c fizzbuzz.c -o build/main
./build/main