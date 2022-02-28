#include <stdio.h>

int main(void)
{
    double Fahr, Celsius; // Variaveis de temperatura //
    double inch, mm; // Variaveis de volume de agua //

    scanf("%lf", &Fahr);
    scanf("%lf", &inch);

    Celsius = 5*(Fahr - 32) / 9.0; // Conversao para Celsius //
    mm = inch*25.4; // Conversao para Milimetros //

    printf("O VALOR EM CELSIUS = %.2lf\n", Celsius); 
    printf("A QUANTIDADE DE CHUVA E = %.2lf\n", mm); // Impressao na tela dos valores //

    return 0;
}