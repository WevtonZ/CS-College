#include <stdio.h>

void trade(int* x, int* y)
{
    int temp;
 
    temp = *x;
    *x = *y;
    *y = temp;
}
 
void ordem(int vet[], int n)
{
    int i, j;
 
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(vet[j] < vet[j+1])
            {
                trade(&vet[j], &vet[j+1]);
            }
        }
    }
}

int main(void)
{
    int mat[11][51];
    int vet[15];
    int i, j, k;
    int lin, col;

    while(1)
    {
        scanf("%d %d", &lin, &col);
        if(lin==0 || col==0) break;

        for(i=0 ; i<lin ; i++)
        {
            for(j=0 ; j<col ; j++)
            {
                scanf("%d", &mat[i][j]);
            }
        }

        for(i=0 ; i<lin ; i++)
        {
            k=0;
            for(j=0 ; j<col ; j++)
            {
                while(k<col)
                {
                    vet[k] = mat[i][k];
                    k++;
                }
            }
            ordem(vet, col);
            k=0;
            while(k<col)
            {
                mat[i][k] = vet[k];
                k++;
            }
        }
        for(i=0 ; i<lin ; i++)
        {
            for(j=0 ; j<col ; j++)
            {
                printf("%d ", mat[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}