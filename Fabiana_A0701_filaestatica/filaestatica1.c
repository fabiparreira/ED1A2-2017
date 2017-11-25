#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#import "filaestatica1.h" // ignorar o warming que aparece

/**
* Verifica se a Fila est� vazia ou n�o.
* @param q - struct Fila a ser verificada.
* @return int - indicando SIM (1) ou NAO (0).
*/

int vazia(struct Fila q){
    if (q.tamanho == 0){
        printf("Sim!\n");
        return SIM;
    }
    printf("Nao!\n");
    return NAO;
}

/**
* Verifica se a Fila est� cheia ou n�o.
* @param q - struct Fila a ser verificada.
* @return int - indicando SIM (1) ou NAO (0).
*/

int cheia(struct Fila q){
    if (q.tamanho == MAX_ELEM){
        printf("Sim!\n");
        return SIM;
    }
    printf("Nao!\n");
    return NAO;
}

/**
* Inicia a Fila para uso, limpando os elementos e apontando o in�cio e
* o final para valores adequados � fila vazia.
* @param q - struct Fila a ser iniciada.
*/

void iniciarFila(struct Fila* q){
    int i;

    for(i=0; i<MAX_ELEM; i++){
        q->elem[i] = ELEM_NULO; // atribui elemento nulo em cada c�lula da fila
    }
    q->tamanho=0; // inicia o tamanho com zero elementos.
}

/**
* Possibilita obter o elemento presente no in�cio da Fila.
* Aten��o: Nesta forma de implementa��o, se a Fila...
* ... estiver vazia, retorna caractere nulo (0).
* @param q - struct Fila da qual se pretende obter o elemento do in�cio.
* @return char - elemento do in�cio da Fila.
*/

char obterInicio(struct Fila q){
    char dado = ELEM_NULO;

    if (!vazia(q)) // ou seja, se a fila n�o est� vazia
        dado = q.elem[0]; // elemento da posi��o zero
    return printf("O elemento do inicio eh %c", dado);
}



/**
* Insere um elemento um elemento na Fila, se esta n�o estiver cheia.
* @param q - struct Fila na qual o elemento ser� inserido.
* @param e - char elemento a ser inserido.
* @return indicador do sucesso ou falha da opera��o.
*/

int inserir(struct Fila* q, char e){
    if(!cheia(*q)){
        // se a fila n�o estiver cheia
        q->elem[q->tamanho] = e; // insere elemento no final da Fila
        q->tamanho++;
    }else
        return FILA_CHEIA;
    return SUCESSO;
}

/**
* Formata uma listagem dos elementos da Fila.
* @param q - struct Fila a ser listada.
*/

void listarElementos(struct Fila q){
    int i; // �ndice pra percorrer e ir listando

    if(vazia(q))
        printf("Impossivel listar! Fila vazia!\n");
    else{
        printf("\n\n --- CONTEUDO DA FILA --- \n\n");
        for(i=0; i<q.tamanho; i++)
            printf("\n[%i] = %c", i, q.elem[i]);
    }
}


/**
* Remove um elemento da Fila (posi��o 0 do vetor), se esta n�o estiver vazia.
* Realiza c�pia dos elementos subsequentes para um posi��o anterior,...
* ... implementando o caminhar da fila.
* @param q - struct Fila da qual o elemento ser� removido.
* @return e - char referente ao elemento removido.
*/

char remover(struct Fila* q){
    int i;
    char e = ELEM_NULO;
    e = obterInicio(q); // mostra qual elemento est� para ser removido do in�cio
    if (e != ELEM_NULO){ // se obteve elemento � porque existia pelo menos um
        for(i=0; i<(q->tamanho-1); i++) // remaneja elementos uma posi��o...
            q->elem[i] = q->elem[i+1]; //... para o �nicio da fila. A fila anda.
        q->elem[q->tamanho-1] = ELEM_NULO; // limpa a c�lula onde residia o �ltimo
        q->tamanho--; //atualiza o tamanho, reduzindo 1.
    }
    return e;
}

/**
char remover(struct Fila* q){
    char e;
    if(q->fim == FILA_VAZIA)
        printf("\nImpossivel remover! Fila vazia!");
    else{
        e = q->elem[q->inicio];
        q->elem[q->inicio] = 0;
        q->inicio++;
        if(q->inicio == (q->fim + 1)){
            iniciarFila(q*);
        }else
            return ("\nO elemento removido eh %c", e)
    }
}
*/
