#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	cout << "Please enter the values of A,B, and C:" << endl;

	cout << "Variable a: " ;
	double a;
	cin >> a;

	cout << "Variable b: " ;
	double b;
	cin >> b;

	cout << "Variable c: " ;
	double c;
	cin >> c;
	cout << "A = " << a << ", B = " << b << ", C = " << c << endl;

	double BSquared = b * b ;
	double FourAC = 4 * a * c;
	double difference = BSquared - FourAC ;

	cout << "B squared = " << BSquared << "\n" ;
	cout << " FourAC = " << FourAC << "\n" ;
	cout << "Difference = " << difference << "\n" ;

	double PosetiveRoot = (-b + (sqrt(difference)))/ (2 * a );
	double NegativeRoot = (-b - (sqrt(difference)))/ (2 * a );

	cout << "Your X factors are: " << PosetiveRoot << " and " << NegativeRoot << endl;

	return 0;
}


//x= []-b (+/-) (b^2-4(a)(c))^(1/2)]/2a
