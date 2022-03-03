#include <stdio.h>

int main(void)
{
    int n; // Numero em decimal.
    char bin[32]; // Numero em binario a ser preenchido.
    int i, j; // Variaveis contadoras do programa.
    int EOF_fnder; // Variavel para o EOF.
    long int base_number; // 32 bits cortado pela metade.

    while(1)
    {
        EOF_fnder = scanf("%d", &n);
        if(EOF_fnder == EOF) break; // Fim de arquivo.

        if(n==0)
        {
            printf("0");
        }
        base_number = 2147483648; // 32 bits cortado pela metade.

        for(i=0;i<32;i++)
        {
            bin[i] = n/base_number;
            n = n%base_number;
            base_number /= 2;
        }

        j = 0;

        for(i=0;i<32;i++)
        {
            if(bin[i]==0) j++;
            else break;
        }

        for(i=j;i<32;i++)
        {
            printf("%d", bin[i]);
        }
        printf("\n");
    }

    return 0;
}