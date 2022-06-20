#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * @brief Função que lê e verifica se os números são válidos dependendo de suas condições.
 * 
 * @param a Distância das cidades.
 * @param b Velocidade do primeiro carro.
 * @param c Velocidade do segundo carro.
 */
void le_verific(double* a, int* b, int* c);
/**
 * @brief Funcao que calculara a distancia que os carros se encontraram entre cidade A e B.
 * 
 * @param dist Distancia entre as duas cidades.
 * @param c1 Carro 1.
 * @param c2 Carro 2.
 * @return Valor em horas do momento de encontro.
 */
double cDist(double dist, int c1, int c2);
/**
 * @brief Funcao para imprimir o encontro dos carros e a distância.
 * 
 * @param encounter Encontro dos carros.
 */
void print_dist(double encounter);

int main(void)
{
    double dist; // Distancia.
    int vel1, vel2; // Velocidades do automovel 1 e 2;
    double enc;

    le_verific(&dist, &vel1, &vel2);
    enc = cDist(dist, vel1, vel2);
    print_dist(enc);

    return 0;
}

void le_verific(double* a, int* b, int* c)
{
    scanf("%lf", a);
    if(*a==0)
    {
        puts("A distancia entre as cidades deve ser maior do que zero – programa cancelado");
        exit(1);
    }

    scanf("%d", b);
    if(*b==0)
    {
        puts("A velocidade do automovel deve ser maior do que zero – programa cancelado");
        exit(1);
    }

    scanf("%d", c);
    if(*c==0)
    {
        puts("A velocidade do automovel deve ser maior do que zero – programa cancelado");
        exit(1);
    }
}

double cDist(double dist, int c1, int c2)
{
    double encontro;

    encontro = dist / (c1 + c2);
    return encontro;
}

void print_dist(double encounter)
{
    printf("%s", "Momento do encontro: ");
    printf("%.2lf horas apos a partida\n\n", encounter);
    printf("%s", "Local do encontro: ");
    printf("%.1f Km da cidade A\n", encounter*100);
}