/*
    Remove the num_in_rank, num_in_suit, and card_exists arrays from the
    poker.c program of Section 10.5. Have the program store the cards in a 5 × 2 array
    instead. Each row of the array will represent a card. For example, if the array is named
    hand, then hand[0][0] will store the rank of the first card and hand[0][1] will store
    the suit of the first card.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* varivieis externas */
int hand[NUM_CARDS][2]; /* 0 = rank, 1 = suit */
bool straight, flush, four, three, pair;
int pairs; /* pode ser 0, 1, ou 2 */

void read_cards(void);
void analyze_hand(void);
void print_result(void);

/*
    main: Chama read_cards, analyze_hand e print_result
          repetidamente.  
*/
int main(void)
{
    while (1)
    {
        read_cards();
        analyze_hand();
        print_result();
    }
    return 0;
}

/*
    read_cards: Lê as cartas do usuário e armazena os valores em num_int_rank e num_int_suit.
                 Se o usuário digitar uma carta inválida, imprime uma mensagem de erro e
                 continua lendo cartas.
*/
void read_cards(void){
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card, duplicate_card;
    int cards_read = 0;

    while(cards_read < NUM_CARDS){
        bad_card = false;

        printf("Enter a card: ");
    
        rank_ch = getchar();
        switch (rank_ch)
        {
            case '0': exit(EXIT_SUCCESS);
            case '2': rank = 0; break;
            case '3': rank = 1; break;
            case '4': rank = 2; break;
            case '5': rank = 3; break;
            case '6': rank = 4; break;
            case '7': rank = 5; break;
            case '8': rank = 6; break;
            case '9': rank = 7; break;
            case 'T': case 't': rank = 8; break;
            case 'J': case 'j': rank = 9; break;
            case 'Q': case 'q': rank = 10; break;
            case 'K': case 'k': rank = 11; break;
            case 'A': case 'a': rank = 12; break;
            default: bad_card = true; break;
        }

        suit_ch = getchar();
        switch (suit_ch)
        {
            case '0': exit(EXIT_SUCCESS);
            case 'C': case 'c': suit = 0; break;
            case 'D': case 'd': suit = 1; break;
            case 'H': case 'h': suit = 2; break;
            case 'S': case 's': suit = 3; break;
            default: bad_card = true; break;
        }
        while ((ch = getchar()) != '\n') {
            if (ch != ' ') {
                bad_card = true;
            }
        }
        if (bad_card) {
            printf("Bad card; ignored.\n");
            continue;
        }


        duplicate_card = false;
        for(int i = 0; i < cards_read; i++){
            if((hand[i][0] == rank) || (hand[i][1] == suit)){
                printf("Duplicate card; ignored.\n");
                duplicate_card = true;
                break;
            }
        }

        if(!duplicate_card){
            hand[cards_read][0] = rank;
            hand[cards_read][1] = suit;
            cards_read++;
        }
    }
}

/*
    analyze_hand: Analisa as cartas lidas e armazena os resultados em variáveis globais.
                   A função verifica se há um flush, straight, four of a kind, three of a kind,
                   ou um par.
*/
void analyze_hand(void){
    int rank, suit, card, pass, run;
    straight = true;
    flush = true;
    four = false;
    three = false;
    pairs = 0;
    pairs = 0;

    /* Organiza as cartas por rank */
    for(pass = 1; pass < NUM_RANKS; pass++){
        for (card = 0; card < NUM_CARDS - pass; card++) {
            rank = hand[card][0];
            suit = hand[card][1];
            if (hand[card+1][0] < rank) {
              hand[card][0] = hand[card+1][0];
              hand[card][1] = hand[card+1][1];
              hand[card+1][0] = rank;
              hand[card+1][1] = suit;
            }
        }
    }

    /* flush */
    for(suit = hand[0][1]; suit < NUM_SUITS; suit++){
        if(hand[card][1] != suit){
            flush = false;
        }
    }
    /* check for straight */
    for (card = 0; card < NUM_CARDS - 1; card++)
    if (hand[card][0] + 1 != hand[card+1][0])
        straight = false;

    /* check for 4-of-a-kind, 3-of-a-kind, and pairs by
    looking for "runs" of cards with identical ranks */
    card = 0;
    while (card < NUM_CARDS) {
    rank = hand[card][0];
    run = 0;
    do {
        run++;
        card++;
    } while (card < NUM_CARDS && hand[card][0] == rank);
    switch (run) {
        case 2: pairs++;      break;
        case 3: three = true; break;
        case 4: four = true;  break;
    }
    }
}

/*
    print_result: Imprime o resultado da análise das cartas.
*/
void print_result(void){
    if(straight && flush){
        printf("Straight flush\n");
    }else if(four){
        printf("Four of a kind\n");
    }else if(three && pairs == 1){
        printf("Full house\n");
    }else if(flush){
        printf("Flush\n");
    }else if(straight){
        printf("Straight\n");
    }else if(three){
        printf("Three of a kind\n");
    }else if(pairs == 2){
        printf("Two pair\n");
    }else if(pairs == 1){
        printf("One pair\n");
    }else{
        printf("High card\n");
    }
    printf("\n\n");
}