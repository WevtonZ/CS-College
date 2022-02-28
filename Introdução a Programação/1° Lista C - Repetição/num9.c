#include <stdio.h>

int main(void)
{
    int n, f = 1; // Numero a ser lido e o seu fatorial.
    int i;

    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        f*=i;
    }
    
    printf("%d! = %d\n", n, f);

    return 0;
}