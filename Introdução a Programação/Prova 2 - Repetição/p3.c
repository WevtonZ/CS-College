#include <stdio.h>

void ord1(double *a, double *b, double *c, double *d);
void ord2(double *a, double *b, double *c, double *d);

int main(void)
{
    int i;
    double a, b, c, d, min, max, arm1=9999999, arm2=-9999999;

    while(scanf("%d", &i)!=EOF)
    {
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

        if(i==1 || i==3) ord1(&a, &b, &c, &d);
        if(i==2) ord2(&a, &b, &c, &d);
        if(i==1 || i==2) printf("%.2lf %.2lf %.2lf %.2lf\n", a, b, c, d);
        if(i==3) printf("%.2lf %.2lf %.2lf %.2lf\n", a, b, d, c);

        min=a;
        if(min>b) min=b;
        if(min>c) min=c;
        if(min>d) min=d;
        if(min<arm1) arm1=min;

        max=a;
        if(max<b) max=b;
        if(max<c) max=c;
        if(max<d) max=d;
        if(max>arm2) arm2=max;
    }
    printf("Menor de todos os valores: %.2lf. Maior de todos os valores: %.2lf.\n", arm1, arm2);

    return 0;
}

void ord1(double *a, double *b, double *c, double *d)
{
    double temp;

    if(*a>*d)
    {
        temp = *a;
        *a=*d;
        *d=temp;
    }
    if(*a>*c)
    {
        temp = *a;
        *a=*c;
        *c=temp;
    }
    if(*a>*b)
    {
        temp = *a;
        *a=*b;
        *b=temp;
    }
    if(*b>*d)
    {
        temp = *b;
        *b=*d;
        *d=temp;
    }
    if(*b>*c)
    {
        temp = *b;
        *b=*c;
        *c=temp;
    }
    if(*c>*d)
    {
        temp = *c;
        *c=*d;
        *d=temp;
    }
}

void ord2(double *a, double *b, double *c, double *d)
{
    double temp;

    if(*a<*d)
    {
        temp = *a;
        *a=*d;
        *d=temp;
    }
    if(*a<*c)
    {
        temp = *a;
        *a=*c;
        *c=temp;
    }
    if(*a<*b)
    {
        temp = *a;
        *a=*b;
        *b=temp;
    }
    if(*b<*d)
    {
        temp = *b;
        *b=*d;
        *d=temp;
    }
    if(*b<*c)
    {
        temp = *b;
        *b=*c;
        *c=temp;
    }
    if(*c<*d)
    {
        temp = *c;
        *c=*d;
        *d=temp;
    }
}