#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct alunos
{
    int mat; // Matricula;
    char* nome; // Nome do aluno.
    double n1, n2, n3; // Tres notas.
} aln;

/**
 * @brief Funcao que le os dados de uma struct.
 * 
 * @param vet Vetor de structs.
 * @param nT Numero de casos de teste.
 */
void le_struct(aln *vet, int nT);

/**
 * @brief Funcao que ordena os alunos pela ordem de sua matricula.
 * 
 * @param vet Vetor de structs.
 * @param nT Numero de casos de teste.
 */
void ordStruct(aln *vet, int nT);
void tradeStruct(aln *a, aln *b);

/**
 * @brief Funcao que imprimira no terminal as structs ordenadas pela matricula.
 * 
 * @param vet Vetor de structs.
 * @param nT Numero de casos de teste.
 */
void printStructs(aln *vet, int nT);

int main(void)
{
    int n; // Numero de casos de teste.
    int nT;
    aln *vet = NULL;

    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &nT);
        vet = (aln*) malloc(nT*sizeof(aln));
        le_struct(vet, nT);
        ordStruct(vet, nT);
        printStructs(vet, nT);

        free(vet);
    }


    return 0;
}

void le_struct(aln *vet, int nT)
{
    int i;
    char buffer[500];

    for(i=0 ; i<nT ; i++)
    {
        scanf("%d", &vet[i].mat);
        getchar();
        scanf("%[^\n]", buffer);
        vet[i].nome = malloc(strlen(buffer));
        strcpy(vet[i].nome, buffer);
        scanf("%lf %lf %lf", &vet[i].n1, &vet[i].n2, &vet[i].n3);
    }
}

void ordStruct(aln *vet, int nT)
{
    int i, j;
 
    for(i=0 ; i<nT ; i++)
    {
        for(j=i+1 ; j<nT ; j++)
        {
            if(vet[i].mat > vet[j].mat)
            {
                tradeStruct(&vet[i], &vet[j]);
            }
        }
    }
}
 
void tradeStruct(aln *a, aln *b)
{
    aln temp;
 
    temp = *a;
    *a = *b;
    *b = temp;
}

void printStructs(aln *vet, int nT)
{
    int i;

    for(i=0 ; i<nT ; i++)
    {
        printf("%d ", vet[i].mat);
        printf("%s ", vet[i].nome);
        printf("%.2lf %.2lf %.2lf\n", vet[i].n1, vet[i].n2, vet[i].n3);
    }
    printf("\n");
}