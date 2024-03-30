//
// Created by Iulian on 5/11/2023.
//
#include "filerepo.h"
#include <iostream>
#include <algorithm>


void FileRepo::save() {
   ofstream f(filename);
   for(int i=0;i<prods.size()-1;i++)
   {
       Car crt = prods[i];
       f<<crt.Tostring()<<endl;
   }
}


FileRepo::FileRepo(string f) {
    filename = f;
    ifstream fin(f);
    if(!fin.is_open())
    {
        ofstream fout(f);
        fout.close();
    }
    fin.close();
    this->lungime = 0;
}

void FileRepo::add_car(Car & car) {
    Repo::add(car);
    elem[lungime] = car;
    lungime++;
    ofstream fout(filename , ios::app);
    fout<<car.get_nume()<<" "<<car.get_price()<<" "<<car.get_cod()<<endl;
    fout.close();
}

void FileRepo::remove_car(Car & car) {
    Repo::remove(car);
    remove(car);
    ofstream fout(filename);
    fout.close();

}

void FileRepo::update_car(Car & car1, Car &car2) {
    Repo::update(car1 , car2);
    Car * c = Repo::get_all();
    for(int i=0 ; i< Repo::get_size();i++)
        if(c[i] == car1)
        {
            c[i] = car2;
            break;
        }
    ofstream fout(filename);
    fout.close();
}

Car *FileRepo::get_all() {
    return elem;
}

int FileRepo::get_size() {
    return this->lungime;
}

void FileRepo::loadFromFile() {
    ifstream fin(filename);
    if(!fin.is_open())
    {
        ofstream fout(filename);
        fout.close();
        return;
    }
    std::cout<<"DA"<<endl;
    Car car;
    fin>>car;
    cout<<car.get_cod()<<endl;
    while(fin >> car)
    {
        add_car(car);
        cout<<"Da";
    }
    fin.close();
}





