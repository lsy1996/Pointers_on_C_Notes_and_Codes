#ifndef TYPES_H
#define TYPES_H
struct suits
{
    int num;
    int diamonds;
    int clubs;
    int hearts;
    int spades;
    int joker_mag;
    int joker_min;
};

struct decks
{
    char *ownername;
    int num;
    int cards[14][4]; /* idx=13 for jokers */
};

#endif