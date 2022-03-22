#include <stdio.h>

int main(void)
{
    int mat[9][9];
    int i, j;
    int res = -64, sv;

    for(i=0 ; i<6 ; i++)
    {
        for(j=0 ; j<6 ; j++)
        {
            scanf("%d", &mat[i][j]);
            if(mat[i][j]>9 || mat[i][j]<-9) return 0;
        }
    }

    for(i=0 ; i<6 ; i++)
    {
        for(j=0 ; j<6 ; j++)
        {
            if(i+1 == 6 || j+1 == 6 || i+2==6 || j+2==6) break;

            sv = mat[i][j]+mat[i][j+1]+mat[i][j+2]+mat[i+1][j+1]+mat[i+2][j]+mat[i+2][j+1]+mat[i+2][j+2];
            if(sv>res) res = sv;
        }
    }

    printf("%d\n", res);

    return 0;
}