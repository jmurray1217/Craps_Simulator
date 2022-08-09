#include "player.hpp"

Player::Player(string name, int moneyAmount){
    bankRoll = moneyAmount;
    playerName = name;
}

int Player::getValue(){
    return value;
}
int Player::getMoney(){
    return bankRoll;
}

void Player::setMoney(int newAmount){
    bankRoll = newAmount;
}

string Player::getName(){
    return playerName;
}