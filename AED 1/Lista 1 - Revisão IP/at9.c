#include <stdio.h>
#include <stdlib.h>
 
void perf(int n);
int main(void)
{
    int n;
 
    scanf("%d", &n);
    if(n<=0)
    {
        puts("O numero inteiro informado deve ser maior que zero");
        exit(1);
    }
    perf(n);
 
    return 0;
}
 
void perf(int n)
{
    int i;
    int sum = 0;
    for(i=n-1 ; i>0 ; i--)
    {
        if(n%i==0) sum+=i;
    }
    if(sum==n) printf("Numero %d: perfeito\n", n);
    else printf("Numero %d: nao perfeito\n", n);
}
