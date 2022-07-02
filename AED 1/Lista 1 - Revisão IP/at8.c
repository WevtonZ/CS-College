#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    long int n1, n2, maior, i;
    scanf("%ld %ld", &n1, &n2);
 
    if(n1>n2) maior = n1;
    else maior = n2;
 
    for(i=maior ; i>0 ; i--)
    {
        if(n1%i==0 && n2%i==0)
        {
            printf("%ld\n", i);
            return 0;
        }
    }
    return 0;
}