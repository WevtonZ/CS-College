#include <stdio.h>

#define MAX 2000

int main(void)
{
    int n;
    int i;
    int vet[MAX];

    scanf("%d", &n);

    for(i=0 ; i<n ; i++)
    {
        scanf("%d", &vet[i]);
    }

    for(i=0 ; i<n ; i++)
    {
        if(i==0)
        {
            printf("%d\n", vet[i]);
        }
        else
        {
            if(vet[i]==vet[i-1]) continue;
            else printf("%d\n", vet[i]);
        }
    }

    return 0;
}