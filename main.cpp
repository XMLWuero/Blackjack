#include <iostream>
#include "Blackjack_Karten_Create.h"
#include <vector>

using namespace std;

int main() {
    Card a;
    string sCard;
    vector <string> vCards;

    string ColorA[4] = {"Hearts", "Clubs", "Diamonds","Spades"};
    string NumberA[13] = {"Ace","Two", "Three", "Four", "Five", "Six", "Seven",
                          "Eight", "Nine", "Ten", "Jack", "Queen", "King"};


        for (int i = 0; i < 13; ++i) {
            for (int j = 0; j < 4; ++j) {
                sCard = toString(ColorA[j], NumberA[i]);
                vCards.push_back(sCard);
            }

        }
    for (int i = 0; i < 52; ++i) {
        cout << vCards[i] << endl;

    }
    return 0;
}
