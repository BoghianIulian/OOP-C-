#include "menu.h"
#include "patrat.h"
#include <iostream>
#include "repo.h"
#include <vector>

using namespace std;

void afisare_menu() {
    cout << "1.Citire patrate." << endl;
    cout << "2.Afisare patrate" << endl;
    cout << "3.Afisare patrate cadranul 1" << endl;
    cout << "4.Afisare secventa maxima de patrate egale" << endl;
    cout << "5.Cel mai mare patrat" << endl;
    cout << "6.Inchide programul" << endl;
}


void menu() {
    int contor = 1;
    char a;

    std::vector<Patrat> patrat, p, cad1;
    Repo r;

    while (contor) {
        afisare_menu();
        cout << "Introduceti comanda:";
        cin >> a;
        switch (a) {
            case '1':
                r.citire();
                break;
            case '2':
                r.afisare();
                break;
            case '6':
                contor = 0;
                break;
            case '3':
                r.get_patrat(p);
                r.get_cad1(p, cad1);
                cout << "Patratele din cadranul 1 sunt:";
                for (int i = 0; i < cad1.size(); i++) {
                    cout << cad1[i].get_a().get_x() << ' ' << cad1[i].get_a().get_y();
                    cout << endl;
                }
                break;
            case '4': {
                r.get_patrat(p);
                int st = -1, lungime = 0;
                r.secventa_maxima(p, st, lungime);
                cout<<st<<" "<<lungime<<endl;
                cout << "Cea mai lunga secventa de patrate egale este :"<<endl;
                for (int i = st; i < lungime; i++) {
                    cout << p[i].get_latura() << " ";
                }
                cout<<endl;
                break;
            }
            case '5': {
                r.get_patrat(p);
                float max = -1;
                cout << "Cel mai mare patrat:" << r.max_p(p, max)<<endl;
                break;
            }
            default:
                cout << "Introduceti alta comanda";
        }
    }
}






































