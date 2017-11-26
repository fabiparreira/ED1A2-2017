#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#import "listaencadeada.h" // ignorar o warming que aparece

// --- Aten��o - Estas s�o vari�veis globais ---
// --- S�o globais apenas para facilitar os exemplos ---

// Elementos para uma Lista Encadeada Simples
    struct No *inicioA;
    struct No *nA1 = NULL;
    struct No *nA2 = NULL;
    struct No *nA3 = NULL;

// Elementos para uma Lista Duplamente Encadeada
    struct No2 *inicioB;
    struct No2 *nB1 = NULL;
    struct No2 *nB2 = NULL;
    struct No2 *nB3 = NULL;

void montarListaSimples(){
    // Reserva/Aloca mem�ria para cada N�
    nA1 = malloc(sizeof(struct No));
    nA2 = malloc(sizeof(struct No));
    nA3 = malloc(sizeof(struct No));

    // Atribui valor aos dados dos N�s
    nA1->dado = 10;
    nA2->dado = 11;
    nA3->dado = 12;

    // Conecta os n�s
    inicioA = nA1; // aponta HEAD para o primeiro N�
    nA1->prox = nA2;
    nA2->prox = nA3;
    nA3->prox = NULL; //finaliza a lista
}

void listarListaSimples(){
    struct No *noCorrente = inicioA; //inicia a partir de HEAD

    printf("\n\nOs elementos da lista encadeada sao - \n");
    while(noCorrente != NULL){ //enquanto n�o for um FIM (NULL)
        printf("|%d|", noCorrente->dado); //mostra o dado do n� corrente
        noCorrente = noCorrente->prox; //avan�a ponteiro para o pr�ximo elemento
        if (noCorrente != NULL)
            printf("--->");
        else
            printf("---*");
    }
}

void montarListaDupla(){
    // Reserva/Aloca mem�ria para cada N�
    nB1 = malloc(sizeof(struct No2));
    nB2 = malloc(sizeof(struct No2));
    nB3 = malloc(sizeof(struct No2));

    // Atribui valor aos dados dos N�s
    nB1->dado = 20;
    nB2->dado = 21;
    nB3->dado = 22;

    // Conecta os n�s
    inicioB = nB1; // aponta HEAD para o primeiro N�
    nB1->prox = nB2;
    nB1->ant = NULL;

    nB2->prox = nB3;
    nB2->ant = nB1;

    nB3->prox = NULL; //finaliza a lista
    nB3->ant = nB2;
}

void listarListaDupla(){
    struct No2 *noCorrente = inicioB; //inicia a partir de HEAD

    printf("\n\nOs elementos da lista duplamente encadeada sao - \n");
    while(noCorrente->prox != NULL){ //enquanto n�o for um FIM (NULL)
        printf("|%d|--->", noCorrente->dado); //mostra o dado do n� corrente
        noCorrente = noCorrente->prox; //avan�a ponteiro para o pr�ximo elemento
    }

    if (noCorrente != NULL){ //tem um �ltimo elemento no final do avan�o?
        printf("||%d||*->", noCorrente->dado); //mostra o dado do �ltimo n� no final
        noCorrente = noCorrente->ant;
    }

    while(noCorrente != NULL){ //enquanto n�o for um FIM (NULL)
        printf("|%d|", noCorrente->dado); //mostra o dado do n� corrente
        noCorrente = noCorrente->ant; //avan�a ponteiro para o pr�ximo(?) elemento
        if(noCorrente != NULL)
            printf("--->");
        else
            printf("---*");
    }
}
