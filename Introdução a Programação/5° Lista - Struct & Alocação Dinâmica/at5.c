#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct universidade
{
    int code; // Contem o codigo do curso.
    double value; // Valor do curso.
    char cName[100]; // Nome do curso.
} cursos;

typedef struct Alunos
{
    char student[500]; // Nome do aluno
    int code; // Codigo do curso em que esta matriculado.
    int nCred; // Numero de creditos que esta cursando.
} alunos;

int main(void)
{
    int nCursos; // Numero de cursos.
    int nAlunos; // Numero de alunos na universidade.
    int i, j; // Variaveis de controle.
    cursos vet[31];
    alunos uni[1000];

    scanf("%d", &nCursos);

    for(i=0 ; i<nCursos ; i++)
    {
        scanf("%d", &vet[i].code);
        scanf("%lf", &vet[i].value);
        getchar();
        scanf("%[^\n]", vet[i].cName);
    }

    scanf("%d", &nAlunos);

    for(i=0 ; i<nAlunos ; i++)
    {
        getchar();
        scanf("%[^\n]", uni[i].student);
        scanf("%d", &uni[i].code);
        scanf("%d", &uni[i].nCred);
    }

    for(i=0 ; i<nAlunos ; i++)
    {
        for(j=0 ; j<nCursos ; j++)
        {
            if(uni[i].code==vet[j].code) break;
        }
        printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n", uni[i].student, vet[j].cName, uni[i].nCred, vet[j].value, vet[j].value *uni[i].nCred);
    }

    return 0;
}