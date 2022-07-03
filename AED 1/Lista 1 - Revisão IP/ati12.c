#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n, m, k;
    int *v1 = NULL, *v2 = NULL, *vF = NULL;
    int i, l, c=0;

    scanf("%d", &n);
    if(n<=0)
    {
        printf("erro\n");
        return 0;
    }
    v1 = (int*) malloc(sizeof(int)*n);

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &v1[i]);
        for(k=0 ; k<i ; k++)
        {
            if(v1[i]==v1[k])
            {
                puts("erro");
                return 0;
            }
        }
    }
    
    scanf("%d", &m);
    if(m<=0)
    {
        puts("erro");
        return 0;
    }

    v2 = (int*) malloc(sizeof(int)*m);

    for ( i = 0; i < m; i++)
    {
        scanf("%d", &v2[i]);
        for(k=0 ; k<i ; k++)
        {
            if(v2[i]==v2[k])
            {
                puts("erro");
                return 0;
            }
        }
    }

    vF = (int*) malloc(sizeof(int)*(n+m));

    int vFin;
    vFin = m+n;

    for (i = 0; i < n; i++)
    {
        vF[i] = v1[i];
    }
    
    k = 0;
    
    for(i=n ; i<m+n ; i++)
    {
        vF[i] = v2[k];
        k++;
    }

    for(i=0 ; i<m+n ; i++)
    {
        for(k=i+1 ; k<m+n ; k++)
        {
            if(vF[i] == vF[k]) c++;
        }
    }

    for(i=0 ; i<n ; i++)
    {
        for(k=n ; k<m+n ; k++)
        {
            if(vF[i] == vF[k])
            {
                for(l=k ; l<m+n ; l++)
                {
                    if(l+1==m+n) break;
                    vF[l] = vF[l+1];
                }
            }
        }
    }
    for(i=0 ; i<vFin-c ; i++)
    {
        printf("%d ", vF[i]);
    }
    printf("\n");
    c = 0;
    for(i=0 ; i<n ; i++)
    {
        for(k=0 ; k<m ; k++)
        {
            if(v1[i] == v2[k])
            {
                vF[c] = v1[i];
                c++;
                break;
            }
        }
    }

    for(i=0 ; i<c ; i++)
    {
        printf("%d ", vF[i]);
    }
    printf("\n");

    c = 0;

    for(i=0 ; i<n ; i++)
    {
        for(k=0 ; k<m ; k++)
        {
            if(v1[i] == v2[k]) break;
            if(k+1==m)
            {
                vF[c] = v1[i];
                c++;
            }
        }
    }

    for(i=0 ; i<c ; i++)
    {
        printf("%d ", vF[i]);
    }
    printf("\n");

    c = 0;
    
    for(i=0 ; i<m ; i++)
    {
        for(k=0 ; k<n ; k++)
        {
            if(v2[i] == v1[k]) break;
            if(k+1==n)
            {
                vF[c] = v2[i];
                c++;
            }
        }
    }

    for(i=0 ; i<c ; i++)
    {
        printf("%d ", vF[i]);
    }
    printf("\n");


    return 0;
}