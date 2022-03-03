#include <stdio.h>

#define max 10000

int main(void)
{
    int v[max];
    int n, i, maior = -1;

    while(1)
    {
        scanf("%d", &n);
        if(n==0)
        {
            return 0;
        }

        for(i=0;i<n;i++)
        {
            scanf("%d", &v[i]);
        }

        for(i=0;i<n;i++)
        {
            if(maior<v[i])
            {
                maior = v[i];
            }
        }

        for(i=0;i<n;i++)
        {
            if(maior==v[i])
            {
                printf("%d %d\n", i, maior);
                break;
            }
        }
        maior = -1;
    }


    return 0;
}