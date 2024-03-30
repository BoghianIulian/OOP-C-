
#pragma once
#include "repository.h"
#include "produs.h"
#include <string>

using namespace std;

class RepoFileMost: public Repository
{
private:
    string filename;
public:
    void save();
    RepoFileMost();
    RepoFileMost(string);
    void add(Car&);
    bool remove(Car&);
    ~RepoFileMost();
};
