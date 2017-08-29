#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetA[5];
    int vetB[5];
    int vetC[10]; //vetor para intercalar A e B
    int i,j;
    // preenchendo o vetor A
    printf("--- VETOR A ---\n");
    printf("Informe 5 números quaisquer: \n");
    for (i=0;i<5;i++){
        scanf(&vetA[i]);
    }
    // preenchendo o vetor B
    printf("--- VETOR B ---\n");
    printf("Informe mais 5 números quaisquer: \n");
    for (j=0;j<5;j++){
        scanf(&vetB[j]);
    }
    // preenchendo o vetor C
    for (i=0;i<5;i++){
        vetC[i*2-1]=vetA[i];
        vetC[i*2]=vetB[i];
    }
    // imprimindo o vetor C que mostra A e B intercalados
    printf("--- INTERCALANDO OS VETORES A E B ---");
    for (j=0;j<10;j++){
        printf("%d",vetC[j],"\n");
    }
    return 0;
}
