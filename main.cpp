#include "include/Table.hpp"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Table w;
    w.show();
    return a.exec();
}


// #include <iostream>
// #include <string>
// #include <cstdio>
// #include <stdio.h>
// #include "main.hpp"

// using namespace std;

// int main()
// {
// 	printf("I have created 2 players and their names are: %s and %s\n", player1.getName().c_str(), player2.getName().c_str());
// 	printf("%s has: $%d ", player1.getName().c_str(), player1.getMoney());
// 	printf("and %s has: $%d\n", player2.getName().c_str(), player2.getMoney());
// 	printf("Welcome to the Craps Table I will be your dealer!\n");

// 	while (player1.getMoney() > 0)
// 	{
// 		/* code */
// 		int bet;
// 		if (point)
// 		{
// 			printf("The point is: %d\n\n", gamePoint);
// 			printf("Your new total is %d\n", player1.getMoney());
// 			printf("1: Come Bet %d\n2: Don't Come %d\n3: Field Bet %d\n4: Place Bet\n5: No Bet...Roll\nWhat bet would you like to place: ", comeBet, dontComeBet, fieldBet);
// 			cin >> whichBet;
// 			switch (whichBet)
// 			{
// 			case 1:
// 				printf("The current bet is at $%d. How much would you like to bet? ", comeBet);
// 				cin >> bet;
// 				comeBet += bet;
// 					player1.setMoney(player1.getMoney() - bet);
// 				total7Bet += bet;
// 				break;
// 			case 2:
// 				printf("The current bet is at $%d. How much would you like to bet? ", dontComeBet);
// 				cin >> bet;
// 				dontComeBet += bet;
// 					player1.setMoney(player1.getMoney() - bet);
// 				totalNon7Bet += dontComeBet;
// 				break;
// 			case 3:
// 				printf("The current bet is at $%d. How much would you like to bet? ", fieldBet);
// 				cin >> bet;
// 				fieldBet += bet;
// 					player1.setMoney(player1.getMoney() - bet);
// 				totalNon7Bet += fieldBet;
// 				break;
// 			case 4:
// 				int whichPlace;
// 				printf("What number would you like to place: ");
// 				cin >> whichPlace;
// 				switch (whichPlace)
// 				{
// 				case 4:
// 					printf("The current bet is at $%d. How much would you like to bet? ", place4);
// 					cin >> bet;
// 					place4 += bet;
// 					player1.setMoney(player1.getMoney() - bet);
// 					totalNon7Bet += place4;
// 					break;
// 				case 5:
// 					printf("The current bet is at $%d. How much would you like to bet? ", place5);
// 					cin >> bet;
// 					place5 += bet;
// 					player1.setMoney(player1.getMoney() - bet);
// 					totalNon7Bet += place5;
// 					break;
// 				case 6:
// 					printf("The current bet is at $%d. How much would you like to bet? ", place6);
// 					cin >> bet;
// 					place6 += bet;
// 					player1.setMoney(player1.getMoney() - bet);
// 					totalNon7Bet += place6;
// 					break;
// 				case 8:
// 					printf("The current bet is at $%d. How much would you like to bet? ", place8);
// 					cin >> bet;
// 					place8 += bet;
// 					player1.setMoney(player1.getMoney() - bet);
// 					totalNon7Bet += place8;
// 					break;
// 				case 9:
// 					printf("The current bet is at $%d. How much would you like to bet? ", place9);
// 					cin >> bet;
// 					place9 += bet;
// 					player1.setMoney(player1.getMoney() - bet);
// 					totalNon7Bet += place9;
// 					break;
// 				case 10:
// 					printf("The current bet is at $%d. How much would you like to bet? ", place10);
// 					cin >> bet;
// 					place10 += bet;
// 					player1.setMoney(player1.getMoney() - bet);
// 					totalNon7Bet += place10;
// 					break;
				
// 				default:
// 					printf("Not a valid option. \n");
// 					break;
// 				}
// 				printf("Your bets total up to: %d\n", totalNon7Bet);
// 				break;

// 			case 5:
// 				rollDice();
// 				printf("The dice have been rolled and the result is: %d %d\n", tableDie1.getValue(), tableDie2.getValue());
// 				result = tableDie1.getValue() + tableDie2.getValue();
// 				if (result == 7)
// 				{
// 					int winnings = total7Bet;
// 					player1.setMoney(player1.getMoney() + winnings);
// 					comeBet = 0;
// 					dontComeBet = 0;
// 					fieldBet = 0;
// 					place4 = 0;
// 					place5 = 0;
// 					place6 = 0;
// 					place8 = 0;
// 					place9 = 0;
// 					place10 = 0;
// 					passLineBet = 0;
// 					dontPassBet = 0;
// 					point = false;
// 				}
// 				else if(result == gamePoint){
// 					int winnings = (passLineBet * 2) - dontPassBet;
// 					player1.setMoney(player1.getMoney() + winnings);
// 					passLineBet = 0;
// 					dontPassBet = 0;
// 					point = false;
// 				}
// 				printf("Your new total is %d\n", player1.getMoney());
// 				break;
			
// 			default:
// 				printf("Not a valid option.\n");
// 				break;
// 			}
// 		}
// 		else
// 		{
// 			printf("Come out roll! 7 and 11 wins. 2 and 3 loses\n\n");
// 			while (!point)
// 			{
// 				printf("Your new total is %d\n", player1.getMoney());
// 				printf("1: Pass Line %d\n2: Don't Pass %d\n3: Field Bet %d\n4: No Bet...Roll\nWhat bet would you like to place: ", passLineBet, dontPassBet, fieldBet);
// 				cin >> whichBet;
// 				switch (whichBet)
// 				{
// 				case 1:
// 					printf("The current bet is at $%d. How much would you like to bet? ", passLineBet);
// 					cin >> bet;
// 					passLineBet += bet;
// 					player1.setMoney(player1.getMoney() - bet);
// 					break;
// 				case 2:
// 					printf("The current bet is at $%d. How much would you like to bet? ", dontPassBet);
// 					cin >> bet;
// 					dontPassBet += bet;
// 					player1.setMoney(player1.getMoney() - bet);
// 					break;
// 				case 3:
// 					printf("The current bet is at $%d. How much would you like to bet? ", fieldBet);
// 					cin >> bet;
// 					fieldBet += bet;
// 					player1.setMoney(player1.getMoney() - bet);
// 					break;
// 				case 4:
// 					printf("Rolling the dice now\n\n");
// 					rollDice();
// 					printf("The dice have been rolled and the result is: %d %d\n\n", tableDie1.getValue(), tableDie2.getValue());
// 					result = tableDie1.getValue() + tableDie2.getValue();
// 					if(result == 7 || result == 11 ){
// 						int winnings = passLineBet - dontPassBet;
// 						player1.setMoney((player1.getMoney() + winnings));
// 						dontPassBet = 0;
// 					}
// 					else if (result == 2 || result == 3 ){
// 						passLineBet = 0;
// 					}
// 					else if (result == 12){
// 						player1.setMoney((player1.getMoney()));
// 					}
// 					else{
// 						point = true;
// 						gamePoint = result;			
// 					}
// 					break;
				
// 				default:
// 					printf("Not a valid option.\n");
// 					break;
// 				}
				
// 			}

// 		}
// 	}return 0;
// }

// void rollDice(){
// 	tableDie1.roll();
// 	tableDie2.roll();
// }