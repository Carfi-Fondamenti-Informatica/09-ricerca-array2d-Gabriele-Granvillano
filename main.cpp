#include <iostream>
#include "lib.h"
using namespace std;

int main()
{
    char elenco[10][20];
    char nome_proprio[20];
    riempi(elenco);
    riempi2(nome_proprio);
    vero_falso(elenco, nome_proprio);
    analisi(elenco, nome_proprio);
    return 0;
}
