//
// Created by Iulian on 4/13/2023.
//
#include "repo.h"

Repo::Repo() {
    this->lungime = 0;
    this->lungime_undo = 0;
    this->undo_vec = new Apartament * [10];
}

void Repo::add(Apartament & apartament) {
    this->undo_vec[this->lungime_undo] = new Apartament[10];
    for(int i=0;i< this->lungime;i++)
        this->undo_vec[this->lungime_undo][i] = this->elem[i];
    this->lungime_undo++;
    this->elem[lungime] = apartament;
    this->lungime++;
}

Apartament *Repo::get_all() {
    return elem;
}

int Repo::get_size() {
    return this->lungime;
}

Repo::~Repo() {
    lungime = 0;
}

int Repo::remove(Apartament &apartament) {
    this->undo_vec[this->lungime_undo] = new Apartament[10];
    for(int i=0;i< this->lungime;i++)
        this->undo_vec[this->lungime_undo][i] = this->elem[i];
    this->lungime_undo++;
    int ok = 0;
    for(int i =0 ; i<lungime && ok == 0;i++)
    {
        if(elem[i] == apartament)
        {
            ok = 1;
            elem[i] = elem[--lungime];
        }
    }
    return ok;

}

int Repo::update(Apartament & ap_vechi, Apartament & ap_nou) {
    this->undo_vec[this->lungime_undo] = new Apartament[10];
    for(int i=0;i< this->lungime;i++)
        this->undo_vec[this->lungime_undo][i] = this->elem[i];
    this->lungime_undo++;
    int i=0 , ok=0;
    while(i<lungime and !ok){
        if(elem[i] == ap_vechi)
        {
            ok = 1;
            elem[i] = ap_nou;
        }
        i++;
    }
    return ok;
}

bool Repo::find_ap(Apartament &a) {
    int i=0 , ok=0;
    while(i < lungime && !ok){
        if(elem[i] == a)
            ok = 1;
        i++;
    }
    return ok;
}

void Repo::undo() {
    this->lungime_undo--;
    for(int i=0;i<this->lungime_undo;i++)
    {
        this->elem[i] = this->undo_vec[this->lungime_undo][i];
    }
    this->lungime = this->lungime_undo;
}



