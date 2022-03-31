#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef double real;

typedef struct Cursos
{
    int code; // Codigo do curso.
    real vCred; // Valor do credito do curso.
    char* cName; // Vetor do nome do curso.
} curso;

typedef struct Alunos
{
    char* name; // Nome do aluno.
    int code; // Codigo do curso matriculado.
    int credits; // Numero de creditos que esta cursando.
} aluno;

int main(void)
{
    char buffer[1000]; // Buffer para armazenar o nome dos cursos e dos alunos.
    int cNum, aNum; // Numero de cursos e numero de alunos.
    int i, k;
    curso crs[50];
    aluno aln[1050];

    scanf("%d", &cNum); // Leitor do numero de cursos.

    for(i=0 ; i<cNum ; i++)
    {
        scanf("%d", &crs[i].code);
        scanf("%lf", &crs[i].vCred);
        getchar();
        scanf("%[^\n]", buffer);
        crs[i].cName = (char*) malloc(strlen(buffer)+1);
        strcpy(crs[i].cName, buffer);
    }

    scanf("%d", &aNum);

    for(i=0 ; i<aNum ; i++)
    {
        getchar();
        scanf("%[^\n]", buffer);
        aln[i].name = (char*) malloc(strlen(buffer)+1);
        strcpy(aln[i].name, buffer);
        scanf("%d", &aln[i].code);
        scanf("%d", &aln[i].credits);
    }

    for(i=0 ; i<aNum ; i++)
    {
        for(k=0 ; k<cNum ; k++)
        {
            if(aln[i].code==crs[k].code) break;
        }
        printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n", aln[i].name, crs[k].cName, aln[i].credits, crs[k].vCred, crs[k].vCred*aln[i].credits);
    }

    free(crs->cName);
    free(aln->name);
    return 0;
}