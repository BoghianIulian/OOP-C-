

#include "teste.h"
#include "repository.h"
#include "service.h"
#include "repofile.h"
#include "produs.h"
#include <cassert>

void test_repo()
{
    Repository r;
    assert(r.getSize() == 0);
    Car p(1,"Skoda", 5000);
    r.add(p);
    assert(r.getSize() == 1);
    Car p1 = r.getElement(0);
    assert(p == p1);
    Car p2(2,"Ford",6000);
    Car p3(3,"VW",4500);
    r.add(p2);
    r.add(p3);
    assert(r.getSize() == 3);
    assert(r.remove(p2) == 1);
    assert(r.getSize() == 2);
}

void test_service()
{
    Service s;
    s.add(1,"Skoda",4900);
    Car p(1,"Skoda",4900);
    s.add(2,"Ford",6000);
    s.add(3,"Mercedes",9000);
    s.add(4,"BMW",8500);
    Car p1(3,"Chevrolet",7000);
    s.remove(2);
}

void test_repo_file()
{
    RepositoryFile repository(R"(C:\Users\Iulian\Desktop\OOP ultimul lab\produse.txt)");
    Car p1(1,"Ford",6000);
    //repository.add(s1);
    Car p2(2,"Skoda",4900);
}