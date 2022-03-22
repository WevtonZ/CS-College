#include <stdio.h>

int main(void)
{
    int n;
    int mat[1000][1000];
    int i, j, k=0, g;

    scanf("%d", &n);

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    g = n;

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            if(i==k && j==g-1)
            {
                printf("%d", mat[i][j]);
            }
        }
        k++;
        g--;
        printf("\n");
    }

    return 0;

}