#include "teste.h"
#include "secvente_lista.h"
#include <cassert>

void teste()
{
    int n=7 , v[10] , st = -1 , llungime = 0;

    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    v[3] = 4;
    v[4] = 5;
    v[5] = 6;
    v[6] = 7;
    nr_prime(n , v , st , llungime);
    assert(st == 1);
    assert(llungime == 2);
    st = -1;
    llungime = 0;
    interval(n,v,st,llungime,2,5);
    assert(st == 1);
    assert(llungime == 4);

}