#include <stdio.h>

int main(void)
{
    int num; // Numero de tres digitos a ser lido pelo scanf //
    int cen, dez, un; // Unidade, dezena e centena do numero dado //
    int cNum, rest; // Numero de controle a ser adicionado //

    scanf("%d", &num);

    cen = num/100;
    dez = num%100 / 10;
    un = num%10;

    rest = cen + (dez*3) + (un*5);
    cNum = rest%7;

    printf("O NOVO NUMERO E = %d%d\n", num, cNum);

    return 0;
}