//
// Created by Max on 31.10.2022.
//

#ifndef BLACKJACK_KARTEN_CREATE_BLACKJACK_KARTEN_CREATE_H
#define BLACKJACK_KARTEN_CREATE_BLACKJACK_KARTEN_CREATE_H
#endif //BLACKJACK_KARTEN_CREATE_BLACKJACK_KARTEN_CREATE_H
#include "string"

using namespace std;

class Card{
public:
    enum color {Hearts ,Clubs, Diamonds, Spades};

    enum number{Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King};
};

 string toString(string string1, string string2);