#include <stdio.h>

int main(void)
{
    int n;
    int mat[101][101];
    int i, j;
    int cam; // Numero de cameras

    scanf("%d", &n);

    for(i=0 ; i<=n ; i++)
    {
        for(j=0 ; j<=n ; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            cam = 0;

            if(mat[i][j]==1) cam++;
            if(mat[i][j+1]==1) cam++;
            if(mat[i+1][j]==1) cam++;
            if(mat[i+1][j+1]==1) cam++;
            
            if(cam>=2) printf("S");
            else printf("U");
        }
        printf("\n");
    }

    return 0;
}