#include <stdio.h>
#include <stdlib.h>

#define MAX 100000000
typedef long int li;

int main(void)
{
    li acc, type;
    double consumo;
    double ans;

    scanf("%ld", &acc);
    if(acc<=0 || acc>=MAX)
    {
        puts("O numero da conta deve estar entre 1 e 999999999 – programa cancelado");
        exit(1);
    }

    scanf("%ld", &type);
    if(type<1 || type>3)
    {
        puts("O tipo de consumidor deve ser 1 ou 2 ou 3 – programa cancelado");
        exit(1);
    }
    
    scanf("%lf", &consumo);
    if(consumo<0)
    {
        puts("O consumo deve ser maior ou igual a zero – programa cancelado");
        exit(1);
    }

    switch (type)
    {
    case 1:
        ans = 5+(0.05*consumo);
        break;

    case 2:
        if(consumo <=80) ans = 500;
        else
        {
            ans = 500+(consumo*0.03);
        }
        break;
    
    case 3:
        if(consumo <=100) ans = 800;
        else
        {
            ans = 800+(consumo*0.04);
        }
        break;
    }

    printf("Valor a ser pago para a conta informada: R$ %.2lf\n", ans);

    return 0;
}