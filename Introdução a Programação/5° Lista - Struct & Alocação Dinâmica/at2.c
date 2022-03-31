#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char fruit[100]; // Frutas do mercado.
    double price; // Preco do produto.
} market;

typedef struct 
{
    char fruit[100]; // Frutas a serem comprada.
    int nFru; // Numero de frutas a serem compradas.
} compras;


int main(void)
{
    int nTest; // Numero de idas ao mercado.
    int nMar, nBuy; // Numero de frutas no mercado e numero de frutas compradas.
    int i, j, k;
    market *vet;
    compras *buy;
    double res = 0;

    scanf("%d", &nTest);   
    
    while(nTest--)
    {
        scanf("%d", &nMar);

        vet = (market*) malloc(nMar*sizeof(market));
        for(i=0 ; i<nMar ; i++)
        {
            getchar();
            scanf("%s", vet[i].fruit);
            scanf("%lf", &vet[i].price);
        }

        scanf("%d", &nBuy);

        buy = (compras*) malloc(nBuy*sizeof(compras));

        if(nBuy>nMar) return 0;

        for(i=0 ; i<nBuy ; i++)
        {
            getchar();
            scanf("%s", buy[i].fruit);
            scanf("%d", &buy[i].nFru);

            for(k=0 ; k<nMar ; k++)
            {
                if(strcmp(vet[k].fruit, buy[i].fruit)==0)
                {
                    res += (vet[k].price * buy[i].nFru);
                }
            }
        }

        printf("R$ %.2lf\n", res);

        res = 0;
        
        free(buy);
        free(vet);
    }

    return 0;
}