#include <stdio.h>
#include <math.h>

int main(void)
{
    double ton, accel, timeS;
    double kg, vel, space, work;

    // Lendo as variaveis //
    scanf("%lf", &ton);
    scanf("%lf", &accel);
    scanf("%lf", &timeS);

    kg = ton*1000;

    // Calculo da velocidade do aviao (Km/h) //
    vel = accel*timeS;
    vel = vel*3.6;

    printf("VELOCIDADE = %.2lf\n", vel);

    // Calculo do espaco percorrido (Metros) //
    space = (accel * pow(timeS, 2)) / 2;

    printf("ESPACO PERCORRIDO = %.2lf\n", space);

    // Calculo do Trabalho realizado (Joules) //
    vel = vel/3.6;
    work = (kg*pow(vel, 2))/2;

    printf("TRABALHO REALIZADO = %.2lf\n", work);

    return 0;
}