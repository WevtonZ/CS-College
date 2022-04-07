#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Funcionarios
{
    char* name; // Nome do funcionario.
    int dia, mes, ano; // Data de contratacao do funcionario.
    char* hist; // Historico do funcionario na empresa.
    double fee; // Valor do salario do funcionario.

} func;

/**
 * @brief Funcao que compara a data de nascimento de dois funcionarios.
 * 
 * @param a Primeiro funcionario.
 * @param b Segundo funcionario.
 * @return 1 para VERDADEIRO; 0 para FALSO.
 */
int compDatCont(func *a, func *b);

void trade(func* x, func* y);
void order(func *vet, int nCases);

int main(void)
{
    func *vet;
    int i;
    int nF;
    char buffer[2500];

    scanf("%d", &nF);
    vet = (func*) malloc(sizeof(func)*nF);

    for(i=0 ; i<nF ; i++)
    {
        getchar();
        scanf("%[^\n]", buffer);
        vet[i].name =(char*) malloc(strlen(buffer)+1);
        strcpy(vet[i].name, buffer);
        scanf("%d %d %d", &vet[i].dia, &vet[i].mes, &vet[i].ano);
        getchar();
        scanf("%[^\n]", buffer);
        vet[i].hist = (char*) malloc(strlen(buffer)+1);
        strcpy(vet[i].hist, buffer);
        scanf("%lf", &vet[i].fee);
    }

    order(vet, nF);

    for(i=0 ; i<3 ; i++)
    {
        printf("Nome: %s\n", vet[i].name);
        printf("Data de contratacao: %d/%d/%d\n", vet[i].dia, vet[i].mes, vet[i].ano);
        printf("Ocupacoes: %s\n", vet[i].hist);
        printf("Salario: %.2lf\n", vet[i].fee);

        printf("\n");
    }

    free(vet);
    return 0;
}

void order(func *vet, int nCases)
{
    int i, j;
 
    for(i=0 ; i<nCases ; i++)
    {
        for(j=i+1 ; j<nCases ; j++)
        {
            if(compDatCont(&vet[i], &vet[j]))
            {
                trade(&vet[i], &vet[j]);
            }
        }
    }
}
 
void trade(func* x, func* y)
{
    func temp;
 
    temp = *x;
    *x = *y;
    *y = temp;
}

int compDatCont(func *a, func *b)
{
    if(a->ano > b->ano) return 1;
 
    if(a->ano == b->ano && a->mes > b->mes) return 1;
 
    if(a->ano == b->ano && a->mes == b->mes && a->dia > b->dia) return 1;
 
    else return 0;
}