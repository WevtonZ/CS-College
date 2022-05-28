#include <stdio.h>
#include <math.h>

int main(void)
{
    double n, err; // Variaveis a serem lidas.
    double temp, r, errVal = 500000;

    r = 1;

    scanf("%lf %lf", &n, &err);

    while(1)
    {
        if(errVal<=err) break;

        temp = (r+n/r)/2;
        r = temp;
        errVal = fabs(n-(r*r));

        printf("r: %.9lf, erro: %.9lf\n", r, errVal);
    }

    return 0;
}