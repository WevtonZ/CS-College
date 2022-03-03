#include <stdio.h>

#define MAX_MED 1000000

void ordem(int vet[], int n);
void trade(int* x, int* y);
void mediana(int vet[], int n);

int main(void)
{
    int n, i;
    int med[MAX_MED] = {0};

    scanf("%d", &n);

    if(n==0) return 0;

    for(i=0;i<n;i++) // For de leitura do vetor
    {
        scanf("%d", &med[i]);
    }

    ordem(med, n);
    mediana(med, n);

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

void mediana(int vet[], int n)
{
    int medi;
    double result;
    if(n%2==0)
    {
        medi = n/2;
        result = (double)(vet[medi-1] + (double)vet[medi])/2.0;

        printf("%.2lf\n", result);
    }
    else if(n%2!=0)
    {
        medi = ( (double)n / 2) +0.5;
        printf("%.2lf\n", (double)vet[medi-1]);
    }
}