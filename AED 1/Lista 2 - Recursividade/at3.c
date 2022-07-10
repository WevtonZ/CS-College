#include <stdio.h>

int bin(int n);
int main(void)
{
    int k, n, ans;
    scanf("%d", &k);

    while(k--)
    {
        scanf("%d", &n);
        bin(n);
        printf("\n");
    }
    return 0;
}

int bin(int n)
{
    if(n==0) return 0;
    bin(n/2);
    printf("%d", n%2);
}