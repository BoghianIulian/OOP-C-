//
// Created by Iulian on 5/4/2023.
//

#ifndef LAB9_REPO_H
#define LAB9_REPO_H
#include "car.h"
class Repo{
private:
    Car elem[20];
    int lungime;
public:
    Repo();
    void add(Car&);

    virtual Car* get_all();
    int remove(Car&);
    int update(Car& , Car&);
    bool find_car(Car&);

    virtual int get_size();
    ~Repo();
};
#endif //LAB9_REPO_H
