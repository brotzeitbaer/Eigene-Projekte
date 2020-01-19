#include <iostream>

using namespace std;

int main()
{
	// Mathematik c++ Grundkurs:
	
	int Punkte, Punkte2, Punkte3, Punkte4;

	// Standart Rechenarten funktionieren wie gewohnt:

	Punkte = 5 - 3;

	cout << "Willkommen im Mathematik C++ Grundkurs" << endl;
	cout << "5 - 2 = " << Punkte << endl; 

	Punkte2 = 10;
	Punkte2 = Punkte2 * 3; // geht natürlich auch mit +, -, /.

	cout << "10 * 3 = " << Punkte2 << endl;

	// Das oben gezeigte geht auch einfacher:

	Punkte3 = 10;
	Punkte3 *= 50; // *= ist das selbe wie: Punkte2 = Punkte2 * 20;
				   // neben *= gibt es natürlcih auch +=, -=, /=.

	cout << "10 * 50 = " << Punkte3 << endl;

	// Möchte man eine Zahl einfach um eins erhöhen:

	Punkte4 = 10;
	Punkte4++; // entspricht: Punkte = Punkte + 1 oder Punkte += 1. Geht natürlich auch mit minus eins (--)

	cout << "10 + 1 = " << Punkte4 << endl;

	return 0;
}
