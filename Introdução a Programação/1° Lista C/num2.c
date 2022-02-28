#include <stdio.h>

int main(void)
{
    int num, i;
    double far;
    double celsius;

    scanf("%d", &num);

    for(i=0;i<num;i++)
    {
        scanf("%lf", &far);

        celsius = (5*(far-32))/9;
        
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", far, celsius);
    }

    return 0;
}