#include <stdio.h>
#include <string.h>

int main() {

    typedef struct {
        int number;
        char word[10];
    } FizzBuzzConfig;

    FizzBuzzConfig fizzBuzzNumbers[] = {
        {3, "FIZZ"},
        {5, "BUZZ"},
    };

    for (int i = 1; i <= 15; i++) {

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