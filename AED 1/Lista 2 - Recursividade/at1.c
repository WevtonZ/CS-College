#include <stdio.h>
 
typedef unsigned long long int natural;
 
natural fibonacci(natural n);
int main(void)
{
    natural n, ans;
    int i;
    scanf("%llu", &n);
    for (i = 0; i <= n; ++i)
    {
        printf("%llu ", fibonacci(i));
    }
 
    if(n>=1) fibonacci(n);
    printf("\n");
 
    return 0;
}
 
natural fibonacci(natural n) {
    natural x;
  
    if (n == 1 || n == 2) return 1;
       if(n==0) return 0;
       x = fibonacci(n-1) + fibonacci(n-2);
 
    return(x);
}