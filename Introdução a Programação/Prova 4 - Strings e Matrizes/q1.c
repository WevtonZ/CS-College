#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char str[5000];
    char pLang[1000];
    char c;
    int n;
    int i, k;
    int ccon = 0;
    int lng;

    scanf("%d", &n);

    while(n--)
    {
        getchar();
        scanf("%[^\n]", str);

        for(i=0 ; i<lng ; i++)
        {
            c = str[i];
            if(isalpha(c))
            {
                switch (c)
                {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':    
                    break;
                
                default:
                    ccon++;
                }
            }
        }

        lng = strlen(str) + ccon + 2;

        for(i=lng ; i>=0 ; i--)
        {
            c = str[i];
            if(isalpha(c))
            {
                switch (c)
                {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':    
                    break;
                
                default:
                    for(k=4998 ; k>=i ; k--)
                    {
                        str[k+1] = str[k];
                    }
                    str[i] = 'p';

                }
            }
        }
        printf("%s\n", str);
    }

    return 0;
}