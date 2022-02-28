#include <stdio.h>

    /*
        Algoritmo que lera um numero de 8 digitos representando uma data aleatoria.
    */

int main(void)
{
    unsigned int num, dia, mes, ano;

    scanf("%u", &num); // Numero de 8 digitos.

    dia = num/1000000;
    mes = num/10000%100;
    ano = num%10000;

    /*
        Meses com 31 dias: Janeiro, Marco, Maio, Julho, Agosto, Outubro, Dezembro;
        Meses com 30 dias: Abril, Junho, Setembro, Novembro;
        Mes com 28 dias: Fevereiro.
    */

    if(dia>31 || mes>12 || dia==0 || mes==0)
    {
        printf("Data invalida!\n");
        return 0;
    }

    if(mes==1)
    {
        printf("%u de janeiro de %u\n", dia, ano);
        return 0;
    }

    if(mes==2)
    {
        if(dia>28)
        {
            printf("Data invalida!\n");
            return 0;
        }
        printf("%u de fevereiro de %u\n", dia, ano);
    }

    if(mes==3)
    {
        printf("%u de marco de %u\n", dia, ano);
    }

    if(mes==4)
    {
        if(dia>30)
        {
            printf("Data invalida!\n");
            return 0;
        }
        printf("%u de abril de %u\n", dia, ano);
    }

    if(mes==5)
    {
        printf("%u de maio de %u\n", dia, ano);
    }

    if(mes==6)
    {
        if(dia>30)
        {
            printf("Data invalida!\n");
        }
        printf("%u de junho de %u", dia, ano);
    }

    if(mes==7)
    {
        printf("%u de julho de %u\n", dia, ano);
    }

    if(mes==8)
    {
        printf("%u de agosto de %u\n", dia, ano);
    }

    if(mes==9)
    {
        if(dia>30)
        {
            printf("Data invalida!\n");
        }
        printf("%u de setembro de %u\n", dia, ano);
    }

    if(mes==10)
    {
        printf("%u de outubro de %u\n", dia, ano);
    }

    if(mes==11)
    {
        if(dia>30)
        {
            printf("Data invalida!\n");
        }
        printf("%u de novembro de %u\n", dia, ano);
    }

    if(mes==12)
    {
        printf("%u de dezembro de %u\n", dia, ano);
    }

    else printf("Data invalida!\n");

    return 0;
}