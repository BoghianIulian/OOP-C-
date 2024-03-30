//
// Created by Iulian on 5/3/2023.
//

#ifndef LAB7_SERVICE_H
#define LAB7_SERVICE_H
#include "repo.h"
class Service{
private:
    Repo repo;
public:
    Service();
    explicit Service(Repo&);
    void add_ap(const char* , int , int );
    int find_ap(const char* , int , int);
    int remove_ap(const char* , int , int);
    Apartament* get_all();
    int update_ap(const char* , int , int ,const char* , int , int);
    int size();
    void undo();
};
#endif //LAB7_SERVICE_H
