//
// Created by Iulian on 5/4/2023.
//
#include "repo.h"

Repo::Repo() {
    this->lungime = 0;

}

void Repo::add(Car & c) {
    elem[lungime++] = c;
}

Car *Repo::get_all() {
    return elem;
}

Repo::~Repo() {
    lungime = 0;
}

int Repo::remove(Car & car) {
    int ok = 0;
    for(int i=0 ; i<lungime && ok ==0;i++)
    {
        if(elem[i] == car)
        {
            ok = 1;
            elem[i] = elem[--lungime];
        }
    }

    return ok;
}

int Repo::update(Car & c1, Car & c2) {
    int ok =0 , i=0;
    while(i< lungime and !ok)
    {
        if(elem[i] == c1)
        {
            ok = 1;
            elem[i] = c2;
        }
        i++;
    }

    return ok;
}

bool Repo::find_car(Car & car) {
    int i=0 , ok =0;
    while(i<lungime and !ok)
    {
        if(elem[i] == car)
            ok = 1;
        i++;
    }
    return ok;
}

int Repo::get_size() {
    return lungime;
}

