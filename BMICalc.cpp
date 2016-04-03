//============================================================================
// Name        : Project.cpp
// Author      : Matthew
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(){
	cout << "Enter your height in feet: " ;
	double feet;
	cin >> feet;
	cout << "Enter your height in inches: " ;
	double inch;
	cin >> inch;
	cout << "Enter your weight in pounds: " ;
	double weight;
	cin >> weight;

	double hight;
	hight = 12 * feet + inch;
//	int BMI = (weight / (hight * hight)) * 703;
//	brackets used in the text editor define the scope of the function performed
	double BMI = (weight/(hight * hight)) * 703;
	cout << weight;
	cout << (hight * hight);
	cout << "Your BMI is " << BMI << endl;

	return 0;
}

