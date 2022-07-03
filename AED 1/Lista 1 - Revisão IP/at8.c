#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    long int n1, n2, maior, i;
    scanf("%ld %ld", &n1, &n2);

    if(n1==0 && n2==0)
    {
        puts("0");
        return 0;
    }
    
    if(abs(n1)>abs(n2)) maior = abs(n1); else maior = abs(n2);

    for(i=maior ; i>0 ; i--)
    {
        if(abs(n1)%i==0 && abs(n2)%i==0)
        {
            printf("%ld\n", i);
            return 0;
        }
    }
    return 0;
}