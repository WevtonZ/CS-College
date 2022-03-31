#include <stdio.h>

typedef struct
{
    int num; // Numerador.
    int den; // Denominador.
} fracao;

short int sameFrac(fracao* frac1, fracao *frac2);

int main(void)
{
    int nTests;
    int nFrac;
    int i, j;
    fracao frac[51];
    int cases = 1, c=0;

    scanf("%d", &nTests);

    while(nTests--)
    {
        scanf("%d", &nFrac);
        printf("Caso de teste %d\n", cases++);

        for(i=0 ; i<nFrac ; i++)
        {
            scanf("%d/%d", &frac[i].num, &frac[i].den);
        }

        for(i=0 ; i<nFrac ; i++)
        {
            for(j=i+1 ; j<nFrac ; j++)
            {
                if(sameFrac(&frac[i], &frac[j]))
                {
                    printf("%d/%d equivalente a %d/%d\n", frac[i].num, frac[i].den, frac[j].num, frac[j].den);
                    c++;
                }
            }
        }
        if(c==0) printf("Nao ha fracoes equivalentes na sequencia\n");
        c = 0;
    }

    return 0;
}

short int sameFrac(fracao* frac1, fracao *frac2)
{
    if(frac1->den*frac2->num == frac1->num*frac2->den) return 1;

    return 0;
}