#include <stdio.h>

int main(void)
{
    int number; // Numero inteiro a ser lido //
    double sum = 0; // Variavel de armazenamento do somatorio //
    int i;

    scanf("%d", &number);
    if(number<=1)
    {
        printf("Numero invalido!\n");
        return 0;
    }

    for(i=1;i<=number;i++)
    {
        sum+=1/(double)i;
    }

    printf("%lf\n", sum);

    return 0;
}