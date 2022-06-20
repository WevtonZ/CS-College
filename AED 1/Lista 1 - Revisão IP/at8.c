#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1, n2, maior, i;
    scanf("%d %d", &n1, &n2);

    if(n1>n2) maior = n1;
    else maior = n2;

    for(i=maior ; i>0 ; i--)
    {
        if(n1%i==0 && n2%i==0)
        {
            printf("O maximo divisor comum entre %d e %d e: %d\n", n1, n2, i);
            exit(0);
        }
    }

    return 0;
}