#include "teste.h"
#include "secventa_lista.h"
#include <cassert>

void teste()
{
    assert(nr_prim(1) == 0);
    assert(nr_prim(2) == 1);
    assert(nr_prim(4) == 0);
    int n=7 , st = -1 , llungime = 0;
    int * v =new int[15];

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
    delete []v;
    v= nullptr;

}
