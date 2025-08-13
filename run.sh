#!/bin/bash
file=${1}

mkdir -p build
gcc $(find . -name "*.c") -o build/main
./build/main

rm -rf build