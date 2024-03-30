//
// Created by Iulian on 5/4/2023.
//
#include "car.h"
#include <cstring>
#include <sstream>
using namespace std;

Car::Car() {
    this->pret = 0;
    this->cod = 0;
    this->nume = nullptr;
}

Car::Car(int p, int c, const char * n) {
    this->pret = p;
    this->cod = c;
    this->nume = new char(strlen(n)+1);
    strcpy(this->nume , n);
}

Car::Car(const Car& c) {
    this->pret = c.pret;
    this->cod = c.cod;
    this->nume = new char (strlen(c.nume)+1);
    strcpy(this->nume , c.nume);
}

int Car::get_price() {
    return this->pret;
}

int Car::get_cod() {
    return this->cod;
}

const char *Car::get_nume() {
    return this->nume;
}

void Car::set_pret(int s) {
    this->pret = s;
}

void Car::set_cod(int c) {
    this->cod = c;
}

void Car::set_nume(const char *n) {
    if(this->nume)
        delete[] this->nume;
    this->nume = new char(strlen(n)+1);
    strcpy(this->nume , n);
}

Car::~Car() {
    this->pret = 0;
    this ->cod = 0;

}

Car &Car::operator=(const Car & car) {
    if(this != &car)
    {
        if(this->nume)
            delete[] this->nume;
        if(car.nume != nullptr)
        {
            this->nume = new char[strlen(car.nume)+1];
            strcpy(this->nume , car.nume);
        }
        this->cod = car.cod;
        this->pret = car.pret;
    }
}

bool Car::operator==(const Car & car) {
    return strcmp(this->nume , car.nume) == 0 && this->pret == car.pret && this->cod ==car.cod;
}

std::istream &operator>>(istream &input, Car & car) {
    int cod,pret;
    char* nume;
    input >> nume>> pret >> cod;
    car.set_cod(cod);
    car.nume = nume;
    car.set_pret(pret);
    return input;

}




