#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char suit[10];
    char rank[10];
    int value;
} Card;

void print_card(Card card) {
    printf("%s of %s (value: %d)\n", card.rank, card.suit, card.value);
}

int main() {
    Card card1 = {"H", "Ace", 11};
    Card card2 = {"S", "10", 10};

    print_card(card1);
    print_card(card2);

    return 0;
}
