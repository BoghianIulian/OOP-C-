//
// Created by Iulian on 3/23/2023.
//

#ifndef LAB4_PATRAT_H
#define LAB4_PATRAT_H
class Patrat{
private:
    float latura;
public:
    Patrat();
    explicit Patrat(float l);
    Patrat(const Patrat &p);
    float get_latura();
    void set_latura(float l);
    ~Patrat();
    float aria();
    float perimetru();
    float diagonala();
    float semilatura();
};
#endif //LAB4_PATRAT_H
