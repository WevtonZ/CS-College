#include <stdio.h>

int main(void)
{
    int list[1000000]; // Lista de numeros armazenados.
    int n; // Tamanho do vetor.
    int i, j, k; // Variaveis contadoras genericas do programa.
    int num, max_num; // Numero com mais quantidades dentro do vetor.
    int count; // Contador do numero de maior frequencia.

    scanf("%d", &n);

    for(i=0 ; i<n ; i++)
    {
        scanf("%d", &list[i]);
    }

    count = 0;
    max_num = 1;
    for(i=0 ; i<n ; i++)
    {
        k = list[i];
        for(j=0 ; j<n ; j++)
        {
            if(k == list[j]) count++;
        }
        if(count>max_num)
        {
            max_num = count;
            num = list[i];
        }
        count = 0;
    }

    printf("%d\n%d\n", num, max_num);
    return 0;
}