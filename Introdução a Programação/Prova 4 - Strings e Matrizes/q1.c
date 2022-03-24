#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char str[1005];
    char c;
    int n, i, k;
    int lng;

    scanf("%d", &n);

    while(n--)
    {
        getchar();
        scanf("%[^\n]", str);

        lng = strlen(str);
      
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
                    for(k=1003 ; k>=i ; k--)
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