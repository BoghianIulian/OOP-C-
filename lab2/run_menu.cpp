#include "run_menu.h"
#include "citire.h"
#include <iostream>
#include "menu.h"
#include "secvente_lista.h"

using namespace std;

char a;
int contor = 1, nr, v[100], st, lungime, i, x, y;

void run_menu() {
    while (contor) {
        afisare_menu();
        cout << "Introduceti comanda:";
        cin >> a;
        switch (a) {
            case '1':
                citire(nr, v);
                break;
            case '2':
                afisare(nr, v);
                break;
            case '5':
                contor = 0;
                break;
            case '4':
                st = -1;
                lungime = 0;
                nr_prime(nr, v, st, lungime);
                i = 1;
                if (lungime == 0)
                    cout << "Lista nu contine numere prime";
                else
                    while (i <= lungime) {
                        cout << v[st] << " ";
                        st++;
                        i++;
                    }
                cout << endl;
                break;
            case '3':
                st = -1;
                lungime = 0;
                afisare(nr , v);
                cout << "x=";
                cin >> x;
                cout << "y=";
                cin >> y;
                interval(nr, v, st, lungime, x, y);
                cout << st << " " << lungime << endl;
                i = 1;
                if (lungime == 0)
                    cout << "Lista nu contine numere din intervalul [a,b]";
                else
                    while (i <= lungime) {
                        cout << v[st] << " ";
                        st++;
                        i++;
                    }
                cout << endl;
                break;
            default:
                cout << "Introduceti alta comanda" << endl;
        }

    }
}