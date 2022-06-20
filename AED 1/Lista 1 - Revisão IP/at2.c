#include <stdio.h>
#include <stdlib.h>

typedef unsigned int ui;

ui pMin(ui nSem);
ui pMax(ui nSem);

int main(void)
{
    ui nSem, min, max; // Numero de semanas a receber.
    
    scanf("%u", &nSem);
    if(nSem==0)
    {
        printf("%s", "A quantidade de semanas de producao deve ser maior ou igual a 1 – programa cancelado\n");
        exit(1);
    }

    min = pMin(nSem);
    max = pMax(nSem);

    printf("A producao minima sera de: %u unidades\n", min);
    printf("A producao maxima sera de: %u unidades\n", max);
    return 0;
}

ui pMin(ui nSem)
{
    ui ans;

    ans = ((8*5*nSem)*4) + ((8*2)*3);
    return ans;
}

ui pMax(ui nSem)
{
    ui ans;

    ans = ((8*5*nSem)*5) + ((8*2)*3);
    return ans;
}