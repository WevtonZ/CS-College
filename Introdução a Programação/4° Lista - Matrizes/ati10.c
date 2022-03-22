#include <stdio.h>
 
int main(void)
{
    int n;
    int mat[1000][1000], res[1000][1000];
    int i, j, k=0; // controle de loop.
    int sDP = 0; // Soma da diagonal principal.
    
 
    scanf("%d", &n);
 
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ;j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
 
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            if(i==j)
            {
                sDP += mat[i][j];
            }
        }
    }
 
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            res[i][j] = mat[i][j] * sDP;       
        }
    }
 
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            res[i][j] += mat[j][i];
        }    
    }
 
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            printf("%d ", res[i][j]);       
        }
        printf("\n");
    }
 
    return 0;
}