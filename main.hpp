#include "include/dice.hpp"
#include "include/player.hpp"

int gamePoint;
int totalNon7Bet;
int total7Bet;
int whichBet;
int result;
bool endBet = false;


Die tableDie1(6);
Die tableDie2(6);	
Player player1("Josh", 200);
Player player2("Elise", 2500);

void rollDice();