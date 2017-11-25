#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "filaestatica1.h"

int main(int argc, char** argv){
    struct Fila filEs; // filEs = fila estática
    int opcao;
    char c; // pra inserir um dado novo ou remover o início

    do{
        printf("\n\n-- TESTE DE FILAS ESTATICAS -- \n\n");
        printf("Qual operacao deseja visualizar?\n\n");
        printf("1- Iniciar uma fila\n"); //iniciarfila
        printf("2- Inserir um elemento na fila\n"); //enqueue
        printf("3- Remover um elemento da fila\n"); // dequeue
        printf("4- Obter o inicio da fila\n");
        printf("5- Verificar se a fila esta vazia\n"); // empty
        printf("6- Verificar se a fila esta cheia\n"); // full
        printf("7- Listar os elementos da fila\n");
        printf("8- Finalizar programa\n\n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                iniciarFila(&filEs);
                printf("\nA fila foi iniciada!\n");
                break;
            case 2:
                inserir(&filEs, 'Q');
                inserir(&filEs, 'U');
                inserir(&filEs, 'E');
                inserir(&filEs, 'U');
                inserir(&filEs, 'E');
                listarElementos(filEs);
                break;
            case 3:
                remover(&filEs);
                listarElementos(filEs);
                break;
            case 4:
                obterInicio(filEs);
                break;
            case 5:
                printf("\nA fila estah vazia?\n");
                vazia(filEs);
                break;
            case 6:
                printf("\nA fila estah cheia?\n");
                cheia(filEs);
                break;
            case 7:
                listarElementos(filEs);
                break;
            case 8:
                printf("\nPrograma Encerrado!");
                break;
        }
    }while(opcao!=8);
    return 0;
}
