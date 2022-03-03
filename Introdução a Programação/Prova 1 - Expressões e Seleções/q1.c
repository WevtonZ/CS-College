#include <stdio.h>

int main(void)
{
    double qtd_flour, prc_flour, qtd_yeast, prc_yeast, kw, prc_kw, bre_tax;
    double cost, sell;

    scanf("%lf %lf %lf %lf %lf %lf %lf", &qtd_flour, &prc_flour, &qtd_yeast, &prc_yeast, &kw, &prc_kw, &bre_tax);

    cost = (prc_flour*qtd_flour) + (prc_yeast*qtd_yeast) + (prc_kw*kw);
    cost = cost+(cost*(bre_tax/100));

    sell = cost+(cost*0.3);

    printf("PRECO DE CUSTO = %.2lf\nPRECO DE VENDA = %.2lf\n", cost, sell);

    return 0;
}