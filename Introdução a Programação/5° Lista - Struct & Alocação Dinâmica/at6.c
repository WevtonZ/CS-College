#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char buffer[10000];
    char *name = NULL;
    int nC;

    scanf("%d", &nC);

    while(nC--)
    {
        getchar();
        scanf("%[^\n]", buffer);
        name = (char*) malloc(strlen(buffer)+1);
        strcpy(name, buffer);

        printf("%s\n", name);

        free(name);
    }

    return 0;
}