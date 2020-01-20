#include <iostream>

using namespace std;

int main()
{
	/* Alle verschiedene Datentypen im Überblick:
	   char = charakter : dient zur Speicherung von Zeichen und Buchstaben.
	   int = integer : gibt nur ganze Zahlen an. Sowohl Positiv als auch Negativ.
	   short : gibt auch nur ganze Zahlen aus, ist aber nur 2 Bytes groß anstatt wie beim int 4 Bytes.
	   long : auch ganze Zahlen jedoch kann der Wertebereich größer sein als beim short.
	   float = Fließkommazahl : kann kommazahlen ausgeben. Es wird mit einem punkt das Komma gesetzt und
	   ein kleines f muss am ende der Zahl stehen.
	   double : wie float nur größer bzw genauer. Der Zahl folgt hier ein kleies d.
	   bool = boolean : gibt die zwei Zustände wahr oder falsch aus. Null = falsch, alles andere = wahr.
	   */
	cout <<"Alle verschiedene Datentypen im Ueberblick:"                           << endl
		<< "-------------------------------------------\n"                          << endl
		<< "bool   = Boolean        : wahr oder falsch Ausgabe."                    << endl
		<< "int    = Integer        : Ganze Zahlen. postiv und negativ."            << endl
		<< "short  = kurz           : nur 2 Bytes gross. Ansonsten gleich mit int." << endl
		<< "long   = lang           : wie int aber groesser als short."             << endl
		<< "char   = Charakter      : Zeichen und Buchstaben ausgeben."             << endl
		<< "float  = Fließkommazahl : gibt Kommazahlen aus."                        << endl
		<< "double = doppelt        : wie float nur groesser.\n"                    << endl;

	cout <<    "speicherbedarf der datentypen:"					  << endl
			<< "------------------------------\n"                 << endl
			<< "bool benoetigt  : " << sizeof(bool)   << " Bytes" << endl
		   	<< "int benoetigt   : " << sizeof(int)    << " Bytes" << endl
			<< "short benoetigt : " << sizeof(short)  << " Bytes" << endl
			<< "long benoetigt  : " << sizeof(long)   << " Bytes" << endl
			<< "char benoetigt  : " << sizeof(char)   << " Bytes  << endl
			<< "float benoetigt : " << sizeof(float)  << " Bytes" << endl
			<< "double benoetigt: " << sizeof(double) << " Bytes" << endl;

		/*mit "sizeof" können wir den speicherbedarf ausgeben.
		pro byte kann man 256 werte darstellen.
		2 bytes sind dann 256 * 256 = 65536.
		bei "signed" verschiebt sich das ganze natrülich ins negative.
		*/

	return 0;
}
