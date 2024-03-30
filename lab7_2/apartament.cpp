//
// Created by Iulian on 4/13/2023.
//
#include "apartament.h"
#include<cstring>

Apartament::Apartament() {
    this->suma = 0;
    this->nr_ap = 0;
    this->tip = nullptr;
}

Apartament::Apartament(int s , int nr , const char* t) {
    this->suma = s;
    this->nr_ap = nr;
    this->tip = new char(strlen(t)+1);
    strcpy(this->tip , t);
}

Apartament::Apartament(const Apartament& apartament) {
    this->suma = apartament.suma;
    this->nr_ap = apartament.nr_ap;
    this ->tip = new char(strlen(apartament.tip)+1);
    strcpy(this->tip , apartament.tip);
}

Apartament::~Apartament() {
    this->suma = 0;
    this ->nr_ap = 0;
    if(this->tip)
        delete[] this->tip;
}

int Apartament::get_suma() {
    return this->suma;
}

void Apartament::set_suma(int s) {
    this->suma=s;
}

int Apartament::get_nrAp() {
    return this->nr_ap;
}

void Apartament::set_nrAp(int nr) {
    this->nr_ap = nr;
}

const char *Apartament::get_tip() {
    return this->tip;
}

void Apartament::set_nume(const char * t) {
    if(this->tip)
        delete[] this->tip;
    this->tip = new char(strlen(t)+1);
    strcpy(this->tip , t);
}

Apartament &Apartament::operator=(const Apartament& apartament) {
    if(this != &apartament)
    {
        if(this->tip)
            delete[] this->tip;
        if(apartament.tip != nullptr)
        {
            this->tip = new char[strlen(apartament.tip)+1];
            strcpy(this->tip , apartament.tip);
        }
        this->suma = apartament.suma;
        this->nr_ap = apartament.nr_ap;
    }
    return *this;
}

bool Apartament::operator==(const Apartament &apartament) {
    return strcmp(this->tip , apartament.tip) == 0 && this->suma == apartament.suma && this->nr_ap == apartament.nr_ap;
}







