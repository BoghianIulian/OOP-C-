#include "menu.h"
#include "patrat.h"
#include <iostream>
#include "repo.h"
#include "punct.h"

using namespace std;

void afisare_menu() {
    cout << "1.Adaugare patrat." << endl;
    cout << "2.Afisare valori pentru patrate" << endl;
    cout << "3.Cel mai mare patrat" << endl;
    cout << "4.Afisarea patratelor din cadranul 1" << endl;
    cout << "5.Afisare secventa maxima"<<endl;
    cout<<"6.Afisare puncte:"<<endl;
    cout << "7.Inchide programul" << endl;
}

char a;
float l,x,y;
int contor = 1, k = 0 ,st , lungime;
Repo r;
Patrat * patrat = new Patrat[20];
Punct * cadran = new Punct [20];
Punct * punct = new Punct[20];

void menu() {
    while (contor) {
        afisare_menu();
        cout << "Introduceti comanda:";
        cin >> a;
        switch (a) {
            case '1': {
                cout << "Alegeti lungimea laturii:";
                cin >> l;
                cout<<"Alegeti punctul:";
                cout<<"x=";cin>>x;
                cout<<"y=";cin>>y;
                Punct pct1(x,y);
                Patrat p1(l,pct1);
                r.adauga(p1,pct1);
                break;
            }
            case '2':
                r.afisare();
                break;
            case '3': {
                float max = -1;
                r.get_patrat(patrat);
                max = r.max_p(max , patrat);
                cout << "Latura cea mai mare:" << max << endl;
                break;
            }
            case '4':
                r.get_punct(punct);
                r.get_cad1(punct, cadran, k);
                cout << "Patratele din cadranul 1 sunt:" << endl;
                for (int i = 0; i < k; i++)
                    cout << cadran[i].get_x() << " "<<cadran[i].get_y()<<endl;
                cout << endl;
                break;
            case '5':
                r.get_patrat(patrat);
                st = -1;
                lungime = 0;
                r.secventa_max(patrat,st , lungime);
                cout<<"Cea mai lunga secventa de patrate egale:"<<endl;
                while(lungime>=0)
                {
                    cout<<patrat[st].get_latura()<<" ";
                    lungime--;
                }
                cout<<endl;
                break;
            case '6':
                r.get_punct(punct);
                for(int i=0;i<r.get_nrelem();i++)
                    cout<<punct[i].get_x()<<" "<<punct[i].get_y()<<endl;
            case '7':
                contor = 0;
                break;
            default:
                cout << "Introduceti alta comanda";
        }
    }
    delete []patrat;
    patrat = nullptr;
    delete []cadran;
    cadran = nullptr;

}
