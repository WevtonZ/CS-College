#include <stdio.h>

int main(void)
{
    long int num; // Variavel guardando o numero a ser verificado.
    int n1, n2, n3, n4, n5;

    // Leitura da variavel.
    scanf("%ld", &num);

    if(num>99999)
    {
        printf("NUMERO INVALIDO\n");
        return 0;
    }

    if(num>9999 && num<100000)
    {
        n1 = num/10000;
        n2 = num%10000/1000;
        n4 = num%100/10;
        n5 = num%10;

        if(n1==n5 && n2==n4) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }

    else if(num>999 && num<10000)
    {
        n1 = num/1000;
        n2 = num%1000/100;
        n3 = num%100/10;
        n4 = num%10;

        if(n1==n4 && n2==n3) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }

    else if(num>99 && num<1000)
    {
        n1 = num/100;
        n3 = num%10;

        if(n1==n3) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }

    else if(num>9 && num<100)
    {
        n1 = num/10;
        n2 = num%10;

        if(n1==n2) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }

    else if(num>=0 && num<10) printf("PALINDROMO\n");

    else printf("NAO PALINDROMO\n");

    return 0;
}