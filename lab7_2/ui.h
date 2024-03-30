//
// Created by Iulian on 5/3/2023.
//

#ifndef LAB7_UI_H
#define LAB7_UI_H
#include "service.h"
class UI{
private:
    Service service;
    void add_ap();
    void remove_ap();
    void update_ap();
    void print_ap();
    void print_ap_suma();
    void print_ap_nr();
    int suma_tip();
    int suma_max();
    void filtrare_suma();
    void filtrare_tip();
    void ad_elem();
public:

    UI(Service&);
    void print_menu();
    void menu();

};
#endif //LAB7_UI_H
