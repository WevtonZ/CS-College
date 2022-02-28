#include <stdio.h>

int main(void)
{
    unsigned int conta;
    double waterConsume;
    char type;
    double price;

    scanf("%u %lf %c", &conta, &waterConsume, &type);

    if(type=='R')
    {
        price = 5.0 + (0.5*waterConsume);
        printf("CONTA = %u\nVALOR DA CONTA = %.2lf\n", conta, price);
    }

    else if(type=='C')
    {
        if(waterConsume>=80)
        {
            price = 500.0 + ((waterConsume-80)*0.25);
            printf("CONTA = %u\nVALOR DA CONTA = %.2lf\n", conta, price);
        }
        else
        {
            price = 500;
            printf("CONTA = %u\nVALOR DA CONTA = %.2lf\n", conta, price);
        }
    }

    else if(type=='I')
    {
        if(waterConsume>=800)
        {
            price = 800.0 + ((waterConsume-100)*0.04);
            printf("CONTA = %u\nVALOR DA CONTA = %.2lf\n", conta, price);
        }
        else
        {
            price = 800;
            printf("CONTA = %u\nVALOR DA CONTA = %.2lf\n", conta, price);
        }
    }

    return 0;
}