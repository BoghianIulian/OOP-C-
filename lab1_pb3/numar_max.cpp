#include "numar_max.h"

void cifre(int nr , int v[10])
{
    while(nr!=0)
    {
        v[nr%10]++;
        nr = nr/10;
    }
}

int numar_maxim(int nr , int v[10])
{
    for(int i=9;i>=0;i--)
        while(v[i]!=0)
        {
            nr = nr*10 +i;
            v[i]--;
        }
    return nr;
}

