#include "citire.h"

#include <iostream>

using namespace std;

void citire(int &nr, int v[]) {
    cout<<"Nr de elemente:";
    cin>>nr;
    cout<<"Elementele vectorului:";
    for (int i=0;i<nr;i++)
        cin>>v[i];
}
void afisare(int nr , int v[]){
    for (int i=0;i<nr;i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

