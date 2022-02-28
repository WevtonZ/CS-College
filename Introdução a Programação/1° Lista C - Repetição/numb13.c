#include <stdio.h>

short int primo(int n);

int main(void)
{
    int x, ver;

    scanf("%d", &x);

    if(x<0)
    {
        printf("Numero invalido!\n");
        return 0;
    }

    ver = primo(x);

    if(ver==0) printf("NAO PRIMO\n");
    else printf("PRIMO\n");

    return 0;
}

short int primo(int n)
{
    int counter = 0, i;

    for(i=1;i<=n;i++)
    {
        if(n%i==0) {
            counter++;
            }
    }
    if(counter>2 || n==1 || n==0) return 0;
    
    else if(counter<=2) return 1;
}