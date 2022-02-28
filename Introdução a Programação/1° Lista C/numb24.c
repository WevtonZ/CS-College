#include <stdio.h>

int main(void)
{
    int n=1, i, count=0;
    double seq, prev;

    while(1)
    {
        scanf("%d", &n);

        if(n==0) break;
        
        scanf("%lf", &seq);

        for(i=1;i<n;i++)
        {
            prev = seq;
            scanf("%lf", &seq);
            if(seq>prev)
            {
                count++;
            }
        }
        if(count+1==n) printf("ORDENADA\n");
        else if(count+1!=n) printf("DESORDENADA\n");
        count = 0;
    }

    return 0;
}