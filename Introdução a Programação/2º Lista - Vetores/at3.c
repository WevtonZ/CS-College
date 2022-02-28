#include <stdio.h>

#define max 5000
int main(void)
{
    int v[max], i, n;

    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &v[i]);
    }

    for(i=n-1;i>=0;i--)
    {
        if(i>0)
        {
            printf("%d ", v[i]);
        }
        else if(i==0)
        {
            printf("%d\n", v[i]);
        }
    }
    

    return 0;
}