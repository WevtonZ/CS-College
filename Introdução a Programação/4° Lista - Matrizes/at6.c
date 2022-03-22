#include <stdio.h>

int main(void)
{
    double mat[5][5]; // Matriz de 5 elementos.
    double res[5][5]; // Matriz de resultados.
    int i, j; // Variaveis para loop.
    double n1, n2, n3, n4; // Variaveis guardando os elementos das matrizes.
    for(i=0 ; i<2 ; i++)
    {
        for(j=0 ; j<2 ; j++)
        {
            scanf("%lf", &mat[i][j]);
        }
    }

    n1 = mat[0][0];
    n2 = mat[0][1];
    n3 = mat[1][0];
    n4 = mat[1][1];

    res[0][0] = (n1*n1) + (n2*n3);
    res[0][1] = (n1*n2) + (n2*n4);
    res[1][0] = (n3*n1) + (n4*n3);
    res[1][1] = (n3*n2) + (n4*n4);

    for(i=0 ; i<2 ; i++)
    {
        for(j=0 ; j<2 ; j++)
        {
            printf("%.3lf ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}