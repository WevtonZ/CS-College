#include <stdio.h>
#include <string.h>

int main(void)
{
    int counter; // Contador de numeros escritos.
    char nmbr[6]; // char de leitura dos numeros escritos.
    int i;

    scanf("%d", &counter);

    while(counter--)
    {
        scanf("%s", nmbr);

        if(nmbr[0]=='o' && nmbr[1]=='n' || nmbr[0]=='o' && nmbr[2]=='e' || nmbr[1]=='n' && nmbr[2]=='e')
        {
            printf("1\n");
        }

        if(nmbr[0]=='t' && nmbr[1]=='w' || nmbr[0]=='t' && nmbr[2]=='o' || nmbr[1]=='w' && nmbr[2]=='o')
        {
            printf("2\n");
        }
        
        if(nmbr[0]=='t' && nmbr[1]=='h' && nmbr[2]=='r' && nmbr[3]=='e' || nmbr[0]=='t' && nmbr[1]=='h' && nmbr[2]=='r' && nmbr[4]=='e' ||
           nmbr[0]=='t' && nmbr[1]=='h' && nmbr[3]=='e' && nmbr[4]=='e' || nmbr[0]=='t' && nmbr[2]=='r' && nmbr[3]=='e' && nmbr[4]=='e' ||
           nmbr[1]=='h' && nmbr[2]=='r' && nmbr[3]=='e' && nmbr[4]=='e')
           {
               printf("3\n");
           }
    }

    return 0;
}