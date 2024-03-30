//
// Created by Iulian on 5/10/2023.
//

#ifndef LAB9_UI_H
#define LAB9_UI_H
#include "service.h"
class UI{
private:
    Service service;
    void add_car();
    void remove_car();
    void update_car();
    void print_car();
    void filtrare();
public:
    UI(Service&);
    void print_menu();
    void menu();
};
#endif //LAB9_UI_H
