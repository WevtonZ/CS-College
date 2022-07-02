#include <stdio.h>
#include <stdlib.h>
 
void perf(int n);
int main(void)
{
    int n;
 
    scanf("%d", &n);
    if(n<=0)
    {
        puts("erro");
        return 0;
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
    if(sum==n) printf("perfeito\n");
    else printf("imperfeito\n");
}