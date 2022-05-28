#include <stdio.h>

int main(void)
{
    int p1, p2; // Populacao dos paises A e B.
    int anos = 0;

    // scan dos paises A e B.
    scanf("%d %d", &p1, &p2);

    while(p1<p2)
    {
        p1 = p1 + (p1*0.03);
        p2 = p2 + (p2*0.015);
        anos++;
    }
    printf("ANOS = %d\n", anos);

    return 0;
}