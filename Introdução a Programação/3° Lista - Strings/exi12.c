#include <stdio.h>
#include <math.h>

int Aliteration(char str[]);
#define MAX_STR 5000

int main(void)
{
    char str[MAX_STR];
    int ali, tEof;
    
    while(1)
    {
        tEof = scanf("%[^\n]", str);
        getchar();
        if(tEof==EOF) break;

        ali = Aliteration(str);
        printf("%d\n", ali);

    }

    return 0;
}

int Aliteration(char str[])
{
    char save;
    int i, k, ct;

    i = 0;
    k = 0;
    ct = 0;

    save = str[0];

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            if(fabs((int)str[i+1] - (int)save == 32) || (int)str[i+1] - (int)save == 0)
            {
                if(k==0)
                {
                    ct++;
                    k++;
                }
                else k++;
            }
            else k = 0;
            save = str[i+1];
        }
        i++;
    }
    return ct;
}