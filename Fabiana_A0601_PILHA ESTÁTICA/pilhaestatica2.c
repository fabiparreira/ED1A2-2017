#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#import "pilhaestatica2.h" // importei pra tentar solucionar bugs

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
    p->n=0; //A quantidade de elementos inicia com 0
    p->topo = PILHA_VAZIA;
    for (i=0;i<MAX_ELEM;i++){
        p->elem[i]= 0; // cada elemento é iniciado com valor nulo
    }
}

/**
* Possibilita obter o elemento na posição topo da pilha.
* @param p - struct Pilha a obter o topo.
* @param k - posição do elemento desejada.
* @return char referente ao elemtno da posição k. Caso haja erro, retorna
*         caractere nulo (0).
*/

char obterTopo(struct Pilha p){ //passagem por valor, sem ponteiro
    if (vazia(p)){ // se a pilha estiver vazia
        printf("\nNao ha topo! A pilha estah vazia!\n");
        return PILHA_VAZIA;
    }else // se a pilha não estiver vazia
        return printf("\nO topo eh %c.\n",p.elem[p.topo]);
}

/**
* Insere um dado na pilha no topo, por pré-definição
* @param p - struct Pilha onde será realizada a inserção.
* @param dado - char a ser inserido/empilhado.
* @param deuCerto - int que simula um boolean.
* Pop significa empilhar, inserir elemento.
*/

void pop(struct Pilha* p, char dado, int deuCerto){
    int n = MAX_ELEM-1; // variável pra determinar o tamanho da pilha

    if (p->topo == n){ //se a pilha estiver cheia
        deuCerto == 0; // significa que não deu certo
        printf("\nErro ao inserir! Pilha cheia!\n");
    }else{
        p->topo++;
        p->elem[p->topo] = dado;
        deuCerto == 1; // significa que deu certo
    }
}

/**
* Remove o elemento do topo da pilha e retorna esse dado.
* @param p - struct Pilha onde será realizada a inserção.
* @param dado - char a ser inserido/empilhado.
* Push significa desempilhar, remover um elemento.
*/

char push(struct Pilha* p, char dado){ //push = remover
    int n = MAX_ELEM-1; // variável pra determinar o tamanho da pilha

    if(p->topo == PILHA_VAZIA){ //se a pilha estiver vazia
        printf("\nErro ao inserir! Pilha vazia!\n");
        return PILHA_VAZIA;
    }else{
        dado = p->elem[p->topo];
        p->elem[p->topo] = 0;
        p->topo--;
        return printf("\nElemento %c removido do topo com sucesso!\n", dado);;
    }
}

/**
* Mostra todos os dados da pilha.
* @param p - struct Pilha a realizar a remoção.
*/

void mostrarPilha(struct Pilha p){
    int i; // índice pra percorrer a pilha
    for(i=MAX_ELEM; i>=0; i--){
        printf("Posicao[%d] = %c\n", i, p.elem[i]);
    }
}

/**
* Verifica se a pilha é um palíndromo.
* @param p - struct Pilha a realizar a remoção.
*/

void palindromo(struct Pilha p){
    char pilOriginal[MAX_ELEM];
    char pilInvertida[MAX_ELEM];
	int i, tamanho;

	printf("\nEscreva a palavra ou frase que quer verificar:\n");
	scanf("%s", &pilOriginal); // recebe a frase digitada
	tamanho = strlen(pilOriginal); // calcula o tamanho da pilha

	// insere a frase digitada na pilha original
	for(i=0; i<tamanho; i++){
        pilOriginal->topo++;
		pilOriginal[topo] = pilOriginal.elem[i];
	}

	// inverte a frase digitada e a coloca na pilha invertida
    for(i=0; i<tamanho; i++){
        pop(&pilInvertida[i]);
    }
    pilInvertida[tamanho] = '\0'; // finaliza string invertida

    // mostra a frase invertida
    printf("\nAntes da inversão: %s\n", pilOriginal);
    printf("\nDepois da inversão: %s\n", pilInvertida);

    // confere se as duas são iguais
    if(!strcmp(pilOriginal, pilInvertida))
		printf("\nNAO EH PALINDROMO :/ \n\n");
	else
		printf("\nEH PALINDROMO :) \n\n");
}



