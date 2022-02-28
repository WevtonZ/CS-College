#include <stdio.h>

int main(void)
{
    int num;

    scanf("%d", &num);

    if(num%3==0 && num%5==0)
    {
        printf("O NUMERO E DIVISIVEL\n");
        return 0;
    }
    else
    {
        printf("O NUMERO NAO E DIVISIVEL\n");
        return 0;
    }

    return 0;
}