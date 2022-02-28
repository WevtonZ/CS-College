#include <stdio.h>

#define P 1.0 // Popular
#define G 5.0 // Geral
#define A 10.0 // Arquibancada
#define C 20.0 // Cadeiras

int main(void)
{
    int cases; // Numero de casos de teste.
    int public; // Publico total do futebol.
    double pop, ger, arq, cad; // Porcentagem de pessoas.
    int i; // Variavel generica do for.
    double res; // Resultado

    // Leitura dos casos de teste seguintes.
    scanf("%d", &cases);

    for(i=0;i<cases;i++)
    {
        scanf("%d", &public);
        scanf("%lf %lf %lf %lf", &pop, &ger, &arq, &cad);

        res = public*(pop/100)*P + public*(ger/100)*G + public*(arq/100)*A + public*(cad/100)*C;

        printf("A RENDA DO JOGO N. %d E = %.2lf\n", i+1, res);
    }

    return 0;
}