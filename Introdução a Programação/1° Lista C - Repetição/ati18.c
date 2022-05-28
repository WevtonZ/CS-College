#include <stdio.h>

void inverte(int *x, int *y);

int main(void)
{
    int t, n1, n2, i;

    scanf("%d", &t);

    for(i=0;i<t;i++)
    {
        scanf("%d %d", &n1, &n2);
        inverte(&n1, &n2);

        if(n1>n2) printf("%d\n", n1);
        else if(n2>n1) printf("%d\n", n2);
    }

    return 0;
}

void inverte(int *x, int *y)
{
    int a, b, c, arm, arm2;

    a = *x/100;
    b = *x%100/10;
    c = *x%10;
    *x = c*100 + b*10 + a;

    a = *y/100;
    b = *y%100/10;
    c = *y%10;
    *y = c*100 + b*10 + a;
}