#include <stdio.h>
 
typedef unsigned int ui;
 
ui reservo(ui n, ui c);
int main(void)
{
    ui n, ans, res, c = 0;
    scanf("%u", &n);
 
    reservo(n, c);
    printf("\n");
    return 0;
}
 
ui reservo(ui n, ui c)
{
    ui x, res;
 
    if(n==0)
    {
        return n;
    }
 
    if(n%10!=0 || c==1)
    {
        printf("%d", n%10);
        c = 1;
    }
 
    return(n%10 + reservo(n/10, c));
}