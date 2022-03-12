#include <stdio.h>

#define STR_TAM 500

/**
 * @brief Funcao que ira imprimir os caracteres necessarios de uma string conforme for pedido.
 * 
 * @param n Numero de caracteres que a string imprimira;
 * @param str String em questao.
 */
void string(int n, char* str);

int main(void)
{
    char str[STR_TAM]; // String a ser lida.
    int tests; // Numero de testes a ser realizado pelo programa.
    int n;

    scanf("%d", &tests);

    while(tests--)
    {
        getchar();
        scanf("%d %[^\n]", &n, str);

        string(n, str);
        printf("\n");
    } 

    return 0;
}

void string(int n, char* str)
{
    int i, k, j;

    k = 0;

    if(n==0) printf("\n");
    else
    {
    j = 0;
    
    while((int)str[j]!=0)
    {
        k++;
        j++;
    }

    if(n>=k) printf("%s", str);
    else
    {
        for(i=0 ; i<n ; i++)
        {
            printf("%c", str[i]);
        }
    }
    k=0;
    }
}