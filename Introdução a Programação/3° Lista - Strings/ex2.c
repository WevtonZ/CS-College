#include <stdio.h>
#include <string.h>

#define MAX_NUM 6000000

int main(void)
{
    char numb[MAX_NUM];
    int nCases; // Numero de casos.
    int i, k; // Variaveis contadoras.
    int result; // Resultado da soma dos LEDs necessarios.
    int lenght; // Tamanho da string.

    scanf("%d", &nCases);

    for(i=0 ; i<nCases ; i++)
    {
        scanf("%s", numb);

        lenght = strlen(numb);
        result = 0;

        // for(k=0 ; k<lenght ; k++)
        // {
        //     printf("(%d) %c\n", k, numb[k]);
        // }

        for(k=0 ; k<lenght ; k++)
        {
            if(numb[k]=='1')
            {
                result = result + 2;
            }
            
            if(numb[k]=='2' || numb[k]=='3' || numb[k]=='5')
            {
                result = result + 5;
            }
            
            if(numb[k]=='4')
            {
                result = result + 4;
            }

            if(numb[k]=='6' || numb[k]=='9' || numb[k]=='0')
            {
                result = result + 6;
            }

            if(numb[k]=='7')
            {
                result = result + 3;
            }

            if(numb[k]=='8')
            {
                result = result + 7;
            }
        }
        printf("%d leds\n", result);
    }

    return 0;
}