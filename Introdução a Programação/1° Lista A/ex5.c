#include <stdio.h>
#include <math.h>

int main(void)
{
    double height, edge; // Variaveis a serem lidas pelo scanf //
    double volume; // Variavel na qual guardara o volume //

    scanf("%lf %lf", &height, &edge);

    // Calculo do volume da piramide //
    volume = (1.0/3.0)*((3*pow(edge, 2)*sqrt(3))/2) * height;

    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", volume);

    return 0;
}