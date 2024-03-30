#include "repo.h"
#include <iostream>
using namespace std;
Repo::Repo() {
    this->punct = new Punct[20];
    this->patrat = new Patrat[20];
    this ->nr_elem = 0;
}



void Repo::adauga(Patrat &p , Punct &pct) {
    this->patrat[this ->nr_elem] = p;
    this->punct[this->nr_elem] = pct;
    nr_elem++;
}


int Repo::get_nrelem() {
    return this->nr_elem;
}

void Repo::get_patrat(Patrat* &p) {
    for(int i=0;i<=this->nr_elem;i++)
        p[i] = this->patrat[i];
}

void Repo::get_punct(Punct *&pct) {
    for(int i=0;i<= this->nr_elem;i++)
        pct[i] = this->punct[i];
}

void Repo::get_cad1(Punct *p, Punct* &rez , int& lungime) {
    for(int i=0;i<= this->nr_elem;i++)
        if(p[i].get_x()>0 and p[i].get_y()>0)
        {
            rez[lungime] = p[i];
            lungime++;
        }
}

void Repo::secventa_max(Patrat* p, int &st, int &lungime) {
    int ok = 0, st1=0 , lungime1=1;
    for (int i = 1; i < this ->nr_elem; i++) {
        if (p[i].get_latura() == p[i-1].get_latura()) {
            if (ok == 0) {
                ok = 1;
                st1 = i-1;
                lungime1 = 1;
            } else {
                lungime1 = lungime1  +1;
            }
        } else {
            ok = 0;
            if (lungime1 >= lungime) {
                st = st1;
                lungime = lungime1;
            }
        }
    }
    if (lungime1 >= lungime) {
        st = st1;
        lungime = lungime1;
    }
}

float Repo::max_p(float max,Patrat*p) {
    for (int i = 0; i < this->nr_elem; i++)
        if (patrat[i].get_latura() > max)
            max = patrat[i].get_latura();
    return max;

}

void Repo::afisare() {
    for(int i=0 ; i<nr_elem ; i++)
    {
        Patrat p = patrat[i];
        cout<<"Latura patratului "<<i+1<<" este:"<<p.get_latura()<<endl;
        cout<<"Aria patratului "<<i+1<<" este:"<<p.aria()<<endl;
        cout<<"Perimetrul patratului "<<i+1<<" este:"<<p.perimetru()<<endl;
        cout<<"Diagonala patratului "<<i+1<<" este:"<<p.diagonala()<<endl;
        cout<<"Semilatura patratului "<<i+1<<" este:"<<p.semilatura()<<endl;

    }
}
