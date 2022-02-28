#include <stdio.h>

int main(void)
{
    double facPrice, perDis, perImp; // Variaveis a serem lidas pelo scanf //
    double value; // Valor do preço do carro com as porcentagens //

    scanf("%lf", &facPrice);
    scanf("%lf", &perDis);
    scanf("%lf", &perImp);

    value = facPrice + ((facPrice*perDis)/100) + ((facPrice*perImp)/100);

    printf("O VALOR DO CARRO E = %.2lf\n", value);

    return 0;
}