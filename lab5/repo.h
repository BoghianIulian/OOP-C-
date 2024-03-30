//
// Created by Iulian on 3/30/2023.
//

#ifndef LAB5_REPO_H
#define LAB5_REPO_H
#include "patrat.h"

class Repo{
private:
    Patrat *patrat;
    Punct *punct;
    int nr_elem;
public:
    Repo();
    int get_nrelem();
    void get_patrat(Patrat*& p);
    void get_punct(Punct*& pct);
    void get_cad1(Punct* p , Punct*& rez , int &l);
    void secventa_max(Patrat *p , int &st , int &l);
    float max_p(float max , Patrat*p);
    void adauga(Patrat& p , Punct& pct);
    void afisare();
};
#endif //LAB5_REPO_H
