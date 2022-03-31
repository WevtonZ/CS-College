#include <stdio.h>
#include <stdlib.h>

typedef struct Datas_Ordem
{
    int matr; // Matricula do aluno.
    int day, month, year; // Dia mes e ano de um aluno.
    char name[220]; // Nome do aluno
} ordem;

/**
 * @brief Funcao que compara se o primeiro aluno e mais novo que o segundo.
 * 
 * @param v1 Primeiro aluno.
 * @param v2 Segundo aluno.
 * @return Caso sim: 1; Caso nao: 0.
 */
short int ComparaDataNasc(ordem *a, ordem *b);

void order(ordem *vet, int nCases);
void trade(ordem* x, ordem* y);

int main(void)
{
    int nC; // Numero de casos de teste.
    int i, j;
    ordem vet[30];

    scanf("%d", &nC);

    for(i=0 ; i<nC ; i++)
    {
        scanf("%d", &vet[i].matr);
        scanf("%d %d %d", &vet[i].day, &vet[i].month, &vet[i].year);
        getchar();
        scanf("%[^\n]", vet[i].name);
    }

    for(i=0 ; i<nC ; i++)
    {
        order(vet, nC);
    }

    for(i=0 ; i<nC ; i++)
    {
        printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", vet[i].matr, vet[i].name, vet[i].day, vet[i].month, vet[i].year);
    }

    return 0;
}

void order(ordem *vet, int nCases)
{
    int i, j;

    for(i=0 ; i<nCases ; i++)
    {
        for(j=i+1 ; j<nCases ; j++)
        {
            if(ComparaDataNasc(&vet[i], &vet[j]))
            {
                trade(&vet[i], &vet[j]);
            }
        }
    }
}

void trade(ordem* x, ordem* y)
{
    ordem temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

short int ComparaDataNasc(ordem *a, ordem *b)
{
    if(a->year < b->year) return 1;

    if(a->year == b->year && a->month < b->month) return 1;

    if(a->year == b->year && a->month == b->month && a->day < b->day) return 1;

    else return 0;
}