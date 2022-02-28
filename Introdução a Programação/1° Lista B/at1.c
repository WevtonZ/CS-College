#include <stdio.h>

int main(void)
{
    double n1, n2, n3; // Notas do aluno //
    double media; // Media do aluno //

    scanf("%lf %lf %lf", &n1, &n2, &n3);

    media = (n1+n2+n3)/3;

    if(media<6)
    {
        printf("MEDIA = %.2lf\n", media);
        printf("REPROVADO\n");
    }
    else
    {
        printf("MEDIA = %.2lf\n", media);
        printf("APROVADO\n");
    }

    return 0;
}