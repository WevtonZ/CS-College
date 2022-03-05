#include <stdio.h>
#include <string.h>

/**
 * @brief Funcao que avaliara se o numero e par ou impar, separa-los em dois vetores distintos, e depois soma-los em um terceiro vetor.
 * 
 * @param vetI Vetor de numeros impares;
 * @param vetP Vetor de numeros pares;
 * @param vetInit Vetor inicial;
 * @param tam Tamanho do vetor.
 */
void parimpar(int vetI[], int vetP[], int vetInit[], int tam);

int main(void)
{
    int cTestes; // Numero de casos de teste.
    int tam;
    int I[100], P[100]; // Impares e Pares.
    int vet[100];
    int i;

    scanf("%d", &cTestes);

    while(cTestes--)
    {
        scanf("%d", &tam);

        for(i=0 ; i<tam ; i++)
        {
            scanf("%d", &vet[i]);
        }

        parimpar(I, P, vet, tam);
    }

    return 0;
}

void parimpar(int vetI[], int vetP[], int vetInit[], int tam)
{
    int newvet[100];
    int i, k=0, l=0;

    for(i=0;i<tam;i++)
    {
        if(vetInit[i]%2==0)
        {
            vetP[k] = vetInit[i];
            k++;
        }
        else if(vetInit[i]%2!=0)
        {
            vetI[l] = vetInit[i];
            l++;
        }
    }

    if(k<l)
    {
        for(i=k ; i<tam; i++)
        {
            vetP[i] = 0;
        }
    }
    if(l<k)
    {
        for(i=l ; i<tam ; i++)
        {
            vetI[i] = 0;
        }
    }

    if(l<=k)
    {
        for(i=0 ; i<k ; i++)
        {
            newvet[i] = vetP[i] + vetI[i];
        }
        for(i=0 ; i<k ; i++)
        {
            printf("%d ", newvet[i]);
        }
    }
    else if(k<=l)
    {
        for(i=0 ; i<l ; i++)
        {
            newvet[i] = vetP[i] + vetI[i];
        }

        for(i=0 ; i<l ; i++)
        {
            printf("%d ", newvet[i]);
        }
    }
    printf("\n");
}