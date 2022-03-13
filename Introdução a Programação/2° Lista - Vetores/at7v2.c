#include <stdio.h>

#define MAX 10000

int main(void)
{
    int n, counter; // Tamanho do Vetor e contador do vetor.
    int vet[MAX] = {0}; // Vetor de numeros.
    int hhest; // Maior numero contido no vetor.
    int i, j, k; // Variaveis contadoras.
    
    while(1)
    {
        scanf("%d", &n);

        if(n==0) return 0;
       
        hhest = -1;
        counter = 0;
        for(i=0;i<n;i++)
        {
            scanf("%d", &vet[i]); // Leitura do Vetor.
            if(hhest<vet[i]) hhest = vet[i];
        }
        
        for(j=0;j<=hhest;j++)
        {
            for(i=0;i<n;i++)
            {
                if(vet[i]==j)
                {
                    counter++;
                }
            }
            printf("(%d) %d\n", j, counter);
        }
    }
    return 0;
}
