//
// Created by Iulian on 4/13/2023.
//

#ifndef LAB7_REPO_H
#define LAB7_REPO_H
#include "apartament.h"
class Repo{
private:
    Apartament **undo_vec;
    Apartament elem[10];
    int lungime;
    int lungime_undo;
public:
    Repo();
    void add(Apartament&);
    int remove(Apartament&);
    int update(Apartament& , Apartament&);
    bool find_ap(Apartament&);
    Apartament* get_all();
    int get_size();
    void undo();
    ~Repo();
};
#endif //LAB7_REPO_H
