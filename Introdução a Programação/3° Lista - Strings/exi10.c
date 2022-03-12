#include <stdio.h>
#include <string.h>

/**
 * @brief Primeira passada da string para a criptografia.
 * 
 * @param str String em questao.
 */
void crypto1(char * str);

/**
 * @brief Segunda passada da string para a criptografia.
 * 
 * @param str String em questao.
 */
void crypto2(char * str);

/**
 * @brief Terceira passada da string para a criptografia.
 * 
 * @param str 
 */
void crypto3(char * str);

void trade(char* x, char* y);

int main(void)
{
    int tests;
    char cryp[10000];

    scanf("%d", &tests);

    while(tests--)
    {
        getchar();
        scanf("%[^\n]", cryp);

        crypto1(cryp);
        crypto2(cryp);
        crypto3(cryp);

        printf("%s", cryp);
        printf("\n");
    }

    return 0;
}

void crypto1(char * str)
{
    int i=0;

    for(i=0 ; i<strlen(str) ; i++)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            str[i]= str[i] + 3;
        }
    }
}

void crypto2(char * str)
{
    int i, k=0, leng;

    leng = strlen(str);

    for(i=0 ; i<leng ; i++)
    {
        k++;
        if(i<leng-k)
        {
            trade(&str[i], &str[leng-k]);
        }
    }
}

void crypto3(char * str)
{
    int i, k, leng;

    k = 0;
    leng = strlen(str);

    for(i=0 ; i<leng ; i++)
    {
        k++;
        if(i>=leng-k)
        {
            str[i] = str[i]-1;
        }
    }
}

void trade(char* x, char* y)
{
    int temp;
 
    temp = *x;
    *x = *y;
    *y = temp;
}