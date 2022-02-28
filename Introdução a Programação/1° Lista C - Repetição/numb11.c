#include <stdio.h>

int main(void)
{
    int n, nmb, max, ant;
    int i, c;

    c = 0;
    max = 0;
    ant = 0;

    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        scanf("%d", &nmb);
        if(nmb>ant) 
        {
            c++;
            if(c>max)
            {
                max = c;
            }
        }
        else c = 1;
        ant = nmb;
    }
    printf("O comprimento do segmento crescente maximo e: %d\n", max-1);

    return 0;
}