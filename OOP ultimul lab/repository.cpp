

#include "repository.h"
#include <vector>
#include <algorithm>

Repository::Repository()
{
}

Repository::Repository(vector<Car> prd)
{
    for(int i=0;i<prd.size();i++)
        prods[i] = prd[i];
}

Repository::Repository(const Repository &r)
{
    for(int i=0;i<r.prods.size();i++)
        prods[i] = r.prods[i];
}

void Repository::add(const Car &p)
{
    prods.push_back(p);
}

int Repository::remove(const Car &p)
{
    int gasit =0;
    auto it = std::find(prods.begin(), prods.end(), p);
    if(it!=prods.end())
    {
        prods.erase(it);
        gasit = 1;
    }
    return gasit;
}

void Repository::getAll(Car *prd, int &s)
{
    for(int i=0;i<prods.size();i++)
        prd[i] = prods[i];
    s = prods.size();
}

Repository::~Repository()
{
}

int Repository::getSize()
{
    return prods.size();
}

Car Repository::getElement(int poz)
{
    return prods[poz];
}

