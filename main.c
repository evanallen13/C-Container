#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    typedef struct {
        int number;
        char word[5];
    } FizzBuzzConfig;

    FizzBuzzConfig fizzBuzzNumbers[] = {
        {3, "FIZZ"},
        {5, "BUZZ"},
    };

    int n = 15;
    if (argc > 1) n = atoi(argv[1]); // convert string to int

    for (int i = 1; i <= n; i++) {

        char result[20];
        sprintf(result, "%d: ", i);

        for (int j = 0; j < sizeof(fizzBuzzNumbers) / sizeof(FizzBuzzConfig); j++) {
            if (i % fizzBuzzNumbers[j].number == 0) {
                sprintf(result + strlen(result), "%s", fizzBuzzNumbers[j].word);
            }
        }
        printf("%s\n", result);
    }
    return 0;
}