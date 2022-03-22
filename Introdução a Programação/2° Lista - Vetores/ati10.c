#include <stdio.h>

#define MAX_NMBR 10000

int main(void)
{
    int grades[MAX_NMBR]; // Notas armazenadas em um vetor de inteiros.
    int n;
    int c1; // Variavel de contagem.
    int i, k, j; // Variavel de contagem generica.
    int hNum = -1; // Maior numero a ser encontrado dentro do vetor.
    int mNum; // Mais numeros dentro do vetor.

    scanf("%d", &n);

    k = 0;
    j = 0;

    for(i=0 ; i<n ; i++)
    {
        scanf("%d", &grades[i]);
    }

    mNum = grades[n-1];

    for(i=0 ; i<n ; i++)
    {
        if(grades[i] == mNum) j++;
        if(grades[i] > hNum)
        {
            hNum = grades[i];
            k = i;
        }
    }
    printf("Nota %d, %d vezes\n", mNum, j);
    printf("Nota %d, indice %d\n", hNum, k);

    return 0;
}