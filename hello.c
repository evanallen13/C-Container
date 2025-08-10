#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct to hold parsed arguments
typedef struct {
    char *arg1;
    char *arg2;
    int number;
} Arguments;

Arguments parse_args(int argc, char *argv[]) {
    Arguments args = {NULL, NULL, 0};

    if (argc > 1) args.arg1 = argv[1];
    if (argc > 2) args.arg2 = argv[2];
    if (argc > 3) args.number = atoi(argv[3]); // convert string to int

    return args;
}

int main(int argc, char *argv[]) {
    Arguments args = parse_args(argc, argv);

    printf("First arg: %s\n", args.arg1 ? args.arg1 : "(none)");
    printf("Second arg: %s\n", args.arg2 ? args.arg2 : "(none)");
    printf("Number: %d\n", args.number);

    return 0;
}
