#include <stdio.h>

int main(void)
{
    int mat[1000][1000];
    int li, co;
    int i, j;
    int menor, maior;
    double perch, percl; // Porcentagem.
    int chigh = 0, clow = 0;

    scanf("%d %d", &li, &co);
    if(li<=1) return 0;

    for(i=0 ; i<li ; i++)
    {
        for(j=0 ; j<co ; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    menor = mat[0][0];
    maior = mat[0][0];

    for(i=0 ; i<li ; i++)
    {
        for(j=0 ; j<co ; j++)
        {
            if(menor>mat[i][j]) menor = mat[i][j];
            if(maior<mat[i][j]) maior = mat[i][j];
        }
    }

    for(i=0 ; i<li ; i++)
    {
        for(j=0 ; j<co ; j++)
        {
            if(menor==mat[i][j]) clow++;
            if(maior==mat[i][j]) chigh++;
        }
    }

    perch = (double) chigh / (double) (li*co);
    percl = (double) clow / (double) (li*co);

    printf("%d %.2lf%%\n", menor, percl*100);
    printf("%d %.2lf%%\n", maior, perch*100);

    return 0;
}