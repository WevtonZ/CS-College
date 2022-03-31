#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
typedef double real;
typedef struct Norm_Points
{
    real c1, c2, c3, c4; // Coordenadas do ponto.
    real res; // Norma (distancia)
} norm;

void normcalc(int nC);

void order(norm vet[], int nCases);
void trade(norm* x, norm* y);
 
int main(void)
{
    int nP;

    scanf("%d", &nP);
    normcalc(nP);

    return 0;
}
 
void normcalc(int nC)
{
    norm vet[1000];
    real res = 0;
    int i;

    for(i=0 ; i<nC ; i++)
    {
        scanf("%lf %lf %lf %lf", &vet[i].c1, &vet[i].c2, &vet[i].c3, &vet[i].c4);
 
        res = pow(vet[i].c1, 2) + pow(vet[i].c2, 2) + pow(vet[i].c3, 2) + pow(vet[i].c4, 2);
 
        vet[i].res = sqrt(res);
    }

    for(i=0 ; i<nC ; i++)
    {
        order(vet, nC);
    }

    for(i=0 ; i<nC ; i++)
    {
        printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", vet[i].c1, vet[i].c2, vet[i].c3, vet[i].c4, vet[i].res);
    }

}

void order(norm vet[], int nCases)
{
    int i, j;

    for(i=0 ; i<nCases ; i++)
    {
        for(j=i+1 ; j<nCases ; j++)
        {
            if(vet[i].res > vet[j].res)
            {
                trade(&vet[i], &vet[j]);
            }
        }
    }
}

void trade(norm* x, norm* y)
{
    norm temp;

    temp = *x;
    *x = *y;
    *y = temp;
}