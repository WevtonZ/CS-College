#include <stdio.h>

int main(void)
{
    int num;
    int n1, n2, n3, n4; // Variaveis que guardarao os digitos separados do numero lido.

    scanf("%d", &num);

    // Caso de numero invalido..
    if(num<1 || num>9999)
    {
        printf("Numero invalido!\n");
        return 0;
    }

    // Se o numero tiver 4 digitos.
    if(num>999 && num<10000)
    {
        n1 = num/1000;
        n2 = num%1000/100;
        n3 = num%100/10;
        n4 = num%10;

        printf("(quarta ordem) %d = ", num);
        printf("%d unidade", n1);
        
        if(n1==1) printf(" ");
        else if(n1>1)printf("s ");

        if(n2>0)
        {
            printf("de milhar + %d centena", n2);

            if(n2==1) printf(" ");
            else if(n2>1) printf("s ");
        }

        if(n3>0)
        {
            printf("+ %d dezena", n3);

            if(n3==1) printf(" ");
            else if(n3>1) printf("s ");
        }

        if(n4>0){
            printf("+ %d unidade", n4);

            if(n4==1) printf(" ");
            else if(n4>1) printf("s ");
        }

        printf("= %d", n1*1000);

        if(n2>0) printf(" + %d", n2*100);

        if(n3>0) printf(" + %d", n3*10);

        if(n4>0) printf(" + %d", n4);
        
        printf("\n");
    }

    else if(num>99 && num<1000)
    {
        n1 = num/100;
        n2 = num%100/10;
        n3 = num%10;

        printf("(terceira ordem) %d = %d centena", num, n1);

        if(n1==1) printf(" ");
        else if(n1>1) printf("s ");

        if(n2>0)
        {
            printf("+ %d dezena", n2);

            if(n2==1) printf(" ");
            else if(n2>1) printf("s ");
        }

        if(n3>0)
        {
            printf("+ %d unidade", n3);

            if(n3==1) printf(" ");
            else if(n3>1) printf("s ");
        }


        printf("= %d", n1*100);

        if(n2>0) printf(" + %d", n2*10);

        if(n3>0) printf(" + %d", n3);

        printf("\n");
    }

    else if(num>9 && num<100)
    {
        n1 = num/10;
        n2 = num%10;

        printf("(segunda ordem) %d = %d dezena", num, n1);

        if(n1==1) printf(" ");
        else if(n1>1) printf("s ");

        if(n2>0)
        {
            printf("+ %d unidade", n2);

            if(n2==1) printf(" ");
            else if(n2>1) printf("s ");
        }

        printf("= %d", n1*10);

        if(n2>0) printf(" + %d", n2);

        printf("\n");
    }

    else if(num>0 && num<10)
    {
        printf("(primeira ordem) %d = %d unidade", num, num);

        if(num==1) printf(" ");
        else if(num>1) printf("s ");

        printf("= %d\n", num);
    }

    return 0;
}