#include "teste.h"
#include "repo.h"
#include "patrat.h"
#include "punct.h"
#include "cassert"
void teste()
{
    Repo r;
    int k=0,st = -1,l=0;
    Patrat * patrat = new Patrat[20];
    Punct * cadran = new Punct [20];
    Punct * punct = new Punct[20];
    patrat[0].set_latura(2);
    punct[0].set_x(1);
    punct[0].set_y(1);
    patrat[1].set_latura(2);
    punct[1].set_x(1);
    punct[1].set_y(-1);
    patrat[2].set_latura(3);
    punct[2].set_x(1);
    punct[2].set_y(-2);
    patrat[3].set_latura(4);
    punct[3].set_x(1);
    punct[3].set_y(2);
    patrat[4].set_latura(4);
    punct[4].set_x(3);
    punct[4].set_y(1);
    patrat[5].set_latura(4);
    punct[5].set_x(1);
    punct[5].set_y(4);
    assert(r.max_p(-1 , patrat) == 4);
    r.get_cad1(punct , cadran , k);
    assert(cadran[1].get_y() == 2);
    assert(k==4);
    r.secventa_max(patrat,st , l);
    assert(st == 3);
    assert(l==2);

}
