#include "teste.h"
#include "patrat.h"
#include <cassert>
void teste()
{
    Patrat p1(5);
    Patrat p2(1);
    assert(p1.get_latura() == 5);
    assert(p1.aria() == 25);
    assert(p1.semilatura() == 2.5);
    assert(p1.perimetru() == 20);
    p2 = Patrat(p1);
    assert(p2.get_latura() == 5);
}
