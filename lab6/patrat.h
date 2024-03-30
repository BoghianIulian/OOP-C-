#ifndef LAB4_PATRAT_H
#define LAB4_PATRAT_H
#include "punct.h"
#include <iostream>
using namespace std;
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
    void set_latura(float l);
    ~Patrat();
    Punct get_a() const;
    Punct get_b() const;
    Punct get_c() const;
    Punct get_d() const;

};
#endif //LAB4_PATRAT_H
