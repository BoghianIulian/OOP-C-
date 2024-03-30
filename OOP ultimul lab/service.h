

#pragma once
#include "repofile.h"
#include "exceptiival.h"
#include "repository.h"
#include "repofilemost.h"

class Service
{
private:
    RepositoryFile repo;
    //Repository repo;
    Validator vali;
    int rest = 1000;
public:
    Service();
    Service(RepositoryFile&);
    Service(Service&);
    ~Service();
    void add(int, string, int);
    void remove(int);
    void getAll(Car[], int&);
    int achizitie(int, int, int&);
};
