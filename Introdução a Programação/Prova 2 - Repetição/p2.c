#include <stdio.h>
 
int main(void)
{
    long int n=0, seq, i, prev, rad, er;
 
    while(1)
    {
        scanf("%ld", &n); 
        if(n<=1) return 0;
 
        scanf("%ld", &seq);
        prev = seq;
        scanf("%ld", &seq);
        rad = seq-prev;

        if(n==2)
        {
            printf("A sequencia nao e uma PA\n");
        }

        for(i=2;i<n;i++)
        {
            prev = seq;
            scanf("%ld", &seq);
            er = seq-prev;
            if(er==rad && i+1==n)
            {
                printf("A sequencia e uma PA de razao %ld\n", er);
            }
            else if(er!=rad)
            {
                if(i+1==n)
                {
                    printf("A sequencia nao e uma PA\n");
                }
            }
        }
    }
 
    return 0;
}