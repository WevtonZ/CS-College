#include <stdio.h>

int main(void)
{
    int vInit, radius, n; // Valor Inicial, Razao e Numero de elementos da PA //
    int i; // Variavel de repeticao //
    int PA; // Variavel de resolucao da PA //

    scanf("%d %d %d", &vInit, &radius, &n);

    PA = vInit;

    for(i=1;i<n;i++)
    {
        PA = PA + vInit + (i*radius);
    }

    printf("%d\n", PA);

    return 0;
}