#include <iostream>

using namespace std;

int main()
{
	int eingabe = 1;
	
	do
	{
		
		cout << "        |Menue|          \n";
		cout << "1. fuer erste  testzone  \n";
		cout << "2. fuer zweite testzone  \n";
		cout << "0. fuer         beenden\n\n";
		cin  >> eingabe;
		
		if (eingabe == 1)
		{
			cout << "\nerste testzone\n\n";
		}else if (eingabe == 2)
		{
		
			cout << "\nzweite testzone\n\n";
		}else if (eingabe == 0)
		{
			
		}
		
		else
		
			cout << "\nungueltige eingabe\n\n";
			
	}while (eingabe != 0);
	
	return 0;
}
