#include <stdio.h>
#include <string.h>

#define MAX_STR 10000

int main(void)
{
    char str1[MAX_STR], str2[MAX_STR]; // primeira String e segunda String.
    int n; // Contadora de testes.
    int i; // Variavel geral do for.

    scanf("%d", &n);

    while(n--)
    {
        i = 0;
        scanf("%s", str1);
        scanf("%s", str2);

        while(str1[i]!='\0' && str2[i]!='\0')
        {
            printf("%c%c", str1[i], str2[i]);
            i++;
        }
        if(str1[i]=='\0')
        {
            while(str2[i]!='\0')
            {
                printf("%c", str2[i]);
                i++;
            }
        }
        else
        {
            while(str1[i]!='\0')
            {
                printf("%c", str1[i]);
                i++;
            }
        }
        printf("\n");
    }

    return 0;
}