#ifndef PLAYER_H_INCLUDED

#define PLAYER_H_INCLUDED
#include <string>
using namespace std;

class Player
{
    private:
    int bankRoll; // Amount of money player has
    int value; // The die's value
    string playerName;

    public:
    Player(string name, int money); //parameterized constructor

    void roll(); // Rolls the die
    int getValue(); // Returns the die's value

    void setMoney(int newAmount);
    int getMoney();
    string getName(); // Returns the die's value
};

#endif // PLAYER_H_INCLUDED