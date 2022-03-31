#include <stdio.h>
#include <stdlib.h>

#define MAX_ 60

typedef struct Polinomios
{
    double coef[MAX_]; // Coeficiente.
} poli;

void poliSum(void);
void poliSub(void);

int main(void)
{
    int nC;
    char signal; // se sera soma ou subtracao de polinomios.

    scanf("%d", &nC); // Leitura do numero de casos de teste.

    while(nC--)
    {
        getchar();
        scanf("%c", &signal); // Leitura do + ou -.
        // Comeco da brincadeira.
        if(signal=='+') poliSum();
        if(signal=='-') poliSub();
    }

    return 0;
}

void poliSum(void)
{
    int n1, n2;
    int i, j;
    int exp;
    double coef;
    poli v1[5];

    for(i=0 ; i<MAX_ ; i++)
    {
        v1[0].coef[i] = 0;
        v1[1].coef[i] = 0;
    }

    scanf("%d", &n1);

    for(i=0 ; i<n1 ; i++)
    {
        scanf("%lf %d", &coef, &exp);
        v1[0].coef[exp] = coef;
    }

    scanf("%d", &n2);

    for(i=0 ; i<n2 ; i++)
    {
        scanf("%lf %d", &coef, &exp);
        v1[1].coef[exp] = coef;
    }

    for(i=0 ; i<MAX_ ; i++)
    {
        v1[2].coef[i] = v1[0].coef[i] + v1[1].coef[i];
    }

    for(i=MAX_-1 ; i>=0 ; i--)
    {
        if(v1[2].coef[i] != 0)
        {
            if(v1[2].coef[i] > 0)
            {
                printf("+");
                if(i==0)
                {
                    printf("%.2lf\n", v1[2].coef[i]);
                }
                else printf("%.2lfX^%d", v1[2].coef[i], i);
            }
            else if(v1[2].coef[i] < 0)
            {
                if(i==0)
                {
                    printf("%.2lf\n", v1[2].coef[i]);
                }
                else printf("%.2lfX^%d", v1[2].coef[i], i);;
            }
        }
    }

}

void poliSub()
{
    int n1, n2;
    int i, j;
    int exp;
    double coef;
    poli v1[5];

    for(i=0 ; i<MAX_ ; i++)
    {
        v1[0].coef[i] = 0;
        v1[1].coef[i] = 0;
    }

    scanf("%d", &n1);

    for(i=0 ; i<n1 ; i++)
    {
        scanf("%lf %d", &coef, &exp);
        v1[0].coef[exp] = coef;
    }

    scanf("%d", &n2);

    for(i=0 ; i<n2 ; i++)
    {
        scanf("%lf %d", &coef, &exp);
        v1[1].coef[exp] = coef;
    }

    for(i=0 ; i<MAX_ ; i++)
    {
        v1[2].coef[i] = v1[0].coef[i] - v1[1].coef[i];
    }

    for(i=MAX_-1 ; i>=0 ; i--)
    {
        if(v1[2].coef[i] != 0)
        {
            if(v1[2].coef[i] > 0)
            {
                printf("+");
                if(i==0)
                {
                    printf("%.2lf\n", v1[2].coef[i]);
                }
                else printf("%.2lfX^%d", v1[2].coef[i], i);
            }
            else if(v1[2].coef[i] < 0)
            {
                if(i==0)
                {
                    printf("%.2lf\n", v1[2].coef[i]);
                }
                else printf("%.2lfX^%d", v1[2].coef[i], i);;
            }
        }
    }

}