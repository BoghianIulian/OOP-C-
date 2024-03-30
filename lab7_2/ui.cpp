//
// Created by Iulian on 5/3/2023.
//
#include "ui.h"
#include <iostream>
#include <cstring>
using namespace std;
void UI::add_ap() {
    cout<<"Introduceti tipul cheltuielii: ";
    char* tip = new char [15];
    cin.get();
    cin.getline(tip , 15);
    int suma , nr_ap;
    cout<<"Introduceti suma cheltuielii: ";
    cin>>suma;
    cout<<"Introduceti numarul apartamentului: ";
    cin>>nr_ap;
    this->service.add_ap(tip,suma,nr_ap);
    delete[] tip;
}

void UI::remove_ap() {
    cout<<"Introduceti tipul cheltuielii: ";
    char* tip = new char [15];
    cin.get();
    cin.getline(tip , 15);
    int suma , nr_ap;
    cout<<"Introduceti suma cheltuielii: ";
    cin>>suma;
    cout<<"Introduceti numarul apartamentului: ";
    cin>>nr_ap;
    int rez = this->service.remove_ap(tip ,suma,nr_ap);
    if (rez == 0)
        cout<<"Cheltuiala nu exista"<<endl;
    else
        cout<<"Cheltuiala a fost stearsa"<<endl;
    delete[] tip;

}

void UI::update_ap() {
    cout<<"Introduceti tipul cheltuielii vechi: ";
    char* tip1 = new char [15];
    cin.get();
    cin.getline(tip1 , 15);
    int suma1 , nr_ap1;
    cout<<"Introduceti suma cheltuielii vechi: ";
    cin>>suma1;
    cout<<"Introduceti numarul apartamentului vechi: ";
    cin>>nr_ap1;
    cout<<"Introduceti tipul cheltuielii noi: ";
    char* tip2 = new char [15];
    cin.get();
    cin.getline(tip2 , 15);
    int suma2 , nr_ap2;
    cout<<"Introduceti suma cheltuielii noi: ";
    cin>>suma2;
    cout<<"Introduceti numarul apartamentului: noi ";
    cin>>nr_ap2;
    int rez = this->service.update_ap(tip1 , suma1 , nr_ap1 , tip2 ,suma2 ,nr_ap2);
    if (rez == 0)
        cout<<"Cheltuiala nu exista"<<endl;
    else
        cout<<"Cheltuiala a fost actualizata"<<endl;
    delete[] tip1;
    delete[] tip2;

}

void UI::print_ap() {
    Apartament* a = service.get_all();
    for(int i=0;i<service.size();i++)
        cout<<a[i].get_tip()<<" "<<a[i].get_suma()<<" "<<a[i].get_nrAp()<<endl;
}

void UI::print_ap_suma() {
    int suma;
    Apartament* a = service.get_all();
    cout<<"Alegeti suma:";
    cin>>suma;
    for(int i=0 ; i<service.size();i++)
        if(a[i].get_suma() >= suma)
            cout<<a[i].get_tip()<<" "<<a[i].get_suma()<<" "<<a[i].get_nrAp()<<endl;
}

void UI::print_ap_nr() {
    int nr;
    Apartament* a = service.get_all();
    cout<<"Alegeti numarul apartamentului:";
    cin>>nr;
    for(int i=0 ; i<service.size();i++)
        if(a[i].get_nrAp() == nr)
            cout<<a[i].get_tip()<<" "<<a[i].get_suma()<<" "<<a[i].get_nrAp()<<endl;
}

int UI::suma_max() {
    int nr,max = -1;
    Apartament* a = service.get_all();
    cout<<"Alegeti numarul apartamentului:";
    cin>>nr;
    for(int i=0 ; i<service.size();i++)
        if(a[i].get_nrAp() == nr and a[i].get_suma() > max)
            max = a[i].get_suma();
    return max;
}



int UI::suma_tip() {
    int suma = 0;
    char* tip = new char [15];
    Apartament* a =service.get_all();
    cout<<"Alegeti tipul cheltuielii:";
    cin.get();
    cin.getline(tip , 15);
    for(int i=0 ; i<service.size();i++)
        if(strcmp(a[i].get_tip(),tip)==0){
            cout<<a[i].get_suma()<<endl;
            suma += a[i].get_suma();}
    return suma;
}

void UI::filtrare_tip() {
    char* tip = new char [15];
    Apartament* a =service.get_all();
    cout<<"Alegeti tipul cheltuielii:";
    cin.get();
    cin.getline(tip , 15);
    for(int i=0 ; i<service.size();i++)
        if(strcmp(a[i].get_tip(),tip)==0)
        {
            service.remove_ap(a[i].get_tip() , a[i].get_suma() , a[i].get_nrAp());
            i--;}
    delete [] tip;
}

void UI::filtrare_suma() {
    int suma;
    Apartament* a = service.get_all();
    cout<<"Alegeti suma:";
    cin>>suma;
    for(int i=0 ; i<service.size();i++)
        if(a[i].get_suma() >= suma) {
            service.remove_ap(a[i].get_tip(), a[i].get_suma(), a[i].get_nrAp());
            i--;
        }
}

void UI::ad_elem() {
    this->service.add_ap("apa" , 50 , 10);
    this->service.add_ap("apa" , 40 , 11);
    this->service.add_ap("apa" , 60 , 12);
    this->service.add_ap("gaz" , 70 , 10);
    this->service.add_ap("gaz" , 50 , 11);
    this->service.add_ap("caldura" , 80 , 11);
    this->service.add_ap("caldura" , 100 , 12);
}

UI::UI(Service & service1) {
    this->service = service1;
}

void UI::print_menu() {
    cout<<"1.Adaugare cheltuiala."<<endl;
    cout<<"2.Sterge cheltuiala."<<endl;
    cout<<"3.Actualizare cheltuiala."<<endl;
    cout<<"4.Afisare cheltuieli."<<endl;
    cout<<"5.Afisare cheltuieli mai mare decat o suma"<<endl;
    cout<<"6.Afisare cheltuielile unui singur apartament "<<endl;
    cout<<"7.Returneaza suma totala a cheltuielilor de un anumit tip"<<endl;
    cout<<"8.Returneaza cheltuiala maxima pentru un numar de apartament"<<endl;
    cout<<"9.Elimina toate cheltuielile de un anumit tip"<<endl;
    cout<<"10.Elimina toate cheltuielile mai mari decat o anumita suma"<<endl;
    cout<<"11.Undo"<<endl;
    cout<<"12.Inchide program."<<endl;
}

void UI::menu() {
    ad_elem();
    bool value = true;
    while(value)
    {
        print_menu();
        cout<<"Alegeti o optiune: "<<endl;
        int opt;
        cin>>opt;
        switch (opt) {
            case 1:
                add_ap();
                break;
            case 2:
                remove_ap();
                break;
            case 3:
                update_ap();
                break;
            case 4:
                print_ap();
                break;
            case 5:
                print_ap_suma();
                break;
            case 6:
                print_ap_nr();
                break;
            case 7:
                cout<<suma_tip()<<endl;
                break;
            case 8:
                cout<<suma_max()<<endl;
                break;
            case 9:
                filtrare_tip();
                break;
            case 10:
                filtrare_suma();
                break;
            case 11:
                service.undo();
                break;
            case 12:
                value = false;
                break;
            default:
                cout<<"Comanda gresita.Alegeti alta optiune: "<<endl;
                print_menu();
        }

    }
}




















