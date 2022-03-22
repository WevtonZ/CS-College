#include <stdio.h>

int main(void)
{
    int mat[1000][1000]; // Matriz de 1000 elementos.
    int lin, col; // Linhas e colunas de uma matriz.
    int i, j;

    scanf("%d", &lin);
    while(lin>10 || lin<=0)
    {
        scanf("%d", &lin);
    }

    scanf("%d", &col);
    while(col>10 || col<=0)
    {
        scanf("%d", &col);
    }

    for(i=0 ; i<lin ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for(i=0 ; i<lin ; i++)
    {
        printf("linha %d: ", i+1);
        for(j=0 ; j<col ; j++)
        {
            printf("%d", mat[i][j]);
            if(j<col-1) printf(",");
        }
        printf("\n");
    }
        return 0;
}