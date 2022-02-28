#include <stdio.h>

int main(void)
{   
    int year; // Variavel do ano a ser lido //

    scanf("%d", &year);

    if(year%4==0 && year%100!=0 && year>1582)
    {
        printf("ANO BISSEXTO\n");
    }

    else if(year%100==0 && year%400==0 && year>1582)
    {
        printf("ANO BISSEXTO\n");
    }
    else printf("ANO NAO BISSEXTO\n");

    return 0;
}