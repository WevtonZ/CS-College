#include <stdio.h>

#define MAX 10000

void ordem(int vet[], int n);
void trade(int* x, int* y);

int main(void)
{
    int n, counter; // Tamanho do Vetor e contador do vetor.
    int vet[MAX] = {0}; // Vetor de numeros.
    int hhest; // Maior numero contido no vetor.
    int i, j, k; // Variaveis contadoras.

    while(1)
    {
        scanf("%d", &n);

        if(n==0) return 0;
       
        hhest = -1;
        counter = 0;
        for(i=0;i<n;i++)
        {
            scanf("%d", &vet[i]); // Leitura do Vetor.
            if(hhest<vet[i]) hhest = vet[i];
        }

        ordem(vet, n);

        for(j=0;j<=hhest;j++)
        {
            for(i=0;i<n;i++)
            {
                if(vet[i]==j)
                {
                    counter++;
                }
            }
            printf("(%d) %d\n", j, counter);
        }
    }
    return 0;
}

void ordem(int vet[], int n)
{
    int i, j;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(vet[j] > vet[j+1])
            {
                trade(&vet[j], &vet[j+1]);
            }
        }
    }
}

void trade(int* x, int* y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}