#include <stdio.h>

int main(void)
{
    int mat[100][100]; // Matriz 100x100.
    int i, j; // Variaveis de controle de loop.
    int wid, height; // Largura e altura da matriz.
    int bo, nBo; // Variavel de tamanho da borda e de numero da borda.

    scanf("%d %d %d %d", &wid, &height, &bo, &nBo);

    printf("P2\n");
    printf("%d %d\n", height, wid);
    printf("255\n");

    for(i=0 ; i<wid ; i++)
    {
        for(j=0 ; j<height ; j++)
        {
            if(i<bo || j<bo || i>height-1-bo || j>wid-bo-1) printf("%d ", nBo);
            else printf("0 ");
        }
        printf("\n");
    }

    return 0;
}