//
// Created by Iulian on 4/13/2023.
//
#include "apartament.h"
#include "repo.h"
#include "teste.h"
#include "service.h"
#include <cassert>

void teste_repo()
{
    Repo repo;
    assert(repo.get_size() == 0);
    Apartament a1(30 , 1,"apa" ) , a2(40 , 2 ,"gaz") , a3(50 , 3 ,"gaz") ,a4(100 , 4 ,"gaz");
    repo.add(a1);
    repo.add(a2);
    repo.add(a3);
    repo.update(a3 , a4);
    assert(a1.get_suma() == 30);
    assert(a3.get_suma() == 50);
    repo.remove(a1);
    assert(repo.get_size() == 2);


}

void teste_service()
{
    Repo repo;
    Apartament a1(30 , 1,"apa" ) , a2(40 , 2 ,"gaz") , a3(50 , 3 ,"gaz") ,a4(100 , 4 ,"gaz");
    repo.add(a1);
    repo.add(a2);
    repo.add(a3);
    Service service(repo);
    Apartament* a = service.get_all();
    assert(service.find_ap("apa" , 30 , 1)==1);
    service.update_ap(a[0].get_tip(),a[0].get_suma(),a[0].get_nrAp(),a4.get_tip(),a4.get_suma(),a4.get_nrAp());
    assert(a[0].get_suma() == 100);
    service.remove_ap(a[0].get_tip(),a[0].get_suma(),a[0].get_nrAp());
    assert(service.size()==2);
    assert(service.find_ap("gaz",40 , 2) == 1);


}
