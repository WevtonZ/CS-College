#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, delta, x1, x2;
    
    scanf("%lf %lf %lf", &a, &b, &c); // scan das variaveis da funcao quadratica //
    
    // calculo do delta //
    delta = (b*b) - (4*a*c); 
    
    // Raiz imaginaria //
    if(delta<0){
        printf("RAIZES IMAGINARIAS\n");
        return 0;
    }
    // Uma unica raiz //
    if(delta == 0){
        x1 = -b / (2*a);
        x2 = x1;
        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf\n", x1);
    }
    // Raiz dupla //
    if(delta>0){
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        
        if(x1<x2){
            printf("RAIZES DISTINTAS\n");
            printf("X1 = %.2lf\n", x1);
            printf("X2 = %.2lf\n", x2);
        }
        else{
            printf("RAIZES DISTINTAS\n");
            printf("X1 = %.2lf\n", x2);
            printf("X2 = %.2lf\n", x1);
        }
    }
    
    return 0;
}