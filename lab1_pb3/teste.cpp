#include "teste.h"
#include "numar_max.h"
#include "cassert"

int v[10];

void teste() {
    cifre(1234,v);
    assert(numar_maxim(0, v) == 4321);
    for(int i=0;i<=9;i++)
        v[i]=0;
    cifre(111,v);
    assert(numar_maxim(0, v) == 111);
    for(int i=0;i<=9;i++)
        v[i]=0;
    cifre(0,v);
    assert(numar_maxim(0, v) == 0);
}
