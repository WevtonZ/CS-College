#include <stdio.h>

long int fibonacci(int n);
short int primo(int n);

int main(void)
{
    int n, f;
    int i, pri = 2;
    scanf("%d", &n);
    if(n<=2 || n>=100)
    {
        puts("erro");
        return 0;
    }
    f = fibonacci(n+1);
    printf("%d\n", f);

    for(i=0 ; i<2000 ; i++)
    {
        if(primo(pri))
        {
            if(f%pri==0)
            {
                f = f/pri;
                printf("%d ", pri);
            }
            else if(f%pri!=0) pri++;
        }
        if(!primo(pri)) pri++;
    }
    printf("\n");

    return 0;
}

long int fibonacci(int n) {
    long int x;
  
    if (n == 1 || n == 2) return(1);

    x = fibonacci(n-1) + fibonacci(n-2);
    return(x);
}

short int primo(int n)
{
    int counter = 0, i;
 
    for(i=1 ; i<=n ; i++)
    {
        if(n%i==0)
        {
            counter++;
        }
    }
    if(counter>2 || n==1 || n==0) return 0;
    
    else if(counter<=2) return 1;
}