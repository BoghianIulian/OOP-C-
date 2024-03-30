//
// Created by Iulian on 3/23/2023.
//

#ifndef LAB4_PATRAT_H
#define LAB4_PATRAT_H
#include "punct.h"
class Patrat{
private:
    float latura;
    Punct a ,b,c,d;
    void find_b();
    void find_c();
    void find_d();
public:
    Patrat();
    explicit Patrat(float l , Punct pct);
    Patrat(const Patrat &p);
    float get_latura();
    Punct get_punct();
    void set_latura(float l);
    ~Patrat();
    float aria();
    float perimetru();
    float diagonala();
    float semilatura();
    Punct get_a();
    Punct get_b();
    Punct get_c();
    Punct get_d();

};
#endif //LAB4_PATRAT_H
