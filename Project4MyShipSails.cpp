#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

class Dealer{
//Variables
    vector<string> CardDrop;

	string Deck = {
	{"HA","H2","H3","H4","H5","H6","H7","H8","H9","H10","HJ","HQ","HK"},//Hearts
	{"SA","S2","S3","S4","S5","S6","S7","S8","S9","S10","SJ","SQ","SK"},//Spades
	{"CA","C2","C3","C4","C5","C6","C7","C8","C9","C10","CJ","CQ","CK"},//Clubs
	{"DA","D2","D3","D4","D5","D6","D7","D8","D9","D10","DJ","DQ","DK"} //Diamonds
	};

//Functions
    void setcardDrop(int min){

    }

};

class Player{
public:
	Player(){cout<<"Constructor\n";}
//variables
	vector<string>Hand;
	int Hearts,Spades,Clubs,Diamonds;
//functions
	void HandGen(string *arr){
        int A = rand()%4 + 1, B = rand()%13 + 1;
        switch(A){
        case 1: Hearts += 1;
        break;
        case 2: Spades += 1;
        break;
        case 3: Clubs += 1;
        break;
        case 4: Diamonds += 1;
        break;
        }

	};
    string DropCard(){
     int CrdIndx = min(min(Hearts, Spades),min(Clubs, Diamonds));
        cout<<CrdIndx;
    return 0;
    }
	~Player(){cout<<"Destructor\n";}
};

int main() {
srand(time(0));

    Player User;
    Player P1;
    Player P2;
    Player P3;
    Player P4;

	return 0;
}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Dealer{
//Variables
    vector<string> CardDrop;

	vector<string> Deck[4][13]={
	{"HA","H2","H3","H4","H5","H6","H7","H8","H9","H10","HJ","HQ","HK"},//Hearts
	{"SA","S2","S3","S4","S5","S6","S7","S8","S9","S10","SJ","SQ","SK"},//Spades
	{"CA","C2","C3","C4","C5","C6","C7","C8","C9","C10","CJ","CQ","CK"},//Clubs
	{"DA","D2","D3","D4","D5","D6","D7","D8","D9","D10","DJ","DQ","DK"} //Diamonds
	};

//Functions
    void setcardDrop(int min){

    }

};

class Player{
public:
	Player(){cout<<"Constructor\n";}
//variables
	vector<string>Hand;
	int Hearts,Spades,Clubs,Diamonds;
//functions
	void HandGen(string *arr){
        int A = rand()%4 + 1, B = rand()%13 + 1;
        switch(A){
        case 1: Hearts += 1;
        break;
        case 2: Spades += 1;
        break;
        case 3: Clubs += 1;
        break;
        case 4: Diamonds += 1;
        break;
        }

	};
    string DropCard(){
     int CrdIndx = min(min(Hearts, Spades),min(Clubs, Diamonds));
        cout<<CrdIndx;
    return 0;
    }
	~Player(){cout<<"Destructor\n";}
};

int main() {
srand(time(0));

    Player User;
    Player P1;
    Player P2;
    Player P3;
    Player P4;

	return 0;
}
