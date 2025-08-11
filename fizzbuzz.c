#include <stdio.h>
#include <string.h>
#include "fizzbuzz.h"

void run_fizzbuzz(FizzBuzzConfig* fizzBuzzNumbers, int n) {
    for (int i = 1; i <= n; i++) {

        char result[20];
        sprintf(result, "%d: ", i);
        
        for (int j = 0; j < 2; j++) {
            if (i % fizzBuzzNumbers[j].number == 0) {
                sprintf(result + strlen(result), "%s", fizzBuzzNumbers[j].word);
            }
        }
        printf("%s\n", result);
    }
}
