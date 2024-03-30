#include "patrat.h"
#include <iostream>
#include <cmath>

Patrat::Patrat() {
    this->latura = 0;
}

Patrat::Patrat(float l) {
    this->latura = l;
}

Patrat::~Patrat() {
    std::cout << "destructor" << std::endl;
}

Patrat::Patrat(const Patrat &p) {
    this->latura = p.latura;
}

float Patrat::get_latura() {
    return this->latura;
}

void Patrat::set_latura(float l) {
    this->latura = l;
}

float Patrat::aria() {
    float x = this->latura;
    return x * x;
}


float Patrat::perimetru() {
    return this->latura * 4;
}

float Patrat::diagonala() {
    return this->latura * sqrt(2);
}

float Patrat::semilatura() {
    return this->latura / 2;
}








