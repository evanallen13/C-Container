#include <stdio.h>
#include <string.h>

int main() {

    typedef struct {
        int number;
        char word[10];
    } FizzBuzzConfig;

    FizzBuzzConfig FIZZ;
    FIZZ.number = 3;
    strcpy(FIZZ.word, "FIZZ");

    FizzBuzzConfig BUZZ;
    BUZZ.number = 5;
    strcpy(BUZZ.word, "BUZZ");

    for (int i = 1; i <= 150000; i++) {

        char result[20];
        sprintf(result, "%d: ", i);

        if (i % FIZZ.number == 0) {
            sprintf(result + strlen(result), "%s", FIZZ.word);
        }
        if (i % BUZZ.number == 0) {
            sprintf(result + strlen(result), "%s", BUZZ.word);
        }
        printf("%s\n", result);
    }
    return 0;
}



