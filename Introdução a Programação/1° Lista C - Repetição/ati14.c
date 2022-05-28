#include <stdio.h>

int main(void)
{
    int mat, H_Num; // Matricula e Numero de horas trabalhadas.
    double H_Val; // Valor por hora trabalhada.
    double fee;

    while(1)
    {
        scanf("%d %d %lf", &mat, &H_Num, &H_Val);
        getchar();

        if(mat==0) break;

        fee = H_Num * H_Val;

        printf("%d %d %.2lf\n", mat, H_Num, fee);
    }

    return 0;
}