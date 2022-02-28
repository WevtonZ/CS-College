#include <stdio.h>

int main(void)
{
    int n, m;
    int i, j;

    scanf("%d", &n);

    if(n<=1)
    {
        printf("Campeonato invalido!\n");
        return 0;
    }

    m = 1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i!=j && i<j)
            {
                printf("Final %d: Time%d X Time%d\n", m, i, j);
                m++;
            }
        }
    }

    return 0;
}