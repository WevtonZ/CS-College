#include <stdio.h>
#include <math.h>

int main(void)
{
    double L1, L2, L3; // Lados do triangulo //
    double T; // Total dos lados do triangulo //
    double area; // Area total do triangulo //

    scanf("%lf", &L1);
    scanf("%lf", &L2);
    scanf("%lf", &L3);

    T = ( L1 + L2 + L3)/2;
    area = sqrt(T*(T-L1) *(T-L2) * (T-L3));

    printf("A AREA DO TRIANGULO E = %.2lf\n", area);

    return 0;
}