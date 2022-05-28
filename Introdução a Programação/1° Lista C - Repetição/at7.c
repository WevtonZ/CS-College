#include <stdio.h>

int main(void)
{
    unsigned int mat; // Numero de matricula do aluno //
    double np, nl; // Nota das provas, Nota das listas //
    double nf = 0, mp = 0, ml = 0, nt = 0; // Nota final, Media de prova(8), Media das listas(5), Nota de trabalho(1) //
    int presence; // Numero de presenca do aluno //
    int i; // Variavel de contagem //

    while(1){
        // Leitura do numero de matricula //
        scanf("%u", &mat);
        
        mp = 0;
        ml = 0;
        // Leitura das notas das provas //
        for(i=0;i<8;i++)
        {
            scanf("%lf", &np);
            mp = mp + np;
        }

        // Leitura das notas das listas //
        for(i=0;i<5;i++)
        {
            scanf("%lf", &nl);
            ml = ml + nl;
        }

        // Leitura da nota do trabalho //
        scanf("%lf", &nt);

        // Leitura da presença do aluno em horas de aula //
        scanf("%d", &presence);

        // Calculo das medias //
        mp = mp/8.0;
        ml = ml/5.0;

    if(mp ==-1 || ml == -1 || nt == -1 || presence == -1)
    {
        return 0;
    }

        // Calculo da nota final //
        nf = (mp*0.7) + (ml*0.15) + (nt*0.15);

        printf("Matricula: %d, ", mat);
        printf("Nota Final: %.2lf, ", nf);
        printf("Situacao final: ");

        if(nf>=6 && presence>=96)
        {
            printf("APROVADO\n");
        }
        if(nf>=6 && presence<96)
        {
            printf("REPROVADO POR FREQUENCIA\n");
        }
        if(nf<6 && presence>=96)
        {
            printf("REPROVADO POR NOTA\n");
        }
        if(nf<6 && presence<96)
        {
            printf("REPROVADO POR NOTA E POR FREQUENCIA\n");
        }
    }
    return 0;
}