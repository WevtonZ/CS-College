#include <stdio.h>

#define max 100000
#define maxz 1000
int main(void)
{
    int v[max], ser[maxz];
    int n, m, i, j;

    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &v[i]);
    }

    scanf("%d", &m);
    for(j=0;j<m;j++)
    {
        scanf("%d", &ser[j]);

        for(i=0;i<n;i++)
        {
            if(ser[j]==v[i])
            {
                printf("ACHEI\n");
                break;
            }
            else if(i+1==n)
            {
                printf("NAO ACHEI\n");
                break;
            }
        }
    }

    return 0;
}