#include <stdio.h>

int main(void)
{
    int mat, dep_num;
    double fee_val, emp_fee, tax, bru_tax, liq_tax;
    double res;

    // Matricula; Valor do Salario; N de Dependentes; Salario do empregado; Taxa ja paga.
    scanf("%d %lf %d %lf %lf", &mat, &fee_val, &dep_num, &emp_fee, &tax);

    /*
        Imposto Bruto calculado como:

        1. 20% do salario do funcionario, caso seja acima de 12 salarios minimos;
        2. 8%, caso seja acima de 5 salarios minimos;
        3. 0%, caso seja abaixo de 5 salarios minimos.
    */

    // Caso 1.
    if(emp_fee > fee_val*12)
    {
        bru_tax = emp_fee*0.20;
    }
    // Caso 2.
    else if(emp_fee > fee_val*5 && emp_fee < fee_val*12)
    {
        bru_tax = emp_fee*0.08;
    }
    // Caso 3.
    else if(emp_fee <= fee_val*5)
    {
        bru_tax = 0;
    }

    liq_tax = bru_tax - (dep_num*300);
    res = liq_tax - (emp_fee*(tax/100));

    printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2lf\nIMPOSTO LIQUIDO = %.2lf\nRESULTADO = %.2lf\n", mat, bru_tax, liq_tax, res);

    if(res>0) printf("IMPOSTO A PAGAR\n");
    if(res==0) printf("IMPOSTO QUITADO\n");
    if(res<0) printf("IMPOSTO A RECEBER\n");

    return 0;
}