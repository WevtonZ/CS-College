#include <stdio.h>
#include <stdlib.h>

void lerVerificar(double *cInv, int *yInv, double *tInv, double *comInv);

int main(void)
{
    double p, t, c;
    int n, i;
    double ans;

    lerVerificar(&p, &n, &t, &c);
    ans = p;

    for(i=1 ; i<=n ; i++)
    {
        ans += (ans*(t/100))-(ans*(c/1000)); // Linha errada. O senhor colocou um 0 a mais no cálculo da taxa pra subtrair.
        printf("Capital resultante no final do ano %d: R$ %.2lf\n", i, ans);
    }

    return 0;
}

void lerVerificar(double *cInv, int *yInv, double *tInv, double *comInv)
{
    scanf("%lf", cInv);
    if(cInv<=0)
    {
        puts("O valor do capital inicial deve ser maior do que 0 – programa cancelado");
        exit(1);
    }

    scanf("%d", yInv);
    if(yInv<=0)
    {
        puts("O valor do número de anos deve ser inteiro e maior do que 0 – programa cancelado");
        exit(1);
    }

    scanf("%lf", tInv);
    if(tInv<=0 || *tInv>=100)
    {
        puts("O valor da taxa de juros deve ser maior do que 0 e menor do que 100 – programa cancelado");
        exit(1);
    }
    
    scanf("%lf", comInv);
    if(comInv<=0 || *comInv>=100)
    {
        puts("O valor da taxa de administracao deve ser maior do que 0 e menor do que 100 – programa cancelado ");
        exit(1);
    }

}