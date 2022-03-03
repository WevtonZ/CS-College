#include <stdio.h>

void ordem(int vet[], int n);
void trade(int* x, int* y);
void impvet(int vet[], int n);

#define max 1050

int main(void)
{
    int n, vet[max];
    int i;

    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        scanf("%d", &vet[i]);
    }
    ordem(vet, n);
    impvet(vet, n);

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

void impvet(int vet[], int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("%d\n", vet[i]);
    }
}