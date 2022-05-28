#include <stdio.h>

int main(void)
{
    int num; // Numero de 3 digitos //
    int v1, v2, v3; // Variaveis com os numeros separados //
    int reg; // Variavel reguladora //

    scanf("%d", &num);

    v1 = num/100;
    v2 = num%100/10;
    v3 = num%10;

    reg = v1;
    v1 = v3;
    v3 = reg;

    num = (v1*100) + (v2*10) + v3;

    printf("%d\n", num);

    return 0;
}