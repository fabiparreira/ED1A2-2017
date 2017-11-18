#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matA[3][3];
    int matB[3][3];
    int matResult[3][3]; // matriz que trará o resultado da operação escolhida
    int i,j;
    char op;

    printf(" --- OPERACAO ENTRE MATRIZES ---\n");
    printf("Monte duas matrizes de ordem 3 e escolha uma operacao matematica pra realizar entre elas!\n");
    printf("\n");

    // preenchendo a matriz A
    printf(" --- PREENCHENDO A MATRIZ A ---\n");
    printf("\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("Digite um numero inteiro:\n");
            scanf("%d",&matA[i][j]);
        }
    }

    // mostrando a matriz A
    printf("\n");
    printf(" ----- MATRIZ A -----\n");
    for (i=0;i<3;i++){
        printf("\n");
        for (j=0;j<3;j++){
            printf("%d",matA[i][j]);
        }
    }

    // preenchendo a matriz B
    printf("\n");
    printf(" --- PREENCHENDO A MATRIZ B ---\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("Digite um numero inteiro:\n");
            scanf("%d",&matB[i][j]);
        }
    }

    // mostrando a matriz B
    printf("\n");
    printf(" ----- MATRIZ B -----\n");
    for (i=0;i<3;i++){
        printf("\n");
        for (j=0;j<3;j++){
            printf("%d",matB[i][j]);
        }
    }
    printf("\n");
    printf("Informe a operacao que deseja realizar: [+][-][x] ");
    scanf("%c",&op); // TEM ALGUM PROBLEMA AQUI
    if (op=='+'){
        for (i=0;i<3;i++){
            for (j=0;j<3;j++){
                matResult[i][j]=matA[i][j]+matB[i][j];
            }
        }
    }else{
    if (op=='-'){
        for (i=0;i<3;i++){
            for (j=0;j<3;j++){
                matResult[i][j]=matA[i][j]-matB[i][j];
            }
        }
    }else{
    if (op=='x'){
        for (i=0;i<3;i++){
            for (j=0;j<3;j++){
                matResult[i][j]=matA[i][j]*matB[i][j];
            }
        }
    }
    }
    }

    // mostrando o resultado de acordo com a operação escolhida
    printf("\n----------------------------------------\n");
    printf("---RESULTADO DA OPERACAO ENTRE MATRIZES---\n");
    for (i=0;i<3;i++){
        printf("\n");
        for (j=0;j<3;j++){
            printf("%d",matResult[i][j]);
        }
    }
    return 0;
}
