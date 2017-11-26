#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#import "filaestatica2.h" // ignorar o warming que aparece

/**
* Verifica se a Fila est� vazia ou n�o.
* @param q - struct Fila a ser verificada.
* @return int - indicando SIM (1) ou NAO (0).
*/

int vazia(struct Fila q){
    if (q.inicio == FILA_VAZIA){
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
    if((q.inicio == 0 && q.fim == MAX_ELEM-1) || (q.inicio == q.fim+1)){
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
        q->elem[i] = 0; // atribui elemento nulo em cada c�lula da fila
    }
    q->fim=FILA_VAZIA; // Na abordagem usada para implementar circularidade...
    q->inicio=FILA_VAZIA; //... inicio e fim devem iniciar com -1, e FILA VAZIA = -1.
}

/**
* Possibilita obter o elemento presente no in�cio da Fila.
* Aten��o: Nesta forma de implementa��o, se a Fila...
* ... estiver vazia, retorna caractere nulo (0).
* @param q - struct Fila da qual se pretende obter o elemento do in�cio.
* @return char - elemento do in�cio da Fila.
*/

char obterInicio(struct Fila q){
    char dado = 0;

    if (!vazia(q)) // ou seja, se a fila n�o est� vazia
        dado = q.elem[q.inicio]; // dado recebe o elemento do in�cio
    return printf("O elemento do inicio eh %c", dado);
}



/**
* Insere um elemento na Fila, se esta n�o estiver cheia.
* O c�lculo do �ndice de inser��o deve ser circular.
* @param q - struct Fila na qual o elemento ser� inserido.
* @param e - char elemento a ser inserido.
* @return indicador do sucesso ou falha da opera��o.
*/

int inserir(struct Fila* q, char e){
    if(!cheia(*q)){ // se a fila n�o estiver cheia
        q->fim = (q->fim+1)%MAX_ELEM; // calcula �ndice da inser��o circularmente
        q->elem[q->fim] = e; // insere elemento no fim
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
    int ordem;

    if(vazia(q)) // se a fila estiver vazia
        printf("Impossivel listar! Fila vazia!\n");
    else{
        printf("\n\n --- CONTEUDO DA FILA --- \n\n");
        ordem = 1; // QUE QUE � ISSO??
        for(i=q.inicio; i!=q.fim; i=((i+1)%MAX_ELEM)){ // for com circularidade
            printf("\n %i� = %c", ordem, q.elem[i]);
            ordem++;
        }
    }
}


/**
* Remove um elemento da Fila se esta n�o estiver vazia.
* @param q - struct Fila da qual o elemento ser� removido.
* @return e - char referente ao elemento removido.
*/

/*char remover(struct Fila* q){
    char e = ELEM_NULO;
    if(!vazia(q)){
        e = obterInicio(q); // recupera elemento do in�cio da fila
        q->elem[q->inicio] = ELEM_NULO; // anula o valor do elemento do in�cio atual
        if(q->inicio == q->fim){
            q->inicio = FILA_VAZIA; //O valor deve ser -1 para...
            q->fim = FILA_VAZIA; //...funcionar o c�lculo dos �ndices circularmente.
        } else {
            q->inicio = (q->inicio+1)%MAX_ELEM; // atualiza in�cio, circularmente.
        }
    }
    return e;
}*/

/**
* Possibilita conhecer a quantidade de elementos na fila.
* @param q - struct Fila da qual se pretende conhecer o tamanho.
* @return int - valor referente � quantidade de elementos presentes.
*/

int tamanho(struct Fila q){
    if(q.inicio <= q.fim)
        return q.fim-q.inicio+1;
    return ((MAX_ELEM-q.inicio)+(q.fim+1));
}
