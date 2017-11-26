#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "filaestatica2.h"

int main(int argc, char** argv){
    struct Fila filCir; // filCir = fila estática circular
    int opcao;
    char c; // pra inserir um dado novo ou remover o início

    do{
        printf("\n\n-- TESTE DE FILAS CIRCULARES -- \n\n");
        printf("Qual operacao deseja visualizar?\n\n");
        printf("1- Iniciar uma fila\n"); //iniciarFila
        printf("2- Inserir um elemento na fila\n"); //enqueue
        printf("3- Remover um elemento da fila COM FALHA\n"); // dequeue
        printf("4- Obter o inicio da fila\n");
        printf("5- Verificar se a fila esta vazia\n"); // empty
        printf("6- Verificar se a fila esta cheia\n"); // full
        printf("7- Listar os elementos da fila\n");
        printf("8- Conhecer a quantidade de elementos\n"); // size
        printf("9- Finalizar programa\n\n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                iniciarFila(&filCir);
                printf("\nA fila foi iniciada!\n");
                break;
            case 2:
                inserir(&filCir, 'C');
                inserir(&filCir, 'I');
                inserir(&filCir, 'R');
                inserir(&filCir, 'C');
                inserir(&filCir, 'L');
                inserir(&filCir, 'E');
                listarElementos(filCir);
                break;
            /*case 3:
                remover(&filCir);
                listarElementos(filCir);
                break; */
            case 4:
                obterInicio(filCir);
                break;
            case 5:
                printf("\nA fila estah vazia?\n");
                vazia(filCir);
                break;
            case 6:
                printf("\nA fila estah cheia?\n");
                cheia(filCir);
                break;
            case 7:
                listarElementos(filCir);
                break;
            case 8:
                tamanho(filCir);
                break;
            case 9:
                printf("\nPrograma Encerrado!");
                break;
        }
    }while(opcao!=9);
    return 0;
}
