#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Lista_Paises(char* country);

typedef struct Lista_de_Paises
{
    char countries[40];
    char chris[40];
} lista;

int main(void)
{
    char pais[30];
    int v;

    while(1)
    {
        v = scanf("%s", pais);
        if(v==EOF) break;

        Lista_Paises(pais);
    }

    return 0;
}

void Lista_Paises(char* country)
{
    lista main[25];
    int i=0;

    strcpy (main[0].countries, "brasil");
    strcpy (main[1].countries, "alemanha");
    strcpy (main[2].countries, "austria");
    strcpy (main[3].countries, "coreia");
    strcpy (main[4].countries, "espanha");
    strcpy (main[5].countries, "grecia");
    strcpy (main[6].countries, "estados-unidos");
    strcpy (main[7].countries, "inglaterra");
    strcpy (main[8].countries, "australia");
    strcpy (main[9].countries, "portugal");
    strcpy (main[10].countries, "suecia");
    strcpy (main[11].countries, "turquia");
    strcpy (main[12].countries, "argentina");
    strcpy (main[13].countries, "chile");
    strcpy (main[14].countries, "mexico");
    strcpy (main[15].countries, "antartida");
    strcpy (main[16].countries, "canada");
    strcpy (main[17].countries, "irlanda");
    strcpy (main[18].countries, "belgica");
    strcpy (main[19].countries, "italia");
    strcpy (main[20].countries, "libia");
    strcpy (main[21].countries, "siria");
    strcpy (main[22].countries, "marrocos");
    strcpy (main[23].countries, "japao");

    strcpy (main[0].chris,"Feliz Natal!");
    strcpy (main[1].chris,"Frohliche Weihnachten!");
    strcpy (main[2].chris,"Frohe Weihnacht!");
    strcpy (main[3].chris,"Chuk Sung Tan!");
    strcpy (main[4].chris,"Feliz Navidad!");
    strcpy (main[5].chris,"Kala Christougena!");
    strcpy (main[6].chris,"Merry Christmas!");
    strcpy (main[7].chris,"Merry Christmas!");
    strcpy (main[8].chris,"Merry Christmas!");
    strcpy (main[9].chris,"Feliz Natal!");
    strcpy (main[10].chris,"God Jul!");
    strcpy (main[11].chris,"Mutlu Noeller");
    strcpy (main[12].chris,"Feliz Navidad!");
    strcpy (main[13].chris,"Feliz Navidad!");
    strcpy (main[14].chris,"Feliz Navidad!");
    strcpy (main[15].chris,"Merry Christmas!");
    strcpy (main[16].chris,"Merry Christmas!");
    strcpy (main[17].chris,"Nollaig Shona Dhuit!");
    strcpy (main[18].chris,"Zalig Kerstfeest!");
    strcpy (main[19].chris,"Buon Natale!");
    strcpy (main[20].chris,"Buon Natale!");
    strcpy (main[21].chris,"Milad Mubarak!");
    strcpy (main[22].chris,"Milad Mubarak!");
    strcpy (main[23].chris,"Merii Kurisumasu!");

    for(i=0 ; i<24 ; i++)
    {
        if(strcmp(main[i].countries, country)==0)
        {
            printf("%s\n", main[i].chris);
            return;
        }
    }
    printf("-- NOT FOUND --\n");
}