#include <stdio.h>

#define MAX 6000

int main(void)
{
    int n, i, k;
    int vet[MAX];
    int count = 0, temp = 0;

    scanf("%d", &n);

    for(i=0 ; i<n ; i++)
    {
        scanf("%d", &vet[i]);
    }

    for(i=0 ; i<n ; i++)
    {
        for(k=0 ; k<n ; k++)
        {
            if(vet[k]==vet[i]) temp++;
        }

        if(temp==1) count++;
        temp = 0;
    }

    printf("%d\n", count);

    return 0;
}