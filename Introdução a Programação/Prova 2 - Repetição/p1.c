#include <stdio.h>

int main(void)
{
    int n, seq, i, count=1;

    while(scanf("%d", &n)!=EOF)
    {
        // scanf("%d", &n);
        for(i=1;i<=n;i++)
        {
            scanf("%d", &seq);
            if(seq==i)
            {
                printf("Teste %d\n", count);
                printf("%d\n", i);
                count++;
            }
        }
    }

    return 0;
}