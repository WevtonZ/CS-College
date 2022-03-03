#include <stdio.h>

#define max 5000

int main(void)
{
    int v[max];
    int n, i, sum=0;

    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &v[i]);
    }

    for(i=0;i<n;i++)
    {
        sum = sum+v[i];
    }

    printf("%d\n", sum);

    return 0;
}