
#pragma once
#include "produs.h"
#include <vector>

class Repository
{
protected:
    vector<Car> prods;
public:
    Repository();
    Repository(vector<Car>);
    Repository(const Repository&);
    void add(const Car&);
    int remove(const Car&);
    void getAll(Car[], int&);
    int getSize();
    Car getElement(int poz);
    ~Repository();
};
