#include <stdio.h>

int main(void)
{
    int lin, col; // Linhas e colunas que nossa matriz recebera.
    int i, j;

    scanf("%d %d", &lin, &col);

    for(i=0 ; i<lin ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                {
                    printf("1");
                }
                else printf("0");
            }
            else if(i%2!=0)
            {
                if(j%2==0)
                {
                    printf("0");
                }
                else printf("1");
            }
        }
        printf("\n");
    }

    return 0;
}