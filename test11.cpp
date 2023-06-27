#include <iostream>
#include "test12.h"
using namespace std;
#define FRENCH
#define ANGLAIS
#define AFFICHER(x) cout << x << endl;
#define DIVISER(x, y) ((x) / (y))

int main()
{
BonjourJL();
BonjourJLM();
#ifdef FRENCH
    AFFICHER("BONJOUR");
#else
    cout << "HELLO";
#endif

#ifdef ANGLAIS
    cout << "HELLO" << endl;
#else
    cout << "Bonjour";
#endif

float valeur = DIVISER(5.0, 3.0);
    AFFICHER(valeur);

if (DIVISER(8, 2) == 4)
    cout << DIVISER(1.0, 5.0) << endl;

BonjourJL();

    return 0;
}
