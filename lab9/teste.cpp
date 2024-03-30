//
// Created by Iulian on 5/4/2023.
//
#include "teste.h"
#include "repo.h"
#include "car.h"
#include "service.h"
#include <cassert>
void teste_car(){
    Car c1(3000 , 10 , "Volvo");
    Car c2(5000 , 11 , "Ford");
    assert(c1.get_cod()==10);
    assert(c2.get_price() == 5000);
    c1.set_cod(15);
    assert(c1.get_cod() == 15);
    Car c3(c2);
    assert(c3.get_price() == c2.get_price());
}

void teste_repo(){
    Repo repo;
    Car c1(3000 , 10 , "Volvo");
    Car c2(5000 , 11 , "Ford");
    Car c3(8000 , 12 , "BMW");
    repo.add(c1);
    repo.add(c2);
    repo.add(c3);
    Car* c = repo.get_all();
    assert(c[0].get_price() == c1.get_price());
    assert(c[1].get_cod() == c2.get_cod());
    assert(c[2].get_price() == c3.get_price());
}

void teste_service(){
    Repo repo;
    Car c1(3000 , 10 , "Volvo");
    Car c2(5000 , 11 , "Ford");
    Car c3(8000 , 12 , "BMW");
    Car c4(7000 , 13 , "Toyota");
    repo.add(c1);
    repo.add(c2);
    repo.add(c3);
    Service service(repo);
    Car * c = service.get_all();
    assert(service.find_car("Ford" , 11 , 5000) == 1);
    service.update_car(c[0].get_nume() , c[0].get_cod() , c[0].get_price() , c4.get_nume() , c4.get_cod() , c4.get_price());
    assert(c[0].get_price() == 7000);
    service.remove_car(c[0].get_nume() , c[0].get_cod() , c[0].get_price());
    assert(service.size() == 2);
    assert(service.find_car("BMW" , 12 , 8000) == 1);
    service.filtrare(6000);
    assert(service.size() == 1);
}