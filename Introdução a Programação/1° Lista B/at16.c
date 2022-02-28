#include <stdio.h>

void ordena(int *x, int *y, int *z);
void troca(int *x, int *y);

int main(void)
{
    unsigned int n1, n2, n3; // Variaveis inteiras positivas.
    char c1, c2, c3; // Caracteres A, B e C do programa.

    // Leituras das variaveis int positivas e dos caracteres ABC, respectivamente.
    scanf("%u %u %u\n", &n1, &n2, &n3);
    scanf("%c %c %c", &c1, &c2, &c3);

    ordena(&n1, &n2, &n3);

    if(c1=='A' && c2=='B' && c3=='C') printf("%d %d %d\n", n1, n2, n3);

    else if(c1=='A' && c2=='C' && c3=='B') printf("%d %d %d\n", n1, n3, n2);

    else if(c1=='B' && c2=='A' && c3=='C') printf("%d %d %d", n2, n1, n3);

    else if(c1=='B' && c2=='C' && c3=='A') printf("%d %d %d\n", n2, n3, n1);

    else if(c1=='C' && c2=='A' && c3=='B') printf("%d %d %d\n", n3, n1, n2);

    else if(c1=='C' && c2=='B' && c3=='A') printf("%d %d %d\n", n3, n2, n1);

    return 0;
}

void troca(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void ordena(int *x, int *y, int *z)
{
    if(*x>*z)
    {
        troca(&*x, &*z);
    }

    if(*x>*y)
    {
        troca(&*x, &*y);
    }

    if(*y>*z)
    {
        troca(&*y, &*z);
    }
}