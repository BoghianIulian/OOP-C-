#include <iostream>
#include "patrat.h"
#include "teste.h"
using namespace std;
int main() {
    teste();
    Patrat p1(7);
    Patrat p2(7);
    p2 = Patrat(p1);
    cout<<p1.get_latura()<<endl;
    p1.set_latura(5);
    cout<<p1.get_latura()<<endl;
    cout<<p2.get_latura()<<endl;
    p2 = Patrat();
    cout <<p2.get_latura()<<endl;
    cout<<"Aria patratului:"<< p1.aria()<<endl;
    cout<<"Perimetrul patratului:"<<p1.perimetru()<<endl;
    cout<<"Diagonala patratului:"<<p1.diagonala()<<endl;
    cout<<"Semilatura patratului:"<<p1.semilatura()<<endl;
    return 0;
}
