#ifndef FIZZBUZZ_H
#define FIZZBUZZ_H

typedef struct {
    int number;
    char word[5];
} FizzBuzzConfig;

void run_fizzbuzz(FizzBuzzConfig* config, int n);
#endif