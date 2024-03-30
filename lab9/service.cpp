//
// Created by Iulian on 5/10/2023.
//
#include "service.h"

Service::Service() {

}

Service::Service(Repo & repo1) {
    this->repo = repo1;
}

void Service::add_car(const char *nume, int cod, int pret) {
    Car c(pret , cod , nume);
    return repo.add(c);
}

int Service::find_car(const char * nume, int cod, int pret) {
    Car c(pret , cod , nume);
    return repo.find_car(c);
}

int Service::remove_car(const char *nume, int cod, int pret) {
    Car c(pret , cod , nume);
    return repo.remove(c);
}

Car *Service::get_all() {
    return repo.get_all();
}

int Service::size() {
    return repo.get_size();
}

int Service::update_car(const char *nume_v, int cod_v, int pret_v, const char *nume_n, int cod_n, int pret_n) {
    Car c_n(pret_n , cod_n , nume_n) , c_v(pret_v , cod_v , nume_v);
    return repo.update(c_v , c_n);
}

void Service::filtrare(int pret) {
    Car* c = get_all();
    for(int i=0;i<size();i++)
        if(c[i].get_price()>=pret)
        {
            remove_car(c[i].get_nume() , c[i].get_cod() , c[i].get_price());
            i--;
        }
}






