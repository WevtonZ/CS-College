#include <stdio.h>
#include <stdlib.h>
 
typedef struct fracao{
    int num;
    int den;
} frac;

short int sameFrac(frac* frac1, frac *frac2);
 
frac* le_lista_frac(frac*p, int *tam, int *n);
 
int main(void)
{
    frac* p=(frac*) malloc(sizeof(frac)*4);
    if(!p){
        // printf("Nao ha memoria\n");
        exit(1);
    }
    int casos,tamVet=4, numFrac;
    int i, j;
    int c = 0;
    int css = 0;
 
    scanf("%d", &casos);
 
    while(casos--){
        numFrac=0;
        p=le_lista_frac(p,&tamVet,&numFrac);
        printf("Caso de teste %d\n", ++css);
        for(i=0 ; i<numFrac ; i++)
        {
            for(j=i+1 ; j<numFrac ; j++)
            {
                if(sameFrac(&p[i], &p[j]))
                {
                    printf("%d/%d equivalente a %d/%d\n", p[i].num, p[i].den, p[j].num, p[j].den);
                    c++;
                }
            }
        }
        if(c==0) printf("Nao ha fracoes equivalentes na sequencia\n");
        c = 0;
    }
 
    free(p);
    return(0);
}    
frac* le_lista_frac(frac*p, int*tam, int *n){
    int num,i, den;
    char c;
    i=0;
    frac* q = NULL;
    while(c!='\n'){

        scanf("%d/%d%c",&num, &den,&c);
        if(i<*tam){
            p[i].num=num;
            p[i].den=den;
            i++;
            (*n)++;
        }
        else{
            *tam *= 2*sizeof(frac);
            q = (frac*) realloc(p, *tam);
            if(!q){
                // printf("Nao ha memoria\n");
                exit(1);
            }
            p=q;
            p[i].num=num;
            p[i].den=den;
            i++;    
            (*n)++;
        }    
    }    
    return(p);
}
short int sameFrac(frac* frac1, frac *frac2)
{
    if(frac1->den*frac2->num == frac1->num*frac2->den) return 1;
 
    return 0;
}    