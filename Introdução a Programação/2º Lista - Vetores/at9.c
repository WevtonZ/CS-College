#include <stdio.h>
#include <math.h>

/**
 * @brief Funcao que calculara a distancia entre dois pontos 3D dados no programa.
 * 
 * @param x1 Variavel do primeiro ponto A;
 * @param x2 Variavel do segundo ponto A;
 * @param x3 Variavel do terceiro ponto A;
 * @param y1 Variavel do primeiro ponto B;
 * @param y2 Variavel do segundo ponto B;
 * @param y3 Variavel do terceiro ponto B.
 * @return Resultado do calculo da distancia do ponto 3D.
 */
double Point_3D(double x1, double x2, double x3, double y1, double y2, double y3);

int main(void)
{
    int n; // Contador de pontos 3D.
    double a1, a2, a3; // Primeiro ponto 3D.
    double prev1, prev2, prev3; // Pontos anteriores 3D.
    int i; // Variavel contadora.
    double distance; // Variavel do resultado dos testes.

    scanf("%d", &n);

    scanf("%lf %lf %lf", &a1, &a2, &a3);
    for(i=1;i<n;i++)
    {
        prev1 = a1;
        prev2 = a2;
        prev3 = a3;

        scanf("%lf %lf %lf", &a1, &a2, &a3);

        distance = Point_3D(prev1, prev2, prev3, a1, a2, a3);
        printf("%.2lf\n", distance);
    }
    return 0;
}

double Point_3D(double x1, double x2, double x3, double y1, double y2, double y3)
{
    double rad; // Variavel para guardar a raiz da soma dos pontos.
    double pwr; // Variavel para guardar o calculo da exponencial.

    pwr = pow(x1-y1,2) + pow(x2-y2,2) + pow(x3-y3,2);
    rad = sqrt(pwr);

    return rad;
}