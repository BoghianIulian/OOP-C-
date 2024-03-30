#include "patrat.h"
#include <iostream>
#include <cmath>

Patrat::Patrat() {
    this->a.set_x(0);
    this->a.set_y(0);
    this->latura = 0;
}

Patrat::Patrat(float l, Punct pct) {
    this->latura = l;
    this->a = pct;
    find_b();
    find_c();
    find_d();
}

void Patrat::find_b() {
    this->b.set_x(this->a.get_x() + this->latura);
    this->b.set_y(this->a.get_y());
}

void Patrat::find_c() {
    this->c.set_x(this->a.get_x());
    this->c.set_y(this->a.get_y() + this->latura);
}

void Patrat::find_d() {
    this->d.set_x(this->a.get_x() + this->latura);
    this->d.set_y(this->a.get_y() + this->latura);
}

Punct  Patrat::get_a() const {
    return this->a;
}

Punct Patrat::get_b() const {
    return this->b;
}

Punct Patrat::get_c() const {
    return this->c;
}

Punct Patrat::get_d() const {
    return this->d;
}

Patrat::~Patrat() {
    return;
}

Patrat::Patrat(const Patrat &p) {
    this->latura = p.latura;
    this->a = p.a;
    this->b = p.b;
    this->c = p.c;
    this->d = p.d;
}


float Patrat::get_latura() {
    return this->latura;
}

void Patrat::set_latura(float l) {
    this->latura = l;
}





































