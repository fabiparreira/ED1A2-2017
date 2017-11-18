#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matA[3][3];
    int matTrans[3][3]; // apresentará a matriz A de forma transposta
    int i,j;

    printf("-----------------------------------\n");
    printf("------ TRANSPONDO UMA MATRIZ ------\n");
    printf("-----------------------------------\n");
    printf("Informe valores para formar uma matriz de ordem 3:\n");
    printf("\n");
    // recebendo valores para montar a matriz de ordem 3
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("Digite um numero inteiro:\n");
            scanf("%d",&matA[i][j]);
        }
    }

    // mostrando a matriz A (ordem 3)
    printf("\n------ MATRIZ A ------\n");
    for (i=0;i<3;i++){
        printf("\n");
        for (j=0;j<3;j++){
            printf("[%d]",matA[i][j]);
        }
    }

    // transpondo a matriz A
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            matTrans[i][j]=matA[j][i]; // o que era coluna em A, vira linha na transposta, e vice-versa
        }
    }

    // mostrando a matriz transposta
    printf("\n");
    printf("\n---- MATRIZ TRANSPOSTA ----\n");
    for (i=0;i<3;i++){
        printf("\n");
        for (j=0;j<3;j++){
            printf("[%d]", matTrans[i][j]);
        }
    }

    return 0;
}
