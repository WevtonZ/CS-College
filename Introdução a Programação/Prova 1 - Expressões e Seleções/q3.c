#include <stdio.h>

int main(void)
{
    int serie;
    char fm, pldn;

    scanf("%c %d %c", &fm, &serie, &pldn);

    if(fm=='F')
    {
        if(pldn>='A' && pldn<='M')
        {
            if(serie==1)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 1 do andar 1 do bloco 1.\n");
            }
            if(serie==2)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 3 do andar 1 do bloco 1.\n");
            }
            if(serie==3)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 1 do andar 2 do bloco 1.\n");
            }
            if(serie==4)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 3 do andar 2 do bloco 1.\n");
            }
            if(serie==5)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 1 do andar 3 do bloco 1.\n");
            }
            if(serie==6)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 3 do andar 3 do bloco 1.\n");
            }
            if(serie==7)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 1 do andar 1 do bloco 2.\n");
            }
            if(serie==8)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 3 do andar 1 do bloco 2.\n");
            }
            if(serie==9)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 1 do andar 2 do bloco 2.\n");
            }
        }
        if(pldn>='N' && pldn<='Z')
        {
            if(serie==1)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 2 do andar 1 do bloco 1.\n");
            }
            if(serie==2)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 4 do andar 1 do bloco 1.\n");
            }
            if(serie==3)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 2 do andar 2 do bloco 1.\n");
            }
            if(serie==4)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 4 do andar 2 do bloco 1.\n");
            }
            if(serie==5)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 2 do andar 3 do bloco 1.\n");
            }
            if(serie==6)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 4 do andar 3 do bloco 1.\n");
            }
            if(serie==7)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 2 do andar 1 do bloco 2.\n");
            }
            if(serie==8)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 4 do andar 1 do bloco 2.\n");
            }
            if(serie==9)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 2 do andar 2 do bloco 2.\n");
            }
        }
    }

    if(fm=='M')
    {
        if(pldn>='A' && pldn<='M')
        {
            if(serie==1)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 3 do andar 2 do bloco 2.\n");
            }
            if(serie==2)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 1 do andar 3 do bloco 2.\n");
            }
            if(serie==3)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 3 do andar 3 do bloco 2.\n");
            }
        }
        if(pldn>='N' && pldn<='Z')
        {
            if(serie==1)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 4 do andar 2 do bloco 2.\n");
            }
            if(serie==2)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 2 do andar 3 do bloco 2.\n");
            }
            if(serie==3)
            {
                printf("Bem vindo(a) a Escola! Suas aulas serao na sala 4 do andar 3 do bloco 2.\n");
            }
        }
    }

    return 0;
}