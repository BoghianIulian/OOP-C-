#include "patrat.h"
#include <iostream>
#include <cmath>

Patrat::Patrat() {
    this->a.set_x(0);
    this->a.set_y(0);
    this->latura = 0;
}

Patrat::Patrat(float l , Punct pct) {
    this->latura = l;
    this->a = pct;
    find_b();
    find_c();
    find_d();
}

void Patrat::find_b() {
    this->b.set_x(this->a.get_x()+this->latura) ;
    this->b.set_y(this->a.get_y()) ;
}

void Patrat::find_c() {
    this->c.set_x(this->a.get_x()) ;
    this->c.set_y(this->a.get_y()+this->latura) ;
}

void Patrat::find_d() {
    this->d.set_x(this->a.get_x()+ this->latura) ;
    this->d.set_y(this->a.get_y()+this->latura);
}

Punct Patrat::get_a() {
    return this->a;
}

Punct Patrat::get_b() {
    return this->b;
}

Punct Patrat::get_c(){
    return this->c;
}
Punct Patrat::get_d() {
    return this->d;
}

Patrat::~Patrat() {
    return;
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