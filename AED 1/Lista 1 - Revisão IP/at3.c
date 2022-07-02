#include <stdio.h>
#include <stdlib.h>
 
typedef unsigned int ui;
 
ui sum(ui prim);
short int primo(int n);
 
int main(void)
{
    ui nPrimos, ans;
 
    scanf("%u", &nPrimos);
    if(nPrimos==0 || nPrimos >1000)
    {
    printf("erro\n");
    return 0;
    }
 
    ans = sum(nPrimos);
    printf("%u\n", ans);
 
    return 0;
}
 
ui sum(ui prim)
{
    int i=0;
    int b=0, ans = 0;
    for(i=0 ; ; i++)
    {
        if(b==prim) break;
        if(primo(i))
        {
            ans += i;
            b++;
        }
    }
    return ans;
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