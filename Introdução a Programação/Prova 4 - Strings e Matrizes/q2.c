#include <stdio.h>

int main(void)
{
    int mat[600][600];
    int n, m;
    int cLin = 0, cCol = 0; // contador de colunas e linhas nulas.
    int i, j;
    int sum = 0;

    scanf("%d %d", &n, &m);

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<m ; j++)
        {
            scanf("%d ", &mat[i][j]);
        }
    }

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<m ; j++)
        {
            if(mat[i][j]==0) cLin++;
            if(cLin==n || cLin==1) printf("LINHA %d\n", i+1);
        }
        cLin = 0;
    }

    for(j=0 ; j<m ; j++)
    {  
        for(i=0 ; i<n ; i++) 
        {
            if(mat[i][j]==0) cCol++;
            if(cCol==m || cCol==1) printf("COLUNA %d\n", j+1);
        }
        cCol = 0;
    }

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<m ; j++)
        {
            sum += mat[i][j];
        }
    }

    printf("SOMA: %d\n", sum);

    return 0;
}