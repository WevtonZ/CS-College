#include <stdio.h>
#include <stdlib.h>

int *vetor = NULL; // Vetor de numeros de tamanho n. Variavel global.

/**
 * @brief Funcao que recursivamente soma os valores maximos e minimos dentro de um vetor com n variaveis.
 * 
 * @param tamanhoVetor Numero de variaveis dentro do vetor a ser somado.
 * @param vMax Valor maximo encontrado dentro do vetor.
 * @param vMin Valor minimo encontrado dentro do vetor.
 * @param soma Variavel que armazenara a soma e a retornara para o programa principal.
 */
void maxminSoma(int tamanhoVetor, int vMax, int vMin, int* soma);

int main(void)
{
    int tamanhoVetor; // Numero representando o tamanho do vetor.
    int i; // Variavel de controle do loop.
    int max, min; // Numero maximo e minimo a serem encontrados dentro do vetor.
    int resultado = 0; // Resultado final.

    printf("\nInsira um numero inteiro (Entre 1 e 100).\n-> ");
    scanf("%d", &tamanhoVetor);

    while(tamanhoVetor<1 || tamanhoVetor>100)
    {
        printf("Numero invalido! Insira novamente o numero inteiro (Entre 1 e 100).\n-> ");
        scanf("%d", &tamanhoVetor);
    }

    // alocacao dinamica de memoria.
    vetor = (int*) malloc(tamanhoVetor*sizeof(int));

    printf("\nAgora, insira os %d valores separados por um espaco para a soma do maximo e do minimo.\n-> ", tamanhoVetor);
    // Leitura do vetor de tamanho n;
    for(i = 0 ; i<tamanhoVetor ; i++)
    {
        scanf("%d", &vetor[i]);
    }

    max = vetor[0];
    min = vetor[0];

    for(i=0 ; i<tamanhoVetor ; i++)
    {
        if(max<vetor[i])
            max = vetor[i];

        if(min>vetor[i])
            min = vetor[i];
    }

    maxminSoma(tamanhoVetor-1, max, min, &resultado);
    printf("\nA soma entre os maximos e minimos da sequencia resultou em:\n-> (%d)!\n", resultado);

    free(vetor);
    return 0;
}

void maxminSoma(int tamanhoVetor, int vMax, int vMin, int* soma)
{
    // Condicao de parada da recursao.
    if(tamanhoVetor<0) return;

    // Se achar o numero maximo dentro do vetor:
    if(vetor[tamanhoVetor]==vMax)
    {
        *soma+=vMax;
    }
    // Se achar o numero minimo dentro do vetor:
    if(vetor[tamanhoVetor]==vMin)
    {
        *soma+=vMin;
    }

    // Recursao.
    maxminSoma(tamanhoVetor-1, vMax, vMin, soma);
}