#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomes[10][20]; // declaração de um matriz de strings
    int i; // contador
    printf("Informe 10 nomes de sua preferência: \n");
    for (i=0; i<10; i++){
        gets(nomes[i]); // tem a mesma função que um scanf
    }
    printf("LISTAGEM COMPLETA DOS NOMES INFORMADOS:\n");
    for (i=0; i<10; i++){
        printf("%d - %s \n",i,nomes[i]);
    }

    return 0;
}
