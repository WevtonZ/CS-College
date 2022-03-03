#include <stdio.h>
#include <string.h>

#define max 10000

int main(void)
{
    int n, i;
    char vet[max];
    int cvog = 0, ccons = 0, leng;

    scanf("%d", &n);

    while(n--)
    {
        getchar();
        scanf("%[^\n]", vet);
        leng = strlen(vet);

        for(i=0;i<leng;i++)
        {
            if(vet[i]=='a' || vet[i]=='e' || vet[i]=='i' || vet[i]=='o' || vet[i]=='u' || vet[i]=='A' || vet[i]=='E' || vet[i]=='I' || vet[i]=='O' || vet[i]=='U')
            {
                cvog++;
            }
            if(vet[i]>='A' && vet[i]<= 'Z' || vet[i]>='a' && vet[i]<='z')
            {
                ccons++;
            }
        }
        printf("Letras = %d\n", ccons);
        printf("Vogais = %d\n", cvog);
        printf("Consoantes = %d\n", ccons-cvog);
        cvog = 0;
        ccons = 0;
    }

    return 0;
}