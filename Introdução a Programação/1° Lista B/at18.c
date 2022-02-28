#include <stdio.h>
#include <math.h>

int triangulo(int a, int b, int c);
int trapezio(int a, int b, int c);

int main(void)
{
    float a, b, c;


    scanf("%f %f %f", &a, &b, &c);

    if(fabs(b-c) < a && a < b+c && fabs(a-c) < b && b < a+c && fabs(a-b) < c && c < a+b)
    {
        triangulo(a, b, c);
    }
    else trapezio(a, b, c);

    return 0;
}

int triangulo(int a, int b, int c)
{
    float res;

    res = a+b+c;
    printf("Perimetro = %.1f\n", res);
    return 0;
}

int trapezio(int a, int b, int c)
{
    float res;

    res = ((a+b)*c)/2;
    printf("Area = %.1f\n", res);
    return 0;
}