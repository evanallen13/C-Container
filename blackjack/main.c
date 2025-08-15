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

void create_deck(Card deck[]) {
    char suits[4][10] = {"❤️", "♦️", "♣️", "♠️"};
    char ranks[13][10] = {"2", "3", "4", "5", "6", "7", "8", "9", "10",
                          "Jack", "Queen", "King", "Ace"};

    int n = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            snprintf(deck[n].suit, sizeof(deck[n].suit), "%s", suits[i]);
            snprintf(deck[n].rank, sizeof(deck[n].rank), "%s", ranks[j]);
            deck[n].value = (j < 9) ? j + 2 : (j == 12) ? 11 : 10;
            n++;
        }
    }
}

void shuffle_deck(Card deck[]) {
    for (int i = 0; i < 52; i++) {
        int j = rand() % 52;
        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

int main() {
    Card deck[52];
    create_deck(deck);
    shuffle_deck(deck);
    shuffle_deck(deck);


    for (int i = 0; i < 52; i++) {
        print_card(deck[i]);
    }

    return 0;
}
