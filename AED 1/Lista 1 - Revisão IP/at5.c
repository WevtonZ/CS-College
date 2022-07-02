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
        puts("erro");
        return 0;
    }
 
    while(nTurma--)
    {
        for(i=0 ; i<MAX ; i++)
        {
            scanf("%lf", &vMedAl[i]);
            if(vMedAl[i]<0 || vMedAl[i]>10)
            {
                puts("erro");
                return 0;
            }
        }
        media = recMedia(vMedAl);
 
        if(media>maior) maior = media;
        if(media<menor) menor = media;
 
        mGeral+=media;
        
        al++;
        printf("%.1lf\n", media);
 
        if(nTurma==0)
        {
            printf("%.1lf\n", mGeral/5);
            printf("%.1lf\n", maior);
            printf("%.1lf\n", menor);
        }
    }
 
    return 0;
}
 
double recMedia(double vet[])
{
    double h=0, l=11;
    double a, b, c, d;
 
    bubble(vet);
 
    a = vet[0]; b = vet[1]; c = vet[2]; d = vet[3];
    // printf("%.1lf %.1lf %.1lf %.1lf\n\n", a, b, c, d);
 
    if(a<b && b<c && c<d)
    {
        a = a*0.1; b = b*0.2; c = c*0.3; d = d*0.4;
        return a+b+c+d;
    }
 
    else if(a<b && c==d) 
    {
        a = a*0.1; b = b*0.3; c = c*0.3; d = d*0.3;
        return a+b+c+d;
    }
 
    else if(a==b && c<d)
    {
        a = a*0.2; b = b*0.2; c = c*0.2; d = d*0.4;
        return a+b+c+d;
    }
    else if(a==b && c==d)
    {
        a=a*0.25; b=b*0.25; c=c*0.25; d=d*0.25;
        return a+b+c+d;
    }
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