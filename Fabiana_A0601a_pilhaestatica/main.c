#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "pilhaestatica.h"

int main(int argc, char** argv){
    struct Pilha pilEs; // pilEs = pilha estática
    int opcao;
    //char c; // pra inserir um dado novo

    do{
        printf("\n\n-- TESTE DE PILHAS ESTATICAS -- \n\n");
        printf("Qual operacao deseja visualizar?\n\n");
        printf("1- Iniciar uma pilha\n"); //iniciarPilha
        printf("2- Inserir um valor na pilha\n"); //inserir
        printf("3- Remover um valor da pilha\n");
        printf("4- Obter o topo da pilha\n");
        printf("5- Verificar se a pilha está vazia\n");
        printf("6- Verificar se a pilha está cheia\n");
        printf("7- Listar os elementos da pilha\n");
        printf("8- Finalizar programa\n\n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                iniciarPilha(&pilEs);
                printf("\nA pilha foi iniciada!\n");
                mostrarPilha(pilEs);
                break;
            case 2:
                inserir(&pilEs, 'p');
                printf("\nInserido!\n");
                inserir(&pilEs, 'i');
                printf("\nInserido!\n");
                inserir(&pilEs, 'l');
                printf("\nInserido!\n");
                inserir(&pilEs, 'h');
                printf("\nInserido!\n");
                inserir(&pilEs, 'a');
                printf("\nInserido!\n");
                mostrarPilha(pilEs);
                break;
            case 3:
                remover(&pilEs);
                printf("\nRemovido do topo!\n");
                mostrarPilha(pilEs);
                break;
            case 4:
                obterTopo(pilEs);
                printf("\nDado removido do topo!\n");
                break;
            case 5:
                printf("\nA pilha estah vazia?\n");
                vazia(pilEs);
                break;
            case 6:
                printf("\nA pilha estah cheia?\n");
                cheia(pilEs);
                break;
            case 7:
                mostrarPilha(pilEs);
                break;
            case 8:
                printf("\nPrograma Encerrado!");
                break;
        }
    }while(opcao!=8);
    return 0;
}
