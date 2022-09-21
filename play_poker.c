#include <stdio.h>
#include <stdlib.h>
#include "types.h"

void poker_init(struct decks *p);
void print_cards(struct decks *p);

int main()
{
    struct suits computer_cards[14], players_cards[14]; /* include jokers */
    struct decks computer, players;
    struct decks *p1 = &computer, *p2 = &players;
    
    poker_init(p1);
    poker_init(p2);

    print_cards(p1);

    system("pause");
    return 0;
}

void poker_init(struct decks *p)
{
    (*p).num = 0;
    //(*p).cards[14][4] = {0};
    for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            (*p).cards[i][j] = 0;
        }   
    }

    return;
}

void print_cards(struct decks *p)
{
    printf("computer still have %d cards.\n", (*p).num);
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", (*p).cards[i][j]);
        }
        printf("\n");
    }
    printf("%d\t%d\t\n", (*p).cards[13][0], (*p).cards[13][1]);
}


/*
void poker_Init(int *p)
{
    struct suits computer_cards[14], players_cards[14];    
    for (int i = 0; i < 14; i++)
    {
        computer_cards[i].num = 4;
        computer_cards[i].diamonds = 1;
        computer_cards[i].clubs = 1;
        computer_cards[i].hearts= 1;
        computer_cards[i].spades = 1;
        computer_cards[i].joker_mag = 1;
        computer_cards[i].joker_min = 1;
    }
    
}
*/