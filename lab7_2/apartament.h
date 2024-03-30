//
// Created by Iulian on 4/13/2023.
//

#ifndef LAB7_APARTAMENT_H
#define LAB7_APARTAMENT_H
class Apartament{
private:
    int suma;
    int nr_ap;
    char* tip;
public:
    Apartament();
    explicit Apartament(int s ,int nr ,const char* t);
    Apartament(const Apartament&);
    ~Apartament();
    int get_suma();
    void set_suma(int s);
    int get_nrAp();
    void set_nrAp(int nr);
    const char* get_tip();
    void set_nume(const char* t);
    Apartament& operator = (const Apartament&);
    bool operator == (const Apartament&);

};
#endif //LAB7_APARTAMENT_H
