#include <stdio.h>
#include <stdlib.h>

#define MAX 4

double recMedia(double vet[]);
void bubble(double vet[]);
void trade(double *a, double *b);

int main(void)
{
    int nTurma, i, al = 0;
    double vMedAl[MAX];
    double maior = 0, menor = 15, media=0, mGeral = 0;

    scanf("%d", &nTurma);
    if(nTurma<1 || nTurma>50)
    {
        puts("O numero de alunos da turma dever ser estar entre 1 e 50 – programa cancelado");
        exit(1);
    }

    while(nTurma--)
    {
        for(i=0 ; i<MAX ; i++)
        {
            scanf("%lf", &vMedAl[i]);
            if(vMedAl[i]<0 || vMedAl[i]>10)
            {
                puts("O valor de cada nota do aluno deve estar entre 0 e 10,0 – programa cancelado");
                exit(1);
            }
        }
        media = recMedia(vMedAl);

        if(media>maior) maior = media;
        if(media<menor) menor = media;

        mGeral+=media;
        
        al++;
        printf("Media final do aluno %d: %.1lf\n\n", al, media);

        if(nTurma==0)
        {
            printf("Media geral da turma: %.1lf\n\n", mGeral/5);
            printf("Maior media da turma: %.1lf\n\n", maior);
            printf("Menor media da turma: %.1lf\n\n", menor);
        }
    }

    return 0;
}

double recMedia(double vet[])
{
    double media, h=0, l=11;
    double a, b, c, d;

    bubble(vet);

    a = vet[0]; b = vet[1]; c = vet[2]; d = vet[3];

    if(a<b && b<c && c<d)
    {
        a = a*0.1; b = b*0.2; c = c*0.3; d = d*0.4;
    }

    if(a<b && c==d) 
    {
        a = a*0.1; b = b*0.3; c = c*0.3; d = d*0.3;
    }

    if(a==b && c<d)
    {
        a = a*0.2; b = b*0.2; c = c*0.2; d = d*0.4;
    }
    if(a==b && c==d)
    {
        a=a*0.25; b=b*0.25; c=c*0.25; d=d*0.25;
    }
    media = a+b+c+d;
    return media;
}

void bubble(double vet[])
{
    int i, j;
    for(i=0 ; i<MAX ; i++) {
        for(j=i+1 ; j<MAX ; j++) if(vet[i]>vet[j]) trade(&vet[i], &vet[j]);
    }
}

void trade(double *a, double *b)
{
    double temp;

    temp = *a;
    *a = *b;
    *b = temp;
}