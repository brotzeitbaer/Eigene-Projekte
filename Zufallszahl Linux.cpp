#include <QCoreApplication>
#include <iostream>
#include <time.h>

using namespace std;

int main ()
{
    int zufallszahl;
    int bereich = 10*10;

    srand((int)time(NULL));

    zufallszahl = (rand()%bereich)+1;

    cout << zufallszahl << endl;

    return 0;

}
