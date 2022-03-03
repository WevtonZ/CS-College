#include <stdio.h>

int main(void)
{
    int n1, n2, n3;
    int temp;

    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1>n3)
    {
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    if(n1>n2)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if(n2>n3)
    {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }

    printf("Total de balinhas a comprar: %d\n", (n1*3)+(n2*2)+n3);
    printf("%d balinhas para o neto de idade %d\n", n1*3, n1);
    printf("%d balinhas para o neto de idade %d\n", n2*2, n2);
    printf("%d balinhas para o neto de idade %d\n", n3, n3);

    return 0;
}