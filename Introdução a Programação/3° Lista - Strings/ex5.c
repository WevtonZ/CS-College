#include <stdio.h>
#include <string.h>

int main(void)
{
    char num[100000]; // Numero a ser armazenado.
    int ct1, ct2; // Casos de teste 1 e 2.
    int i, j; // Variavel i de um contador generico.

    while(1)
    {
        scanf("%d %d", &ct1, &ct2);
        if(ct1==0 && ct2==0) break;

        sprintf(num, "%d", ct1+ct2);
        
        for(i=0 ; i<strlen(num) ; i++)
        {
            while(num[i]=='0')
            {
                for(j=i ; j<strlen(num) ; j++)
                {
                    num[j] = num[j+1];
                }
            }
        }
        printf("%s\n", num);
    }

    return 0;
}