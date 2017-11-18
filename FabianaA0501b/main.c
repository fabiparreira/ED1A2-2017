#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "listalinearestatica.h"

int main(int argc, char** argv){
    struct Lista lisLinEs; // lisLinEs = lista linear estática
    struct Lista lisConcat; // lisLinEs = lista linear estática
    struct Lista sl;
    int opcao;
    char c;

    do{
        printf("\n\n -- TESTE DE LISTAS LINEARES ESTATICAS -- \n\n");
        printf("Qual operacao deseja visualizar?\n\n");
        printf("1- Iniciar uma lista\n");
        printf("2- Inserir um valor na lista\n");
        printf("3- Inserir um valor ordenado na lista\n");
        printf("4- Acessar um valor da lista\n");
        printf("5- Alterar um valor da lista\n");
        printf("6- Remover um valor da lista\n");
        printf("7- Inverter a lista\n");
        printf("8- Mostrar a lista\n");
        printf("9- Extrair uma sublista da lista\n");
        printf("10- Concatenar a lista com uma nova lista\n");
        printf("11- Intercalar duas listas\n");
        printf("12- Finalizar programa\n\n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                iniciarLista(&lisLinEs);
                mostrarLista(lisLinEs);
                break;
            case 2:
                inserir(&lisLinEs, POS_FINAL, 'L');
                inserir(&lisLinEs, POS_FINAL, 'I');
                inserir(&lisLinEs, POS_FINAL, 'T');
                inserir(&lisLinEs, POS_FINAL, 'A');
                mostrarLista(lisLinEs);
                printf("\n\nInserindo uma letra no meio...\n");
                inserir(&lisLinEs, 2, 'S');
                mostrarLista(lisLinEs);
                // tentar inserir valor fora do intervalo:
                printf("\n\nTentando inserir fora dos limites...\n");
                inserir(&lisLinEs, 1000, 'F');
                break;
            case 3:
                inserirOrdenado(&lisLinEs, 'E');
                mostrarLista(lisLinEs);
                break;
            case 4:
                c = acessar(lisLinEs, 1);
                printf("\nMain: %c encontrado na posicao %d", c, 1);
                mostrarLista(lisLinEs);
                break;
            case 5:
                alterar(&lisLinEs, 2, 'P'); // na struct, posição 2, altere o valor para 'P'
                mostrarLista(lisLinEs);
                break;
            case 6:
                printf("\nRemovendo um elemento...\n");
                remover(&lisLinEs, 4);
                mostrarLista(lisLinEs);
                // tentar remover fora dos limites
                printf("\nTentando remover fora dos limites...\n");
                remover(&lisLinEs, 100);
                printf("Nao existe a posicao escolhida!\n");
                mostrarLista(lisLinEs);
                break;
            case 7:
                printf("\nAntes da inversao: ");
                mostrarLista(lisLinEs);
                inverter(&lisLinEs);
                printf("\nDepois da inversao: ");
                mostrarLista(lisLinEs);
                break;
            case 8:
                mostrarLista(lisLinEs);
                break;
            case 9:
                sl = subLista(lisLinEs, 0, 3);
                mostrarLista(sl);
                break;
            case 10:
                iniciarLista(&lisConcat);
                inserir(&lisConcat,POS_FINAL,'F');
                inserir(&lisConcat,POS_FINAL,'A');
                inserir(&lisConcat,POS_FINAL,'B');
                inserir(&lisConcat,POS_FINAL,'I');
                concatenar(&lisLinEs, &lisConcat);
                mostrarLista(lisLinEs);
                break;
            case 11:
                interLista(&lisLinEs, &lisLinEs);
                break;
            case 12:
                printf("\nPrograma Encerrado!");
                break;
        }
    }while(opcao!=12);


    return 0;
}
