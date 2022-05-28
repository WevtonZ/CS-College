#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char str[80]; // Sentenca dancante.
    int tEof;
    int i, j; // Variaveis de controle.
    int leng; // Tamanho da string.
    int c = 0; // Contador.

    while(1)
    {
        tEof = scanf("%[^\n]", str);
        getchar();
        if(tEof==EOF) break;

        leng = strlen(str);

        for(i=0 ; i<leng ; i++)
        {
            if(str[i]==' ') continue;

            if(c%2==0)
            {
                if(str[i]>='A' && str[i]<='Z') c++;
                else if(str[i]>='a' && str[i]<='z')
                {
                    str[i] = toupper(str[i]);
                    c++;
                }
            }
            else if(c%2!=0)
            {
                if(str[i]>='a' && str[i]<='z') c++;
                else if(str[i]>='A' && str[i]<='Z')
                {
                    str[i] = tolower(str[i]);
                    c++;
                }
            }
        }

        printf("%s\n", str);

        c = 0;
    }

    return 0;
}