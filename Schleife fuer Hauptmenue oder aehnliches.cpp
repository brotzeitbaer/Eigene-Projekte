#include <iostream>

using namespace std;

int main()
{
	int eingabe = 1;
	
	do
	{
		
		cout << "        |Menue|          \n";
		cout << "1. Fuer erste  Testzone  \n";
		cout << "2. Fuer zweite Testzone  \n";
		cout << "0. Fuer   Spiel Beenden\n\n";
		cin  >> eingabe;
		
		if (eingabe == 1)
		{
			cout << "\nerste testzone\n\n";
		}else if (eingabe == 2)
		{
		
			cout << "\nzweite testzone\n\n";
		}else if (eingabe == 0)
		{
			cout << "man sieht sich\n";
		}
		
		else
		
			cout << "\nungueltige eingabe\n\n";
			
	}while (eingabe != 0);
	
	return 0;
}
