#include <stdio.h>

int main(void)
{
    double n, i, k, s; // Numero n, Contador i, Limite k, Incremento s.
    int con; // Contador.

    scanf("%lf %lf %lf %lf", &n, &i, &k, &s);

    // Tabuada de soma.
    printf("Tabuada de soma:\n");
    for(con=0;con<k;con++)
    {
        printf("%.2lf + %.2lf = %.2lf\n",n,i+(con*s),n+i+(con*s));
    }

    printf("Tabuada de subtracao:\n");
    for(con=0;con<k;con++)
    {
        printf("%.2lf - %.2lf = %.2lf\n",n,i+(con*s),n-i-(con*s));
    }

    printf("Tabuada de multiplicacao:\n");
    for(con=0;con<k;con++)
    {
        printf("%.2lf x %.2lf = %.2lf\n",n,i+(con*s),n*(i+con*s));
    }

    printf("Tabuada de divisao:\n");
    for(con=0;con<k;con++)
    {
        printf("%.2lf / %.2lf = %.2lf\n",n,i+(con*s),n/(i+con*s));
    }

    return 0;
}