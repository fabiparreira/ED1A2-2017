#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#import "pilhaestatica.h" // importei pra tentar solucionar bugs

/**
* Verifica se a pilha está vazia e retorna um int;
* 1 para SIM e 0 para NAO.
* @param p - struct Pilha a iniciar.
*/

int vazia(struct Pilha p){
    int i;

    if(p.topo == PILHA_VAZIA){
        return SIM;
    }
    return NAO;
}


/**
* Verifica se a pilha está cheia e retorna um int;
* 1 para SIM e 0 para NAO.
* @param p - struct Pilha a iniciar.
*/

int cheia(struct Pilha p){
    int i;

    if(p.topo == (MAX_ELEM - 1)){
        return SIM;
    }
    return NAO;
}


/**
* Inicia a pilha definindo a quantidade de elementos com 0 e cada elemento
* com caractere nulo (0).
* @param p - struct Pilha a iniciar.
*/

void iniciarPilha(struct Pilha* p){
    int i;
    int n;
    p->n=0; //A quantidade de elementos inicia com 0

    for (i=0;i<MAX_ELEM;i++){
        p->elem[i]=0; // cada elemento é iniciado com valor nulo
    }
}

/**
* Possibilita obter o elemento na posição topo da pilha.
* @param p - struct Pilha a obter o topo.
* @param k - posição do elemento desejada.
* @return char referente ao elemtno da posição k. Caso haja erro, retorna
*         caractere nulo (0).
*/

char obterTopo(struct Pilha p){
    if (p.topo== PILHA_VAZIA){
        printf("\n ERRO! Pilha vazia!");
    }else{
        return p.topo;
}


/**
* Insere um dado na pilha no topo, por pré-definição
* @param p - struct Pilha a realizar a inserção.
*/

void inserir(struct Pilha* p, char e){
    if(p->topo == PILHA_CHEIA){
        printf("\nErro ao inserir - Pilha cheia!\n");
        return PILHA_CHEIA;
    }else{
        p->topo++;
        p->elem[p->topo] = e;
        return SUCESSO;
    }
}

/**
* Remove o elemento do topo da pilha e retorna esse dado.
* @param p - struct Pilha a realizar a remoção.
*/

char remover(struct Pilha* p){
    if(p->topo == PILHA_VAZIA){
        printf("\nErro! PILHA VAZIA");
        return PILHA_VAZIA;
    }else{
        return p->elem[p->topo];
        p->elem[p->topo]=0;
        p->topo--;
    }
}
