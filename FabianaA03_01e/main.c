#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[5][5]; // matriz de ordem 5
    int totCol[5]; // vetor pra somar colunas
    int totLin[5]; // vetor pra somar linhas
    int soma;
    int i,j;

    soma=0; // inicialização da variável soma

    // preenchendo a Matriz
    printf("----- MATRIZ DE ORDEM 5 -----\n");
    printf("Ou seja, informe valores inteiros para preencher uma matriz de ordem 5: \n");
    for (i=0;i<5;i++){
        for (i=0;i<5;i++){
            printf("Digite o valor da posição [ %d e %d",i,j,"]: \n");
            scanf(&mat[i][j]);
        }
    }

    // somando colunas
    for (j=0;j<5;j++){
        soma=0;
        for (i=0;i<5;i++){
            soma=soma+mat[i][j];
            totCol[j]=soma;
        }
    }

    // somando linhas
    for (i=0;i<5;i++){
        soma=0;
        for (j=0;j<5;j++){
            soma=soma+mat[i][j];
            totLin[i]=soma;
        }
    }

    // mostrando a matriz
    printf("\n ----- SUA MATRIZ ----- \n");
    for (i=0;i<5;i++){
        for (i=0;i<5;i++){
            printf(mat[i][j]);
        }
    }

    // mostrando as somatórias
    printf("SOMATÓRIA DAS COLUNAS:\n");
    for (j=0;j<5;j++){
        printf("[%d]",totCol[j]);
    }

    printf("SOMATÓRIA DAS LINHAS:\n");
    for (i=0;i<5;i++){
        printf("[%d]",totLin[i]);
    }




    return 0;
}
