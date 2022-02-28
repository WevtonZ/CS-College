#include <stdio.h>

int main(void)
{
    double fee, rjust;

    scanf("%lf", &fee);

    if(fee<300)
    {
        rjust= fee*0.5;
        fee = fee+rjust;
    }
    else
    {
        rjust = fee*0.3;
        fee = fee+rjust;
    }

    printf("SALARIO COM REAJUSTE = %.2lf\n", fee);

    return 0;
}