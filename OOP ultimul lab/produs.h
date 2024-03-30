

#pragma once
#include <string>
#include <iostream>

using namespace std;

class Car
{
private:
    int cod;
    string nume;
    int pret;
public:
    Car();
    Car(int, string, int);
    Car(const Car&);
    Car& operator=(const Car&);
    bool operator==(const Car&);
    int getCod();
    int getPret();
    string getNume();
    string Tostring();
};