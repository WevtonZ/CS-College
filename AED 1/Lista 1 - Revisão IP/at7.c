#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int dr, rt;
    double cc;
 
    scanf("%lf", &cc);
    if(cc<0 || cc>30)
    {
        puts("erro");
        return 0;
    }
 
    scanf("%d", &dr);
    if(dr<0 || dr>100)
    {
        puts("erro");
        return 0;
    }
    
    scanf("%d", &rt);
    if(rt<0 || rt>100000)
    {
        puts("erro");
        return 0;
    }
 
    if(cc<7 && dr>50 && rt>80000) printf("%s", "10\n");
    else if(cc<7 && dr>50 && rt<=80000) printf("%s", "9\n");
    else if(cc<7 && dr<=50 && rt<=80000) printf("%s", "8\n");
    else printf("%s", "7\n");
 
    return 0;
}