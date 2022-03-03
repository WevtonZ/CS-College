#include <stdio.h>

#define max 1000

int main(void)
{
    int v[max];
    int N, i, num;
    int counter=0;

    scanf("%d", &N);
    while(N<=0) scanf("%d", &N);

    for(i=0;i<N;i++)
    {
        scanf("%d", &v[i]);
    }

    scanf("%d", &num);

    for(i=0;i<N;i++)
    {
        if(num<=v[i]) counter++;
    }
    printf("%d\n", counter);

    return 0;
}