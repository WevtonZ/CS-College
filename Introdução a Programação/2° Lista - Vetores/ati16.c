#include <stdio.h>

int main(void)
{
    int nAlunos, nPresenca; // Numero de alunos (nAlunos >= 1) e a presenca necessaria (nPresenca <= 1000).
    int nChegada[1000];
    int i;
    int counter = 0;

    scanf("%d %d", &nAlunos, &nPresenca); // Leitura dos alunos e da presenca necessaria.

    for(i=0 ; i<nAlunos ; i++)
    {
        scanf("%d", &nChegada[i]); // Leitura do numero de alunos.
    }

    for(i=0 ; i<nAlunos ; i++)
    {
        if(nChegada[i]<=0)
        {
            counter++;
        }
    }

    if(counter<nPresenca) printf("SIM\n");
    
    else if(counter >= nPresenca)
    {
        printf("NAO\n");
        for(i=nAlunos-1 ; i>=0 ; i--)
        {
            if(nChegada[i]<=0) printf("%d\n", i+1);
        }
    }

    return 0;
}