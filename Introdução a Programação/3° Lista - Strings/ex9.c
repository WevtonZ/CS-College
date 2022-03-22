#include <stdio.h>
#include <string.h>

int main(void)
{
    char mirror[12221];
    int nTest; // Numero de casos de teste.
    int nInit, nFin; // Numero inicial e final.
    int i, k, j;
    int len;

    scanf("%d", &nTest);

    while(nTest--)
    {
        k = 0;
        scanf("%d %d", &nInit, &nFin);

        for(i=0;i<nFin-nInit+1;i++)
        {
            sprintf(mirror, "%d", nInit+k);
            k++;
            printf("%s", mirror);
        }

        k = 0;
        for(i=0 ; i<nFin-nInit+1 ; i++)
        {
            sprintf(mirror, "%d", nFin-k);
            k++;
            len = strlen(mirror);
            for(j=len-1 ; j>=0 ; j--)
            {
                printf("%c", mirror[j]);
            }
        }
        printf("\n");
    }

    return 0;
}