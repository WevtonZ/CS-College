#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_WORD 83

int main(void)
{
    // Criar um programa onde podemos identificar um palindromo.
    char word[MAX_WORD]; // Palavra a ser verificada como um palindromo ou nao.
    int i, k = 0; // Variavel generica de contagem.
    int x; // Variavel para guardar o strlen(word).
    int count = 0; // Variavel contadora inicializada em 0.

    while(scanf("%s", word)!=EOF)
    {
        count = 0;
        k = 0;
        x = strlen(word);
        for(i=0 ; i<x ; i++)
        {
            k++;
            if(word[i]==word[x-k])
            {
                count++;
            }
        }
        if(count==x)
        {
            printf("sim\n");
        }
        else printf("nao\n");
    }

    return 0;
}