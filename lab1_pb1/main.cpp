#include <iostream>
#include <cassert>

using namespace std;
int v[10];

void cifre(int nr, int x[10]) {
    while (nr != 0) {
        x[nr % 10]++;
        nr = nr / 10;
    }
}


int numar_maxim(int nr, int x[10]) {
    for (int i = 9; i >= 0; i--)
        while (x[i] != 0) {
            nr = nr * 10 + i;
            v[i]--;
        }
    return nr;
}


void teste() {
    cifre(1234, v);
    assert(numar_maxim(0, v) == 4321);
    for (int i = 0; i <= 9; i++)
        v[i] = 0;
    cifre(111, v);
    assert(numar_maxim(0, v) == 111);
    for (int i = 0; i <= 9; i++)
        v[i] = 0;
    cifre(0, v);
    assert(numar_maxim(0, v) == 0);
}


int main() {
    int nr;
    cout << "Nr=";
    cin >> nr;
    cifre(nr, v);
    nr = numar_maxim(0, v);
    cout << "Numarul cautat este:" << nr;
    teste();
    return 0;


}


