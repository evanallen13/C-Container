#!/bin/bash
file=${1}

mkdir -p build
gcc -o ./build/$file "$file.c"
./build/$file
