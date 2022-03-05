#include <stdio.h>

/**
 * @brief Funcao que verificara se os numeros opostos precisam ser trocados.
 * 
 * @param vet Vetor para a troca de indices;
 * @param tam Tamanho do vetor.
 */
void TrocaOpostosSeMenor(int vet[], int tam);

/**
 * @brief Funcao de troca de indices em um vetor.
 * 
 * @param x Primeiro numero;
 * @param y Segundo numero.
 */
void trade(int* x, int* y);

/**
 * @brief Funcao de impressao do vetor no terminal.
 * 
 * @param vet Vetor a ser imprimido;
 * @param tam Tamanho do vetor.
 */
void print_vet(int vet[], int tam);

int main(void)
{
    int cTestes, tVet;
    int vet[500];
    int i;

    scanf("%d", &cTestes);

    while(cTestes--)
    {
        scanf("%d", &tVet);

        for(i=0 ; i<tVet ; i++)
        {
            scanf("%d", &vet[i]);
        }

        TrocaOpostosSeMenor(vet, tVet);
        print_vet(vet, tVet);

    }

    return 0;
}

void TrocaOpostosSeMenor(int vet[], int tam)
{
    int i, k=0;

    for(i=0 ; i<tam ; i++)
    {
        k++;
        if(vet[i]>vet[tam-k])
        {
            trade(&vet[i], &vet[tam-k]);
        }
    }
}

void trade(int* x, int* y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

void print_vet(int vet[], int tam)
{
    int i;
    for(i=0 ; i<tam ; i++)
    {
        printf("%d", vet[i]);
        if(i<tam-1)
        {
            printf(" ");
        }
    }
    printf("\n");
}