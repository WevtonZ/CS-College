#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int dr, rt;
    double cc;

    scanf("%lf", &cc);
    if(cc<0 || cc>30)
    {
        puts("O percentual de conteudo de carbono deve estar entre 0 e 30 – programa cancelado");
        exit(1);
    }

    scanf("%d", &dr);
    if(dr<0 || dr>100)
    {
        puts("A escala de dureza Rockwell deve estar entre 0 e 100 – programa cancelado");
        exit(1);
    }
    
    scanf("%d", &rt);
    if(rt<0 || rt>100000)
    {
        puts("A resistência a tração deve estar entre 0 e 100000 – programa cancelado");
        exit(1);
    }

    if(cc<7 && dr>50 && rt>80000) printf("%s", "Grau de pureza do lote produzido: 10\n");
    else if(cc<7 && dr>50 && rt<=80000) printf("%s", "Grau de pureza do lote produzido: 9\n");
    else if(cc<7 && dr<=50 && rt<=80000) printf("%s", "Grau de pureza do lote produzido: 8\n");
    else printf("%s", "Grau de pureza do lote produzido: 7\n");

    return 0;
}