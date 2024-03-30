

#pragma once
#include <vector>
#include "produs.h"

using namespace std;

class RepositoryFile
{
private:
    vector<Car> prods;
    string filename;
    void save();
public:
    RepositoryFile();
    RepositoryFile(string);
    void add(Car&);
    bool remove(Car&);
    void getAll(Car[], int&);
    int getSize();
    Car getElement(int poz);
    ~RepositoryFile();
};