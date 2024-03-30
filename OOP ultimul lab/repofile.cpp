
#include "repofile.h"
#include <fstream>
#include <algorithm>

using namespace std;

void RepositoryFile::save()
{
    ofstream f(filename);
    for(int i=0;i< prods.size() -1;i++)
    {
        Car crt = prods[i];
        f<<crt.Tostring()<<endl;
    }
    Car crt = prods[prods.size() - 1];
    f<<crt.Tostring()<<endl;
    f.close();
}

RepositoryFile::RepositoryFile()
{
    filename = "";
}

RepositoryFile::RepositoryFile(string fn)
{
    filename = fn;
    ifstream f(fn);
    while(!f.eof())
    {
        int cod;
        int pret;
        string nume;
        f>>cod>>nume>>pret;
        Car p(cod,nume,pret);
        prods.push_back(p);
    }
    f.close();
}

void RepositoryFile::add(Car &p)
{
    prods.push_back(p);
    save();
}

bool RepositoryFile::remove(Car &p)
{
    auto it = std::find(prods.begin(), prods.end(), p);
    if(it!=prods.end())
    {
        prods.erase(it);
        save();
        return true;
    }
    return false;
}



RepositoryFile::~RepositoryFile()
{
    filename = "";
}

int RepositoryFile::getSize()
{
    return prods.size();
}

Car RepositoryFile::getElement(int poz)
{
    return prods[poz];
}

void RepositoryFile::getAll(Car *byp, int &s)
{
    for(int i=0;i<prods.size();i++)
        byp[i] = prods[i];
    s = prods.size();
}



