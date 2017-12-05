#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "pilhaestatica2.h"

int main(int argc, char** argv){
    struct Pilha pilEs; // pilEs = pilha estática
    int opcao;
    int deuCerto = 0;
    char c; // pra inserir um dado novo ou remover o topo

    do{
        printf("\n\n-- TESTE DE PILHAS ESTATICAS -- \n\n");
        printf("Qual operacao deseja visualizar?\n\n");
        printf("1- Iniciar uma pilha\n"); //iniciarPilha
        printf("2- Inserir um valor na pilha\n"); //empilhar
        printf("3- Remover um valor da pilha\n");
        printf("4- Obter o topo da pilha\n");
        printf("5- Verificar se a pilha está vazia\n");
        printf("6- Verificar se a pilha está cheia\n");
        printf("7- Listar os elementos da pilha\n");
        printf("8 - Verificar se eh palindromo\n");
        printf("9- Finalizar programa\n\n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                iniciarPilha(&pilEs);
                printf("\nA pilha foi iniciada!\n");
                mostrarPilha(pilEs);
                break;
            case 2:
                pop(&pilEs, 'E', deuCerto);
                pop(&pilEs, 'M', deuCerto);
                pop(&pilEs, 'P', deuCerto);
                pop(&pilEs, 'I', deuCerto);
                pop(&pilEs, 'L', deuCerto);
                pop(&pilEs, 'H', deuCerto);
                pop(&pilEs, 'E', deuCerto);
                pop(&pilEs, 'I', deuCerto);
                mostrarPilha(pilEs);
                break;
            case 3:
                push(&pilEs, c);
                mostrarPilha(pilEs);
                break;
            case 4:
                obterTopo(pilEs);
                mostrarPilha(pilEs);
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
                printf("\nEh palindromo?\n");
                palindromo(pilEs);
                break;
            case 9:
                printf("\nPrograma Encerrado!");
                break;
        }
    }while(opcao!=9);
    return 0;
}
