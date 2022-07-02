#include <stdio.h>
#include <stdlib.h>
 
typedef unsigned int ui;
 
ui pMin(ui nSem);
ui pMax(ui nSem);
 
int main(void)
{
    ui nSem, min, max; // Numero de semanas a receber.
    
    scanf("%u", &nSem);
    if(nSem<=0)
    {
        printf("erro\n");
        return 0;
    }
 
    min = pMin(nSem);
    max = pMax(nSem);
 
    printf("%u\n", min);
    printf("%u\n", max);
    return 0;
}
 
ui pMin(ui nSem)
{
    ui ans;
 
    ans = ((8*5*nSem)*4) + ((8*2)*3*nSem);
    return ans;
}
 
ui pMax(ui nSem)
{
    ui ans;
 
    ans = ((8*5*nSem)*5) + ((8*2)*3*nSem);
    return ans;
}