//
// Created by Iulian on 4/13/2023.
//
#include<cassert>
#include "teste.h"
#include "repo.h"
#include <vector>

void teste()
{
    std::vector<Patrat> patrat, p, cad1;
    Repo r;
    patrat[0].set_latura(1);
    patrat[0].get_a().set_x(1);
    patrat[0].get_a().set_y(1);
    patrat[1].set_latura(1);
    patrat[1].get_a().set_x(1);
    patrat[1].get_a().set_y(2);
    patrat[2].set_latura(2);
    patrat[2].get_a().set_x(1);
    patrat[2].get_a().set_y(3);
    patrat[3].set_latura(2);
    patrat[3].get_a().set_x(1);
    patrat[3].get_a().set_y(-4);
    assert(r.max_p(patrat , -1) ==2);
    r.get_cad1(patrat , cad1);
    assert(cad1.size() == 3);
    int st = -1 , l=0;
    r.secventa_maxima(p,st,l);
    assert(st == 0);
    assert(l == 2);
}

