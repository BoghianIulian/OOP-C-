#include "afisare.h"
#include "citire.h"
#include "numar_max.h"
#include "teste.h"

int x[10];
int main() {
    teste();

    int nr,nr_max=0;
    nr=citire_numar(1);
    cifre(nr,x);
    nr=numar_maxim(nr_max,x);
    afisare_numar(nr);
    return 0;
}
