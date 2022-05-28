#include <stdio.h>

int main(void)
{
    int money; // variavel contendo o dinheiro a ser sacado no caixa //
    int c1, c2, c3, c4; // Variaveis contadoras //

    c1 = c2 = c3 = c4 = 0;

    scanf("%d", &money);

    // Dinheiro acima de RS 100.00 //
    while(money>=100){
        money-=100;
        c1++;
    }
    
    // Dinheiro acima de RS 50.00 e menor que RS 100.00 //
    while(money>=50){
        money-=50;
        c2++;
    }

    // Dinheiro acima de RS 10.00 e menor que RS 50.00 //
    while(money>=10){
        money-=10;
        c3++;
    }

    // Dinheiro acima de RS 1.00 e menor que RS 10.00 //
    while(money>=1){
        money-=1;
        c4++;
    }

    printf("NOTAS DE 100 = %d\n", c1);
    printf("NOTAS DE 50 = %d\n", c2);
    printf("NOTAS DE 10 = %d\n", c3);
    printf("MOEDAS DE 1 = %d\n", c4);

    return 0;
}