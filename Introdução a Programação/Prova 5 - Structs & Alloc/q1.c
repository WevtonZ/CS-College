#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Mercadorias
{
    int code; // Codigo da mercadoria.
    float price; // Preco da mercadoria.
    char * mName; // Nome da mercadoria.
}merch;

typedef struct Lista_de_Compras
{
    char* cName; // Nome do cliente.
    int mCode; // Codigo da Mercadoria.
    int qdt; // Quantidade da mercadoria a ser comprada.
} list;

int main(void)
{
    int nMer, mList; // Numero de mercadorias.
    int i, j;
    char buffer[4000]; // Buffer para o Malloc.
    merch *mer;
    list *lis;
    int client = 0; // Contador de clientes.
    double res; // resultado.

    scanf("%d", &nMer);
    mer = (merch*) malloc(nMer*sizeof(merch));

    for(i=0 ; i<nMer ; i++)
    {
        scanf("%d", &mer[i].code);
        scanf("%f", &mer[i].price);
        getchar();
        scanf("%[^\n]", buffer);
        mer[i].mName =(char*) malloc(strlen(buffer)+1);
        strcpy(mer[i].mName, buffer);
    }

    scanf("%d", &mList);
    lis = (list*) malloc(mList*sizeof(list));

    for(i=0 ; i<mList ; i++)
    {
        getchar();
        scanf("%[^\n]", buffer);
        lis[i].cName = (char*)malloc(strlen(buffer)+1);
        strcpy(lis[i].cName, buffer);
        scanf("%d", &lis[i].mCode);
        scanf("%d", &lis[i].qdt);
    }   

    for(i=0 ; i<mList ; i++)
    {
        printf("Pedido de Compra do Cliente: %d\n", ++client);
        printf("Nome do cliente: %s\n", lis[i].cName);
        
        for(j=0 ; j<nMer ; j++)
        {
            if(lis[i].mCode == mer[j].code) break;
        }
        printf("Nome da mercadoria: %s\n", mer[j].mName);
        printf("Quantidade: %d\n", lis[i].qdt);
        printf("Valor da Mercadoria: %.2f\n", mer[j].price);

        res = lis[i].qdt * mer[j].price;

        printf("Valor total da Compra: %.2f\n", res);

        printf("\n");
    }


    free(lis->cName);
    free(mer->mName);

    return 0;
}