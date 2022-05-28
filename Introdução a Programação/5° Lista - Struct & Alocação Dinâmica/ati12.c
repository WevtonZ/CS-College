#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    
typedef struct estiagem_da_boa
{
    int mor, cons; // Moradores e consumo.
    double morCons; // Consumo
} est;
    
/**
 * @brief Funcao que calculara a media de consumo dos cidadaos e o arredondara para baixo
 * 
 * @param vet Vetor de struct contendo o numero de cidadaos e o consumo de cada grupo.
 * @param n Numero de testes.
 */
void indCons(est *vet, int n);
    
/**
 * @brief Funcao que calculara a media geral de consumo dos moradores.
 * 
 * @param vet Vetor de struct contendo o numero de cidadaos e o consumo de cada grupo
 * @param n Numero de testes dado no programa.
 * @return Valor da media.
 */
double medCons(est *vet, int n);
    
void order(est *vet, int nCases);
void trade(est* x, est* y);

void sameMed(est *vet, unsigned int *n);
    
int main(void)
{
    unsigned int n;
    int i;
    int city = 0;
    est *vet;
    double csmed; // Consumo medio da cidade.
    int mid;

    while(1)
    {
        scanf("%u", &n);
        if(n==0) break;
        vet = (est*) malloc(n*sizeof(est));
        if(city!=0)
        {
            printf("\n");
        }
        printf("Cidade# %d:\n", ++city);
    
        for(i=0 ; i<n ; i++)
        {
            scanf("%d %d", &vet[i].mor, &vet[i].cons);
        }
    
        indCons(vet,n);
        csmed = medCons(vet, n);
        order(vet, n);
        sameMed(vet, &n);
    

        for(i=0 ; i<n ; i++)
        {
            
            mid = (double) vet[i].cons/(double) vet[i].mor;
            
            if(vet[i].mor == -1) continue;
            printf("%d-%d", vet[i].mor, mid);
            if(i+1==n) printf("\n");
            else printf(" ");
        }
    
        printf("Consumo medio: %.2lf m3.\n", csmed);
    
        free(vet);
    }
    
    return 0;
}
    
void indCons(est *vet, int n)
{
    int i;
    
    for(i=0 ; i<n ; i++)
    {
        vet[i].morCons = vet[i].cons / vet[i].mor;
    }
}
    
double medCons(est *vet, int n)
{
    int i;
    int tmpCons = 0, tmpPess = 0;
    double media = 0;
    
    for(i=0 ; i<n ; i++)
    {
        tmpCons += vet[i].cons;
        tmpPess += vet[i].mor;
    }
    
    media = (double) tmpCons / (double) tmpPess;
    return media;
}
    
void order(est *vet, int nCases)
{
    int i, j;
    
    for(i=0 ; i<nCases ; i++)
    {
        for(j=i+1 ; j<nCases ; j++)
        {
            if(vet[i].morCons > vet[j].morCons)
            {
                trade(&vet[i], &vet[j]);
            }
        }
    }
}
    
void trade(est* x, est* y)
{
    est temp;
    
    temp = *x;
    *x = *y;
    *y = temp;
}

void sameMed(est *vet, unsigned int *n)
{
    int i = 0, j = 0, k=0;
    est *vet2 = NULL;

    vet2 = (est*) malloc(*n*sizeof(est));

    for(i=0 ; i<*n ; i++)
    {
        if(vet[i].mor == -1) continue;
        for(j=i+1 ; j<*n ; j++)
        {
            if(vet[i].cons/vet[i].mor == vet[j].cons/vet[j].mor)
            {
                vet[i].mor += vet[j].mor;
                vet[i].cons += vet[j].cons;
                vet[j].mor = -1;
            }
        }
    }

    for(i=0 ; i<*n ; i++)
    {
        if(vet[i].mor == -1) continue;

        vet2[k] = vet[i];
        k++;
    }

    vet = vet2;
}