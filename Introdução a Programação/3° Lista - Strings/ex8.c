#include <stdio.h>
#include <string.h>

#define MAX_STR 500

/**
 * @brief Funcao que procurara dentro do vetor de caracteres a primeira instancia de um caractere especifico.
 * 
 * @param c Caractere a ser procurado dentro da string;
 * @param string String para a procura do caractere.
 * @return Indice do caractere encontrado; -1 para caso nao houver o caractere.
 */
int char_finder(char c, char string[]);

int main(void)
{
    int nTest; // Numero de casos de teste no programa principal.
    char ch; // Caractere a ser lido pelo programa.
    char str[MAX_STR]; // String de 500 caracteres.
    int index; // Variavel para receber o indice da funcao.

    scanf("%d", &nTest);

    while(nTest--)
    {
        getchar();
        scanf("%c", &ch);
        getchar();
        scanf("%[^\n]", str);

        index = char_finder(ch, str);

        if(index>0)
        {
            printf("Caractere %c encontrado no indice %d da string.", ch, index);
        }
        else if(index==-1)
        {
            printf("Caractere %c nao encontrado.", ch);
        }
        printf("\n");
    }

    return 0;
}

int char_finder(char c, char string[])
{
    int i; // Indice do vetor.
    int len; // Tamanho da string em questao.

    len = strlen(string);

    for(i=0 ; i<len ; i++)
    {
        if(c==string[i])
        {
            return i;
        }
        else if(i+1==len)
        {
            return -1;
        }
    }
}