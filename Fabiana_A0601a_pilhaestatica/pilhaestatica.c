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
    //p->n=0; //A quantidade de elementos inicia com 0

    for (i=0;i<MAX_ELEM;i++){
        p->elem[i]= 'x'; // cada elemento é iniciado com valor nulo
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
    char ct=0; // string nula
    if (vazia(p) == NAO)
        ct = p.elem[p.topo];
    return ct;
}

/**
* Insere um dado na pilha no topo, por pré-definição
* @param p - struct Pilha a realizar a inserção.
*/

void inserir(struct Pilha* p, char dado){
    if (p->topo == MAX_ELEM-1)
    //if(cheia(p) == SIM)
        printf("\nErro ao inserir! Pilha cheia!\n");
    else{
        p->topo++;
        p->elem[p->topo] = dado;
    }
}

/**
* Remove o elemento do topo da pilha e retorna esse dado.
* @param p - struct Pilha a realizar a remoção.
*/

char remover(struct Pilha* p){
    if(p->topo == PILHA_VAZIA){
        printf("\nErro ao remover! Pilha Vazia");
        return PILHA_VAZIA;
    }else{
        return p->elem[p->topo];
        p->elem[p->topo]=0;
        p->topo--;
    }
}

/**
* Mostra todos os dados da pilha.
* @param p - struct Pilha a realizar a remoção.
*/

void mostrarPilha(struct Pilha p){
    int i;
    for(i=0; i<MAX_ELEM; i++){
        printf("\nPosicao[%d] = %c\n", i, p.elem[i]);
    }
}
