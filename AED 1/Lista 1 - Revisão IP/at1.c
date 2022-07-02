#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cDist(double dist, double c1, double c2);
void print_dist(double encounter, double c1, double c2, double dist);
 
int main(void)
{
    double dist; // Distancia.
    double vel1, vel2; // Velocidades do automovel 1 e 2;
    double enc;
 
    scanf("%lf", &dist);
    if(dist<=0)
    {
        puts("erro");
        return 0;
    }
 
    scanf("%lf", &vel1);
    if(vel1<=0)
    {
        puts("erro");
        return 0;
    }
 
    scanf("%lf", &vel2);
    if(vel2<=0)
    {
        puts("erro");
        return 0;
    }
 
    enc = cDist(dist, vel1, vel2);
    print_dist(enc, vel1, vel2, dist);
 
    return 0;
}
 
double cDist(double dist, double c1, double c2)
{
    double encontro;
 
    encontro = dist / (c1 + c2);
    return encontro;
}
 
void print_dist(double encounter, double c1, double c2, double dist)
{
    printf("%.2lf\n", encounter);

    double p;
    p = encounter*c1;

    printf("%.2lf\n", p);
}