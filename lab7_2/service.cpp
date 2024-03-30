//
// Created by Iulian on 5/3/2023.
//
#include "service.h"
#include <cstring>


Service::Service() {

}

Service::Service(Repo & repo1) {
    this->repo = repo1;
}

void Service::add_ap(const char *tip, int suma, int nr_ap) {
    Apartament a(suma ,nr_ap , tip);
    return repo.add(a);
}

int Service::find_ap(const char *tip, int suma, int nr_ap) {
    Apartament a(suma , nr_ap , tip);
    return repo.find_ap(a);
}

int Service::remove_ap(const char* tip, int suma, int nr_ap) {
    Apartament a(suma , nr_ap , tip);
    return repo.remove(a);
}

Apartament *Service::get_all() {
    return repo.get_all();
}

int Service::update_ap(const char *tip_v, int suma_v, int nrap_v, const char *tip_n, int suma_n, int nrap_n) {
    Apartament a_nou(suma_n , nrap_n , tip_n) , a_vechi(suma_v , nrap_v , tip_v);
    return repo.update(a_vechi,a_nou);
}

int Service::size() {
    return repo.get_size();
}

void Service::undo() {
    this->repo.undo();
}





