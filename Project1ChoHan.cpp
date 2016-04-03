//============================================================================
// Name			:Project3.cpp
// Author		:Matthew Perez
// Class		:CsC 103
// Section		:CC
// Description	: Cha Han Game
//============================================================================
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int betValue(int P1,int P2){
	if(P1>P2){
		return (rand()%(P2/2))+1;
	}
	else{
		return (rand()%P2)+1;
	}
}
int PlayerChoice (){
	return (rand()%2)+1;
}
int result(int Guess, int Player, int Bank, int Bet,int diceroll){
	if(Guess == diceroll){
		int balance = Bank + Bet;
		cout<<"Player "<<Player<<", you win! \nYou now have: $"<<balance <<"\n\n";
		return balance ;
	}
	else{
		int balance2 = Bank - Bet;
		cout<<"Player "<<Player<<", you lost.  :( \nYou now have: $"<<balance2<<"\n\n";
		return balance2 ;
	}
}
int main(){
	int Players[]={1,2,3};
	int PlayerBank[]={100,100,100};
	int Bet; int Guess;int diceroll = ((rand()%2)+1);
	while(PlayerBank[0]!= 0){
		cout<<"You have: $"<<PlayerBank[0]<<"\n"<<"Player 2 has: $"<<PlayerBank[1]<<"\n"<<"Player 3 has: $"<<PlayerBank[2]<<"\n"<<"Please place a bet :";
		cin>>Bet; cout<< "\n";
		if(Bet<=PlayerBank[0]){
			cout<<"The dice have been cast! \nWill they be odd or even? \nSelect '1' for odd or '2' for even. \n1)Odd \n2)Even \n";
			cin>>Guess;
			if(Guess==1||Guess==2){
				PlayerBank[0] = result(Guess, Players[0],PlayerBank[0],Bet, diceroll);
				PlayerBank[1] = result(PlayerChoice(), Players[1],PlayerBank[1],betValue(PlayerBank[0],PlayerBank[1]),diceroll);
				PlayerBank[2] = result(PlayerChoice(), Players[2],PlayerBank[2],betValue(PlayerBank[0],PlayerBank[2]),diceroll);
			}
			else{cout<<"That is not a valid selection! \n Please try again.\n";
			}
		}
		else if(Bet >= PlayerBank[0]){
			cout<<"You don't have that much money!\n";
		}
	}
	if(PlayerBank[0] == 0){
		cout<<"Your broke!";
	}
}
