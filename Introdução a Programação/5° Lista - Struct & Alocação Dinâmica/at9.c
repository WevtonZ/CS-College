#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef double real;
typedef struct Ponto_Interdimensional_Reverso
{
    real p1, p2, p3, p4;
} ponto;

void dPonto(int nP);

int main(void)
{
    int nP; // Numero de pontos no programa.

    scanf("%d", &nP);
    dPonto(nP);

    return 0;
}

void dPonto(int nP)
{
    int i;
    int k = 0;
    ponto *vet = (ponto*) malloc(sizeof(ponto)*nP);
    real p1, p2, p3, p4; // Resultados das potencias de cada um dos pontos.
    real result; // Resultado da potencia e resultado final.

    for(i=0 ; i<nP ; i++)
    {
        scanf("%lf %lf %lf %lf", &vet[i].p1, &vet[i].p2, &vet[i].p3, &vet[i].p4);
    }

    for(i=0 ; i<nP-1 ; i++)
    {
        p1 = pow(vet[i].p1-vet[i+1].p1, 2);
        p2 = pow(vet[i].p2-vet[i+1].p2, 2);
        p3 = pow(vet[i].p3-vet[i+1].p3, 2);
        p4 = pow(vet[i].p4-vet[i+1].p4, 2);

        result = sqrt(p1+p2+p3+p4);
        printf("%.2lf\n", result);
    }

    free(vet);
}