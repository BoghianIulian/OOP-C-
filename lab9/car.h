//
// Created by Iulian on 5/4/2023.
//
#include <istream>

using namespace std;
#ifndef LAB9_CAR_H
#define LAB9_CAR_H
using namespace std;
class Car{
private:
    int pret;
    int cod;
    char* nume;
public:
    Car();
    explicit Car(int p , int c , const char* n);
    Car(const Car&);
    int get_price();
    int get_cod();
    const char* get_nume();
    void set_pret(int s);
    void set_cod(int c);
    void set_nume(const char* n);
    Car& operator = (const Car&);
    bool operator == (const Car&);
    friend std::istream& operator>>(std::istream& , Car&);
    ~Car();


};
#endif //LAB9_CAR_H
