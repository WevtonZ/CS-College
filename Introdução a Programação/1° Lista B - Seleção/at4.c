#include <stdio.h>

int main(void)
{
    unsigned int hour; // numero de horas //
    double price;

    scanf("%d", &hour);

    price = (hour/3)*10.0 + (hour%3)*5.0;

    printf("O VALOR A PAGAR E = %.2lf\n", price);

    return 0;
}