#include <stdio.h>

#define MAX 15

int main(void)
{
    int n;
    int cpf[MAX];
    int d1=0, d2=0; // Calculo dos digitos 10 e 11 do CPF.
    int i;

    scanf("%d", &n);

    while(n--)
    {
        for(i=0 ; i<11 ; i++)
        {
            scanf("%d", &cpf[i]);
        }

        d1 = 1*cpf[0] + 2*cpf[1] + 3*cpf[2] + 4*cpf[3] + 5*cpf[4] + 6*cpf[5] + 7*cpf[6] + 8*cpf[7] + 9*cpf[8];
        d2 = 9*cpf[0] + 8*cpf[1] + 7*cpf[2] + 6*cpf[3] + 5*cpf[4] + 4*cpf[5] + 3*cpf[6] + 2*cpf[7] + 1*cpf[8];

        d1 = d1%11;
        if(d1==10) d1==0;
        d2 = d2%11;
        if(d2==10) d2==0;

        if(d1==cpf[9] && d2==cpf[10]) printf("CPF valido\n");
        else printf("CPF invalido\n");
    }

    return 0;
}