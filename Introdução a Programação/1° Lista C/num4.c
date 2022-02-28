#include <stdio.h>

int main(void)
{
    int x, y;
    int i;
    int num;

    scanf("%d %d", &x, &y);

    if(x%2!=0)
    {
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
        return 0;
    }

    for(i=0;i<y;i++)
    {
        num = x + (i*2);
        printf("%d ", num);
    }
    printf("\n");

    return 0;
}