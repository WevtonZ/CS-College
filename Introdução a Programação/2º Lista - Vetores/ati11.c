#include <stdio.h>

void print_vet(int vet[], int n);
void maimen(int vet[], int n);

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
    print_vet(vet, n);
    maimen(vet, n);

    return 0;
}

void print_vet(int vet[], int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("%d", vet[i]);
        if(i+1<n)
        {
            printf(" ");
        }
    }
    printf("\n");

    for(i=n-1;i>=0;i--)
    {
        printf("%d", vet[i]);
        if(i<n)
        {
            printf(" ");
        }
    }
    printf("\n");
}

void maimen(int vet[], int n)
{
    int i, maior = -100000, menor = 100000;

    for(i=0;i<n;i++)
    {
        if(maior<vet[i]) maior = vet[i];
        if(menor>vet[i]) menor = vet[i];
    }
    printf("%d\n%d\n", maior, menor);
}