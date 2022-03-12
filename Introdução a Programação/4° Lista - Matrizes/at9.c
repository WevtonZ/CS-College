#include <stdio.h>

#define MAT_MAX 400

int main(void)
{
    int mat[MAT_MAX][MAT_MAX];
    int lin, col;
    int i, j;
    int counter = 1;

    scanf("%d %d", &lin, &col);

    for(i=0 ; i<lin ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                {
                    printf("0 ");
                }
                else
                {
                    printf("%d ", counter);
                    counter++;
                }
            }
            else
            {
                if(j%2==0)
                {
                    printf("%d ", counter);
                    counter++;
                }
                else printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}