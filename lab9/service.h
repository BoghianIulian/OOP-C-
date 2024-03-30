//
// Created by Iulian on 5/10/2023.
//

#ifndef LAB9_SERVICE_H
#define LAB9_SERVICE_H
#include "repo.h"
class Service{
private:
    Repo repo;
public:
    Service();
    explicit Service(Repo&);
    void add_car(const char* ,int ,int);
    int find_car(const char* ,int ,int);
    int remove_car(const char* , int , int);
    Car* get_all();
    int size();
    int update_car(const char* , int , int ,const char* , int , int);
    void filtrare(int pret);
};
#endif //LAB9_SERVICE_H
