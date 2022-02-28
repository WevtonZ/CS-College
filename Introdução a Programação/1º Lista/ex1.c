#include <stdio.h>

int main(void)
{
    double minFee, resKW; // Variaveis a serem lidas. //
    double cost; // Variavel na qual contera o custo do valor em reais para cada KW //
    double amount, amDisc; // Variaveis de resultado //

    scanf("%lf", &minFee); // Salario //
    scanf("%lf", &resKW); // KW Residencial //

    cost = (minFee*0.7)/100.0; // Custo do valor em reais para cada KW //

    amount = cost*resKW; // Valor do consumo //
    
    amDisc = amount*0.9; // Valor do consumo com desconto de 10% //

    printf("Custo por kW: R$ %.2lf\nCusto do consumo: R$ %.2lf\nCusto com desconto: R$ %.2lf\n", cost, amount, amDisc);
    
    return 0;
}