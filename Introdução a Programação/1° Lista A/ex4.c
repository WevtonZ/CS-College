#include <stdio.h>
#include <math.h>

int main(void)
{
    double A, B, C; // Variaveis para o calculo de Delta //
    double delta; // Variavel contendo delta //

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    delta = pow(B, 2) - 4*A*C;

    printf("O VALOR DE DELTA E = %.2lf\n", delta);
    
    return 0;
}