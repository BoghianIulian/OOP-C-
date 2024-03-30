//

#include "produs.h"

Car::Car()
{
    cod = 0;
    pret = 0;
    nume = "";
}

Car::Car(int c, string n, int p)
{
    cod = c;
    nume = n;
    pret = p;

}

Car::Car(const Car &p)
{
    cod = p.cod;
    nume = p.nume;
    pret = p.pret;
}

Car &Car::operator=(const Car &p)
{
    if(this!=&p)
    {
        nume = p.nume;
        cod = p.cod;
        pret = p.pret;
    }
    return *this;
}

bool Car::operator==(const Car &p) {
    return ((nume == p.nume) && cod == p.cod && pret == p.pret);
}

int Car::getCod() {
    return cod;
}

int Car::getPret() {
    return pret;
}

string Car::getNume() {
    return nume;
}

string Car::Tostring() {
    return std::to_string(cod) + " " + nume + " " + std::to_string(pret);
}

