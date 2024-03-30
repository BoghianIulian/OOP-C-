

#ifndef LAB6_REPO_H
#define LAB6_REPO_H
#include <vector>
#include "patrat.h"
class Repo{
private:
    std::vector<Patrat> patrat;
    int nr_elem;
public:
    Repo();
    explicit Repo(std::vector<Patrat> p);
    void citire();
    void afisare();
    void get_patrat(std::vector<Patrat> &p);
    void get_cad1(std::vector<Patrat> p ,std ::vector<Patrat> &rez);
    void secventa_maxima(std::vector<Patrat> p ,int &st , int &l);
    float max_p(std::vector<Patrat> p , float max);
};
#endif //LAB6_REPO_H
