#include <stdio.h>

/**
 * @brief Funcao para a leitura do vetor de elementos.
 * 
 * @param vet Vetor de elementos;
 * @param tam Tamanho do vetor dado no programa principal.
 */
void le_vet(int vet[], int tam);

/**
 * @brief Programa para contar o numero de elementos que o vetor possui que sao unicos.
 * 
 * @param vet Vetor de elementos;
 * @param tam Tamanho do vetor.
 */
void ElemCount(int vet[], int tam);

int main(void)
{
    int cTest; // Casos de Testes.
    int tElem; // Numero de elementos a se ter no vetor.
    int Elem[500]; // Vetor de elementos.
    int i, k, j, temp, count;
    int res=0; // Resultado a ser dado pela funcao de verificacao.

    scanf("%d", &cTest);

    while(cTest--)
    {
        scanf("%d", &tElem);

        le_vet(Elem, tElem);
        ElemCount(Elem, tElem);
    }

    return 0;
}

void le_vet(int vet[], int tam)
{
    int i;
        
    for(i=0 ; i<tam ; i++)
    {
        scanf("%d", &vet[i]);
    }

}

void ElemCount(int vet[], int tam)
{
    int i, k;
    int res, count, temp;
    res = 0;

    for(i=0 ; i<tam ; i++)
    {
        count = 0;
        temp = vet[i];
        for(k=tam-1;k>=0;k--)
        {
            // printf("(%d)\n", Elem[k]);
            if(temp==vet[k])
            {
                count++;
            }
        }
        if(count==1)
        {
            res++;
        }
    }
    printf("%d\n", res);
}