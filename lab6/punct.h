#ifndef LAB5_PUNCT_H
#define LAB5_PUNCT_H
class Punct{
private:
    float x,y;
public:
    Punct();
    Punct(float a,float b);

    Punct& operator=(const Punct& punct);

    float get_x();
    float get_y();
    void set_x(float a);
    void set_y(float b);

};
#endif //LAB5_PUNCT_H
