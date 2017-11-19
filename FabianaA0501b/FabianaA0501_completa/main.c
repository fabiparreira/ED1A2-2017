#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "listalinearestatica.h"

int main(int argc, char** argv){
    struct Lista lisLinEs; // lisLinEs = lista linear estática
    struct Lista lisConcat; // lisLinEs = lista linear estática
    struct Lista sl;
    struct Lista inter1; // inter1 = lista linear estática
    struct Lista inter2; // inter2 = lista linear estática
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
        printf("11- Localizar a posicao de um dado da listaNAO FUNCIONA\n");
        printf("12- Colocar uma lista em ordem crescenteORDENA ERRADO\n");
        printf("13- Intercalar duas listasACUSA LISTA CHEIA\n");
        printf("14- Verificar se uma lista eh palindromo\n");
        printf("15- Remover elementos repetidos de uma lista\n");
        printf("16- Finalizar programa\n\n");
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
                //inicializando o vetor onde[];
                /*int n,v = 0;
                for(v=0; v < MAX_ELEM; v++){
                    n[v]=0;
                }
                localizarNo(&lisLinEs,'L',onde[]);
                break;*/
            case 12:
                ordenar(&lisLinEs);
                mostrarLista(lisLinEs);
                break;
            case 13:
                inserir(&inter1, POS_FINAL, 'A');
                inserir(&inter2, POS_FINAL, 'C');
                inserir(&inter1, POS_FINAL, 'E');
                inserir(&inter2, POS_FINAL, 'B');
                inserir(&inter2, POS_FINAL, 'D');
                inserir(&inter2, POS_FINAL, 'F');
                interLista(&inter1, &inter2);
                break;
            case 14:
                testarPalind(lisLinEs);
                break;
            case 15:
                tirarIguais(&lisLinEs);
                mostrarLista(lisLinEs);
                break;
            case 16:
                printf("\nPrograma Encerrado!");
                break;
        }
    }while(opcao!=16);


    return 0;
}
