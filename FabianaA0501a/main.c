#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "listalinearestatica.h"

int main(int argc, char** argv){
    struct Lista lisLinEs; // lisLinEs = lista linear estática
    int opcao;

    do{
        printf(" -- TESTE DE LISTAS LINEARES ESTÁTICAS -- \n\n");
        printf("Qual operação deseja visualizar?\n\n");
        printf("1- Iniciar uma lista\n");
        printf("2- Inserir um valor na lista\n");
        printf("3- Inserir um valor ordenado na lista\n");
        printf("4- Acessar um valor da lista\n");
        printf("5- Alterar um valor da lista\n");
        printf("6- Remover um valor da lista\n");
        printf("7- Inverter a lista\n");
        printf("8- Mostrar a lista\n");
        printf("9- Extrair uma sublista da lista\n");
        printf("10- Concatenar a lista com uma nova lista");
        printf("11- Finalizar programa");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                iniciarLista(&lisLinEs);
                mostrarLista(lisLinEs);
                break;
            case 2:
                inserir(&lisLinEs, POS_FINAL, 'L');
                inserir(&lisLinEs, POS_FINAL, 'I');
                inserir(&lisLinEs, POS_FINAL, 'S');
                inserir(&lisLinEs, POS_FINAL, 'T');
                inserir(&lisLinEs, POS_FINAL, 'A');
                inserir(&lisLinEs, 5, '1');
                // tentar inserir valor fora do intervalo:
                inserir(&lisLinEs, 1000, 'F');
                mostrarLista(lisLinEs);
                break;
            case 3:
                inserirOrdenado(&lisLinEs, 'E');
                mostrarLista(lisLinEs);
                break;
            case 4:
                char c = acessar(struct lisLinEs, 1);
                printf("\nMain: %c encontrado na posição %d", dado, k);
                break;
            case 5:
                alterar(&lisLinEs, 2, 'P');
                break;
            case 6:
                remover(&lisLinEs, 4);
                // tentar remover fora dos limites
                remover(&lisLinEs, 100);
                mostrarLista(lisLinEs);
                break;
            case 7:
                printf("\nAntes da inversão: ");
                mostrarLista(lisLinEs);
                inverter(&lisLinEs);
                printf("\nDepois da inversão: ");
                mostrarLista(lisLinEs);
                break;
            case 8:
                mostrarLista(lisLinEs);
                break;
            case 9:
                subLista(@lisLinEs, 0, 3);
                mostrarLista(lisLinEs);
                break;
            case 10:
                concatenar(@lisLinEs, struct lisConcat);
                mostrarLista(lisLinEs);
                break;
            case 11:
                printf("\nPrograma Encerrado!");
                break;
        }
    }while(opcao!=11);


    return 0;
}
