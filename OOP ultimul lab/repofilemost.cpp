

#include "repofilemost.h"
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

void RepoFileMost::save()
{
    ofstream f(filename);
    for(int i=0;i< prods.size() ;i++)
    {
        Car crt = prods[i];
        f<<crt.Tostring()<<endl;
    }
    Car crt = prods[prods.size()];
    f<<crt.Tostring()<<endl;
    f.close();
}

RepoFileMost::RepoFileMost() {
}

RepoFileMost::RepoFileMost(string fn) {
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

void RepoFileMost::add(Car &p) {
    Repository::add(p);
    save();
}

bool RepoFileMost::remove(Car &p) {
    auto it = std::find(prods.begin(), prods.end(), p);
    if(it!=prods.end())
    {
        prods.erase(it);
        save();
        return true;
    }
    return false;
}

RepoFileMost::~RepoFileMost() {
}



