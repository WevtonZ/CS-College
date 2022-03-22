#include <stdio.h>

/**
 * @brief Funcao que contara o numero de mudancas que serao necessarias para transformar string1 em string2.
 * 
 * @param str1 Primeira string a ser lida;
 * @param str2 Segunda string a ser lida.
 * @return Numero do contador.
 */
int counter(char str1[], char str2[]);

int main(void)
{
    int nTest;
    char str[100000], str2[100000];
    int op; // Contador para o numero de operacoes feitas pela funcao.

    scanf("%d", &nTest);

    while(nTest--)
    {
        getchar();
        scanf("%s %s", str, str2);

        op = counter(str, str2);
        printf("%d\n", op);
    }

    return 0;
}

int counter(char str1[], char str2[])
{
    int c=0; // contador para a funcao.
    int i=0, k=0;

    while(str1[i]!='\0' && str2[i]!='\0')
    {
        while(str1[i]!=str2[i])
        {
            str1[i] += 1;
            if(str1[i]==123) str1[i] = 'a';
            c++;
        }
        i++;
    }

    return c;
}
