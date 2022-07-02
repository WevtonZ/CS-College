#include <stdio.h>
#include <stdlib.h>
 
#define MAX 100000000
typedef long int li;
 
int main(void)
{
    li acc, type;
    double consumo;
    double ans;
 
    scanf("%ld", &acc);
    if(acc<=0 || acc>=MAX)
    {
        puts("erro");
        return 0;
    }
 
    scanf("%ld", &type);
    if(type<1 || type>3)
    {
        puts("erro");
        return 0;
    }
    
    scanf("%lf", &consumo);
    if(consumo<0)
    {
        puts("erro");
        return 0;
    }
 
    switch (type)
    {
    case 1:
        ans = 5+(0.05*consumo);
        break;
 
    case 2:
        if(consumo <=80) ans = 500;
        else
        {
            ans = 500+((consumo-80)*0.03);
        }
        break;
    
    case 3:
        if(consumo <= 100) ans = 800;
        else
        {
            ans = 800+((consumo-100)*0.04);
        }
        break;
    }
 
    printf("%.2lf\n", ans);
 
    return 0;
}