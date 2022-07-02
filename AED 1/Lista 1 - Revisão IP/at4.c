#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    double p, t, c;
    int n, i;

    scanf("%lf", &p);
    if(p<=0)
    {
        printf("erro\n");
        return 0;
    }
 
    scanf("%d", &n);
    if(n<=0)
    {
        printf("erro\n");
        return 0;
    }
 
    scanf("%lf", &t);
    if(t<=0 || t>=100)
    {
        printf("erro\n");
        return 0;
    }
 
    scanf("%lf", &c);
    if(c<=0 || c>=100)
    {
        printf("erro\n");
        return 0;
    }
 
    for(i=1 ; i<=n ; i++)
    {
        p += (p*(t/100))-(p*(c/1000));
        printf("%.2lf\n", p);
    }
    return 0;
}