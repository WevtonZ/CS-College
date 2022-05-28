#include <stdio.h>
#include <stdlib.h>

#define MAX 4

void mCoord(int n);

int main(void)
{
    int n;

    scanf("%d", &n);
    mCoord(n);

    return 0;
}

void mCoord(int n)
{
    double vet[MAX];
    double temp[MAX]; // Vetor temporario.
    int i; // Variavel de contagem.
    double c1, c2, c3; // Coordenadas.

    for(i=0 ; i<3 ; i++)
    {
        scanf("%lf", &temp[i]);
    }

    n-=1;

    while(n--)
    {
        for(i=0 ; i<3 ; i++)
        {
            scanf("%lf", &vet[i]);
        }

        c1 = vet[0] - temp[0];
        c2 = vet[1] - temp[1];
        c3 = vet[2] - temp[2];

        if(c1<0) c1*=-1;
        if(c2<0) c2*=-1;
        if(c3<0) c3*=-1;

        if(c1>=c2)
        {
            if(c1>=c3) printf("%.2lf\n", c1);
        }
        if(c2>=c1 && c2!=c1) 
        {
            if(c2>=c3) printf("%.2lf\n", c2);
        }
        if(c3>=c1 && c3!=c1) 
        {
            if(c3>=c2 && c3!=c2) printf("%.2lf\n", c3);
        }

        for(i=0 ; i<3 ; i++)
        {
            temp[i] = vet[i];
        }
    } 
}