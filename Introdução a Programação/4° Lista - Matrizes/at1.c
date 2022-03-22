#include <stdio.h>

#define MAX_MAT 500

int main(void)
{
    double mat[MAX_MAT][MAX_MAT]; // Matriz 2x2 para a determinante.
    int i, j; // Inteiros para loops.
    double res; // Resultado da determinante.

    for(i=0 ; i<2 ; i++)
    {
        for(j=0 ; j<2 ; j++)
        {
            scanf("%lf", &mat[i][j]);
        }
    }

    res = (mat[0][0]*mat[1][1]) - (mat[0][1]*mat[1][0]);

    printf("%.2lf\n", res);

    return 0;
}