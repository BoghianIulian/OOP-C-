#include "secventa_lista.h"

int nr_prim(int x) {
    int nrd = 0;
    if (x <= 1)
        return 0;
    for (int d = 2; d <= x / 2; d++)
        if (x % d == 0)
            nrd++;
    if (nrd == 0)
        return 1;
    return 0;
}

void nr_prime(int n, int* &v, int &st, int &lungime) {
    int ok = 0, st1=0 , lungime1=0;
    for (int i = 0; i < n; i++) {
        if (nr_prim(v[i]) == 1) {
            if (ok == 0) {
                ok = 1;
                st1 = i;
                lungime1 = 1;
            } else {
                lungime1 = lungime1  +1;
            }
        } else {
            ok = 0;
            if (lungime1 >= lungime) {
                st = st1;
                lungime = lungime1;
            }
        }
    }
    if (lungime1 >= lungime) {
        st = st1;
        lungime = lungime1;
    }
}


void interval(int n, int* &v, int &st, int &lungime, int a , int b) {
    int ok = 0, st1=0 , lungime1=0;
    for (int i = 0; i < n; i++) {
        if (v[i]>=a and v[i]<=b) {
            if (ok == 0) {
                ok = 1;
                st1 = i;
                lungime1 = 1;
            } else {
                lungime1 = lungime1  +1;
            }
        } else {
            ok = 0;
            if (lungime1 >= lungime) {
                st = st1;
                lungime = lungime1;
            }
        }
    }
    if (lungime1 >= lungime) {
        st = st1;
        lungime = lungime1;
    }
}
