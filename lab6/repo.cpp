#include "repo.h"
#include <iostream>

Repo::Repo() {
    this->nr_elem = 0;
}
Repo::Repo(std::vector<Patrat> p) {
    for(int i=0;i<p.size();i++)
        this->patrat[i] =p[i];
}

void Repo::citire() {
    float l,x,y;
    cout << "Alegeti lungimea laturii:";
    cin >> l;
    cout<<"Alegeti punctul:"<<endl;
    cout<<"x=";cin>>x;
    cout<<"y=";cin>>y;
    Punct pct1(x,y);
    std::cout << pct1.get_x() << ' ' << pct1.get_y() << '\n';
    Patrat p1(l,pct1);
    this->patrat.push_back(p1);
    this->nr_elem++;
}

void Repo::afisare() {
    for (int i = 0; i < this->patrat.size(); i++) {

        cout << "Lungimea laturii:" << this->patrat[i].get_latura() << endl;
        cout << "Coordonata x:" << this->patrat[i].get_a().get_x() << endl;
        cout << "Coordonata y:" << this->patrat[i].get_a().get_y() << endl;
        cout << endl;
    }
}

void Repo::get_cad1(std::vector<Patrat> p, std::vector<Patrat> &rez) {
    for(int i=0;i<p.size();i++) {
        if (p[i].get_a().get_x() > 0 and p[i].get_a().get_y() > 0)
            rez.push_back(p[i]);
    }
}

void Repo::get_patrat(std::vector<Patrat> &p) {
    for(int i=0;i< this->patrat.size();i++){
        p.push_back(this->patrat[i]);
    }
}

void Repo::secventa_maxima(std::vector<Patrat> p, int &st, int &lungime) {
    int ok = 0, st1=0 , lungime1=1;
    for (int i = 1; i < p.size()/3+1; i++) {
        if (p[i].get_latura() == p[i-1].get_latura()) {
            if (ok == 0) {
                ok = 1;
                st1 = i-1;
                lungime1 = 2;
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

float Repo::max_p(std::vector<Patrat> p, float max) {
    for (int i = 0; i < p.size(); i++) {
        if(p[i].get_latura()>max)
            max = p[i].get_latura();
    }
    return max;
}

