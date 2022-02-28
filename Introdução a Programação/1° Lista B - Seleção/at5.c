#include <stdio.h>

int main(void)
{
    double nota;

    scanf("%lf", &nota);

    if(nota<0 || nota>10)
    {
        return 0;
    }

    if(nota<=10 && nota>=9)
    {
        printf("NOTA = %.1lf CONCEITO = A\n", nota);
    }
    else if(nota<9 && nota>=7.5)
    {
        printf("NOTA = %.1lf CONCEITO = B\n", nota);
    }
    else if(nota<7.5 && nota>=6)
    {
        printf("NOTA = %.1lf CONCEITO = C\n", nota);
    }
    else if(nota<6 && nota >=0){
        printf("NOTA = %.1lf CONCEITO = D\n", nota);
    }

    return 0;
}