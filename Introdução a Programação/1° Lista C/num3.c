#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, i;
    int res;

    scanf("%d", &n);

    if(n<5 || n>2000) return 0;

    for(i=1;i<=n;i++)
    {
        if(i%2==0){
        res = pow(i, 2);
        printf("%d^2 = %d\n", i, res);
        }
    }

    return 0;
}