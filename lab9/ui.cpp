//
// Created by Iulian on 5/10/2023.
//
#include "ui.h"
#include <iostream>
#include <cstring>
using namespace std;
void UI::add_car() {
    cout<<"Introduceti numele masinii: ";
    char* nume = new char [15];
    cin.get();
    cin.getline(nume , 15);
    int pret , cod;
    cout<<"Introduceti pretul masinii: ";
    cin>>pret;
    cout<<"Introduceti codul masinii: ";
    cin>>cod;
    this->service.add_car(nume,cod , pret);
    delete[] nume;
}

void UI::remove_car() {
    cout<<"Introduceti numele masinii: ";
    char* nume = new char [15];
    cin.get();
    cin.getline(nume , 15);
    int pret , cod;
    cout<<"Introduceti pretul masinii: ";
    cin>>pret;
    cout<<"Introduceti codul masinii: ";
    cin>>cod;
    int rez = this->service.remove_car(nume ,cod,pret);
    if (rez == 0)
        cout<<"Masina nu exista"<<endl;
    else
        cout<<"Masina a fost stearsa"<<endl;
    delete[] nume;
}

void UI::update_car() {
    cout<<"Introduceti numele masinii vechi: ";
    char* nume1 = new char [15];
    cin.get();
    cin.getline(nume1 , 15);
    int pret1 , cod1;
    cout<<"Introduceti pretul masinii vechi: ";
    cin>>pret1;
    cout<<"Introduceti codul masinii vechi: ";
    cin>>cod1;
    cout<<"Introduceti numele masinii noi: ";
    char* nume2 = new char [15];
    cin.get();
    cin.getline(nume2 , 15);
    int pret2 , cod2;
    cout<<"Introduceti pretul masinii noi: ";
    cin>>pret2;
    cout<<"Introduceti codul masinii noi ";
    cin>>cod2;
    int rez = this->service.update_car(nume1 , cod1 , pret1 , nume2 ,cod2 ,pret2);
    if (rez == 0)
        cout<<"Masina nu exista"<<endl;
    else
        cout<<"Masina a fost actualizata"<<endl;
    delete[] nume1;
    delete[] nume2;
}

void UI::print_car() {
    Car *c = service.get_all();
    for(int i=0 ; i<service.size();i++)
        cout<<c[i].get_nume()<<" "<<c[i].get_price()<<" "<<c[i].get_cod()<<endl;
}

UI::UI(Service & service1) {
    this->service = service1;
}

void UI::filtrare() {
    int pret;
    cout<<"Introduceti pretul:";
    cin>>pret;
    service.filtrare(pret);
}

void UI::print_menu() {
    cout<<"1 .Adaugare masina."<<endl;
    cout<<"2 .Sterge masina."<<endl;
    cout<<"3 Actualizare masina."<<endl;
    cout<<"4 .Afisare masini."<<endl;
    cout<<"5.Filtrare masini"<<endl;
    cout<<"6 .Inchide program."<<endl;
}

void UI::menu() {
    bool value = true;
    while(value)
    {
        print_menu();
        cout<<"Alegeti o optiune: "<<endl;
        int opt;
        cin>>opt;
        switch (opt) {
            case 1:
                add_car();
                break;
            case 2:
                remove_car();
                break;
            case 3:
                update_car();
                break;
            case 4:
                print_car();
                break;
            case 5:
                filtrare();
                break;
            case 6:
                value = false;
                break;
            default:
                cout<<"Comanda gresita.Alegeti alta optiune: "<<endl;
                print_menu();

        }
    }
}




