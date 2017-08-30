#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetA[5];
    int vetB[5];
    int vetC[10]; //vetor para intercalar A e B
    int i,j,k;

    // preenchendo o vetor A
    printf("--- VETOR A ---\n");
    printf("Informe 5 numeros quaisquer: \n");
    for (i=0;i<5;i++){
        scanf("%d",&vetA[i]);
    }
    // preenchendo o vetor B
    printf("--- VETOR B ---\n");
    printf("Informe mais 5 numeros quaisquer: \n");
    for (j=0;j<5;j++){
        scanf("%d",&vetB[j]);
    }
    // preenchendo o vetor C
    k=-1;
    for (j=0;j<10;j++){
        k++;
        vetC[j]=vetA[k];
        vetC[j+1]=vetB[k];
        j++;
        }

    // imprimindo o vetor C que mostra A e B intercalados
    printf("--- INTERCALANDO OS VETORES A E B ---");
    for (j=0;j<10;j++){
        printf("%d",vetC[j],"\n");
    }
    return 0;
}
