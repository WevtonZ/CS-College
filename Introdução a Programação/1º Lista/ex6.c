#include <stdio.h>

int main(void)
{
    int hour, min, sec; // Horas, minutos e segundos //
    int secRes; // Resultado em segundos //

    scanf("%d %d %d", &hour, &min, &sec);

    hour*=3600;
    min*=60;

    secRes = hour + min + sec;

    printf("O TEMPO EM SEGUNDOS E = %d\n", secRes);

    return 0;
}