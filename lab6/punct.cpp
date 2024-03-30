#include "punct.h"

Punct::Punct() {
    this->x = 0;
    this->y = 0;
}


Punct::Punct(float a, float b) {
    this->x = a;
    this->y = b;
}

float Punct::get_x() {
    return this->x;
}

float Punct::get_y() {
    return this->y;
}

void Punct::set_x(float a) {
    this->x = a;
}

void Punct::set_y(float b)  {
    this->y = b;
}

Punct &Punct::operator=(const Punct &punct) {
    this->x = punct.x;
    this->y = punct.y;
    return *this;
}
