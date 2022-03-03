#include <stdio.h>
#include <string.h>

void ordem(int vet[], int n);
void trade(int* x, int* y);

#define MAX_INTER 500000

int main(void)
{
    int vet1[MAX_INTER], vet2[MAX_INTER]; // Vetores q1 e q2.
    int vetR[MAX_INTER]; // Vetor resposta.
    int i, k = 0; // contador.
    int n1, n2, defN;

    scanf("%d %d", &n1, &n2);

    for(i=0 ; i<n1 ; i++)
    {
        scanf("%d", &vet1[i]);
    }

    for(i=0 ; i<n2 ; i++)
    {
        scanf("%d", &vet2[i]);
    }

    for(i=0;i<n1;i++)
    {
        vetR[i] = vet1[i];
    }

    for(i=n1 ; i<n1+n2 ; i++)
    {
        vetR[i] = vet2[k];
        k++;
    }

    defN = n1+n2;

    ordem(vetR, defN);

    for(i=0;i<n1+n2;i++)
    {
        printf("%d\n", vetR[i]);
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