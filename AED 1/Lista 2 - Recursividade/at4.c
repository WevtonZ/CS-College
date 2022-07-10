#include <stdio.h>
         
void fat(int n);
int multi(int i, int res[], int size, int n);
 
#define MAX 200
int main(void)
{
    int x;
    scanf("%d", &x);
    fat(x);
 
    return 0;
}
 
void fat(int n)
{
    int res[MAX], size, i;
 
    res[0] = 1;
    size = 1;
 
    size = multi(1, res, size, n);
 
    for(i=size-1 ; i>=0 ; i--)
    {
        printf("%d", res[i]);
    }
    printf("\n");
}
 
int multi(int i, int res[], int size, int n)
{
    int c=0, prod, j;
 
    for(j=0 ; j<size ; j++)
    {
        prod = res[j]*i+c;
        res[j] = prod%10;
        c = prod/10;
    }
 
    while(c)
    {
        res[size] = c%10;
        c = c/10;
        size++;
    }
    if(i>=n-1)
    {
        return size;
    }
    else return multi(i+2, res, size, n);
}