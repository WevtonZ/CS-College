#include <stdio.h>
#define PI 3.14159

int main(void)
{

    double radius, height, res;

    scanf("%lf", &radius);
    scanf("%lf", &height);

    res = (2*PI*(radius*radius) + 2*PI*radius*height) * 100;

    printf("O VALOR DO CUSTO E = %.2lf\n", res);

    return 0;
}