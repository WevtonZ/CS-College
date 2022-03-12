#include <stdio.h>
#include <stdlib.h>

#define MAX_VET 1500

/**
 * @brief Funcao que procura o menor valor e o seu contador de testes.
 * 
 * @param elVetor Vetor lido antecipadamente.
 * @param tamVetor Tamanho do vetor.
 */
void Dist(int elVetor[], int tamVetor);

/**
 * @brief Funcao que imprime os valores no terminal.
 * 
 * @param counter Contador encontrado na funcao Dist;
 * @param lowest Numero encontrado na funcao Dist.
 */
void printDist(int counter, int lowest);

int main(void)
{
    int nVet[MAX_VET]; // Vetor de numeros.
    int qtdTestes; // Quantidade de testes a ser realizado pelo programa.
    int tVet; // Tamanho do vetor.
    int i; // Variavel generica para o for.

    scanf("%d", &qtdTestes); // Leitura dos casos de teste do programa.

    if(qtdTestes<1 || qtdTestes>10) return 0;

    while(qtdTestes--)
    {
        scanf("%d", &tVet);

        for(i=0 ; i<tVet ; i++)
        {
            scanf("%d", &nVet[i]);
            if(nVet[i]>1000 || nVet[i]<-1000) return 0;
        }

        Dist(nVet, tVet);
    }

    return 0;
}

void Dist(int elVetor[], int tamVetor)
{
    int i, j; // Variaveis de contagem da funcao.
    int temp, absValue; // Variavel mediadora dos resultados da funcao.
    int men = 100000; // Menor valor a ser encontrado.
    int count = 0; // Variavel contadora pro numero de tentativas para encontrar o menor.

    for(i=0 ; i<tamVetor ; i++)
    {
        for(j=0 ; j<tamVetor ; j++)
        {
            if(i!=j && i<j)
            {
                temp = elVetor[i] - elVetor[j];
                if(temp<=0)
                {
                    absValue = abs(temp);
                    temp = absValue;
                }
                if(temp<men) men = temp;
                count++;
            }
        }
    }
    printDist(count, men);
}

void printDist(int counter, int lowest)
{
    printf("%d %d\n", lowest, counter);
}