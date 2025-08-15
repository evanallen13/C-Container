#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char suit[10];
    char rank[10];
    int value;
} Card;

void create_deck(Card deck[]) {
    char suits[4][10] = {"❤️", "♦️", "♣️", "♠️"};
    char ranks[13][10] = {"2", "3", "4", "5", "6", "7", "8", "9", "10",
                          "J", "Q", "K", "A"};

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
    srand((unsigned int)time(NULL));
    for (int i = 51; i > 0; i--) {
        int j = (rand() % (i + 1));
        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

void print_card(Card card) {
    printf("%s of %s (value: %d)\n", card.rank, card.suit, card.value);
}

int print_hand(Card *card) {
    int total_value = 0;
    for (int i = 0; i < 10; i++) {
        if (card[i].value == 0 || card[i].value > 11) break; // Stop if we reach an empty card
        printf("%s of %s\n", card[i].rank, card[i].suit);
        total_value += card[i].value;
    }
    printf("Total: %d\n", total_value);
    return total_value;
}

void play_blackjack(Card deck[]) {
    Card player_hand[10];
    Card dealer_hand[10];
    int player_total = 0, dealer_total = 0;

    player_hand[0] = deck[0];
    player_hand[1] = deck[1];
    dealer_hand[0] = deck[2];
    dealer_hand[1] = deck[3];

    char player_move;
    int i = 2;
    while (player_move != 's') {
        system("clear");
        printf("Player's hand:\n");
        player_total = print_hand(player_hand);
        printf("\nDealer's hand:\n");
        dealer_total = print_hand(dealer_hand);

        printf("Make your move (h for hit, s for stand): ");
        scanf(" %c", &player_move);
        if (player_move == 'h') {
            player_hand[i] = deck[3 + i];
            i++;
        }
    }

    // while (dealer_total < 17) {
    //     // system("clear");
    //     printf("Player's hand:\n");
    //     player_total = print_hand(player_hand);
    //     printf("\nDealer's hand:\n");
    //     dealer_total = print_hand(dealer_hand);

    //     dealer_hand[i - 1] = deck[3 + i];
    //     i++;
    // }

    // // system("clear");
    // printf("Final Player's hand:\n");
    // player_total = print_hand(player_hand);
    // printf("\nFinal Dealer's hand:\n");
    // dealer_total = print_hand(dealer_hand);
}

void main() {
    Card deck[52];
    create_deck(deck);
    shuffle_deck(deck);
    play_blackjack(deck);
}