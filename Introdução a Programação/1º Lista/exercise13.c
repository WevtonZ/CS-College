#include <stdio.h>

int main(void)
{
    double a, b, c, d, e, f; // Variaveis da equacao Linear //
    double x, y; // Variaveis na qual queremos encontrar //

    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

    x = (b * f - c * e) / (b * d - a * e);
	y = (c * d - a * f) / (b * d - a * e);

    printf("O VALOR DE X E = %.2lf\n", x);
    printf("O VALOR DE Y E = %.2lf\n", y);

    return 0;
}