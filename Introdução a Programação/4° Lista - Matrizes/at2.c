#include <stdio.h>

#define MAX_MAT 1000

int main(void)
{
    int n; // Dimensao da matriz.
    int mat[MAX_MAT][MAX_MAT]; // Matriz em questao.
    int i, j;

    scanf("%d", &n);

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
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
                printf("%d", mat[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}