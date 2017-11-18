#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#import "listalinearestatica.h" // importei pra tentar solucionar bugs

/**
* Inicia a lista definindo a quantidade de elementos com 0 e cada elemento
* com caractere nulo (0). (Zero representa caractere ou string nula).
* @param lst - struct Lista a iniciar.
*/

void iniciarLista(struct Lista* lst){
    int i; // contador/índice pra passear no vetor
    lst->n = 0; //A quantidade de elementos inicia com 0

    for (i=0; i<MAX_ELEM; i++){
        lst->elem[i] = 0; // cada elemento é iniciado com valor nulo
    }
}

/**
* Possibilita acessar um elemento na posição k de uma lista.
* @param lst - struct Lista a realizar o acesso.
* @param k - posição do elemento desejada.
* @return char referente ao elemento da posição k. Caso haja erro, retorna
*         caractere nulo (0).
*/

char acessar(struct Lista lst,int k){ //é uma função que retorna caractere
    char dado = 0; // variável pra armazenar o valor que foi encontrado na posição k
    if((k<0 || k>(lst.n-1))){ // testando se está dentro dos limites do vetor
        printf("\nErro ao acessar - Lista vazia ou índice fora dos limites!\n");
    }else{
        dado=lst.elem[k]; // dado recebe o valor que está na posição k
    }   // poderia ser direto: return lst.elem[k] (eu acho)
    return dado; // a função retorna a variável que armazenou o valor achado na posição k
}

/**
* Altera o dado na posição k da lista.
* @param lst - struct Lista a realizar o acesso.
* @param k - posição do elemento cujo valor será alterado.
* @param dado - dado a representar o novo valor na posição k.
*/

void alterar(struct Lista* lst, int k, char dado){
    if((k<0 || k>(lst->n-1))){ // testa os limites do vetor
        // lst->n-1 (flechinha) indicando que a passagem foi por referência
        printf("\nErro ao alterar - Lista vazia ou indice fora dos limites!\n");
    }else{
        lst->elem[k] = dado; //o elemento na posição k recebe o dado
    }
}

/**
* Insere um dado na lista em uma posição específica.
* @param lst - struct Lista a realizar a inserção.
* @param k - posição k da lista em que o dado será inserido.
*        A constante POS_FINAL indica que a inserção será no final lógico da lista.
* @param dado - dado a ser inserido na posição k da lista.
*/

void inserir(struct Lista* lst, int k, char dado){
    int i;
    if(lst->n >= MAX_ELEM){ // se o tamanho n for maior ou igual ao máximo
        printf("\nErro ao inserir - Lista cheia!\n");
    }else{
        if(k==POS_FINAL || lst->n==0 || k==lst->n){
            // se a posição é a final ou a quantidade é zero ou a posição é o tamanho n
            lst->elem[lst->n] = dado; // insere o dado na posição final
            lst->n++; // incrementa a quantidade n
        }else{
            if((k<0 || k>(lst->n-1))){ // testa os limites do vetor
                printf("\nErro ao inserir na posicao %d\n",k);
                printf("Indice fora dos limites!\n");
            }else{
                for(i=lst->n; i>k; i--){
                    lst->elem[i] = lst->elem[i-1]; // abre espaço jogando os valores para a frente
                }
                lst->elem[k]=dado; // o espaço aberto recebe o dado novo
                lst->n++; // atualiza o tamanho da lista
                printf("\n");
            }
        }
    }
}

/**
* Remove o elemento da posição k da lista.
* @param lst - struct Lista a realizar a exclusão.
* @param k - posição do elemento a ser removido.
*        A constante POS_FINAL indica que o elemento será o último da lista.
*/

void remover(struct Lista* lst, int k){
    int i;
    if(k==POS_FINAL){ // se a posição é a final
        lst->elem[(lst->n)-1]=0; // o valor da posição ganha valor zero, fica nulo.
        lst->n--; // decrementa a quantidade n
    }else{
        if(k<0 || k>(lst->n-1)){ // testa se está fora dos limites
            printf("\nErro ao remover - Lista vazia ou indice fora dos limites!\n");
        }else{ //
            for(i=k; i<lst->n; i++){ // vai trazendo os elementos de traz pra frente
                lst->elem[i]=lst->elem[i+1]; // pra irem ocupando a casa anterior
            }
            lst->n--; // atualiza a quantidade n
            lst->elem[lst->n]=0; // atribui valor nulo para a última casa
        }
    }
}

/**
* Concatena (une) duas listas de forma que a segunda lista é copiada para as
* porções finais da primeira até o limite suportado por esta.
* @param lst1 - primeira lista - receberá elementos da outra.
* @param lst2 - segunda lista - proverá elementos a serem juntados à primeira.
*/

void concatenar(struct Lista* lst1, struct Lista* lst2){
    // na verdade a segunda struct nem precisaria de ponteiro
    int i, limite;
    if((lst1->n + lst2->n) <= MAX_ELEM)
    //se o tamanho das duas listas for menor ou igual que o máximo de elementos
        limite = lst2->n;
        //o limite será o tanto de elementos que a lista dois tem
    else
        limite = MAX_ELEM - lst1->n;
        //senão o limite será o máximo de elementos - o tanto de elementos da lista um
    for (i=1; i<=limite; i++){//i vai de 1 até ser menor ou igual que o limite
        lst1->elem[lst1->n] = lst2->elem[i-1];
        //o elemento da lista 1 cujo índice é o tamanho da lista 1
        //recebe o elemento da lista 2 cujo índice é i-1 (lembrando que i começa com zero)
        lst1->n++; //como a lista um recebeu um elemento, incrementa-se o tamanho dela
    }
}

/**
* Inverte a ordem dos elementos de uma lista.
* @param lst - Lista cujos elementos serão invertidos em sua ordem.
*/

void inverter(struct Lista* lst){
    int i;
    char aux;
    for (i=0; i<(lst->n-1)/2; i++){
    //usou-se como estratégia a divisão por dois
    //para que dois números sejam invertidos por vez
    //assim, leva-se a metade do tempo e de vezes de laços
        aux = lst->elem[i];//auxilia recebe o elemento cujo índice é i
        lst->elem[i] = lst->elem[lst->n - (i+1)];
        //o elemento cujo índice é i recebe o elemento
        //cujo índice é o tamanho da lista - i+1
        //é uma estratégia de fazer o índice ir de trás pra frente
        lst->elem[lst->n - (i+1)] = aux;
        //por fim, o elemento que foi mexido por último
        //recebe o que estava guardado no auxiliar
    }
}

/**
* Cria uma sublista a partir de uma lista. A sublista conterá n elementos
* a partir da posição de k.
* @param lst - Lista de origem para criar a sublista.
* @param k - posição a partir da qual os elementos serão copiados.
* @param n - quantidade de elementos a copiar para a sublista.
* @return struct Lista referente à sublista criada.
*/
//não é void porque tem retorno; no caso, retorna uma struct que é a sublista
struct Lista subLista(struct Lista lst, int k, int n){//sem ponteiro porque não se altera nada da lista
    struct Lista result;// lista que receberá os elementos e formará uma sublista
    int i;
    int limite;//serve pra controlar quantos elementos dá pra tirar pra sublista
    iniciarLista(&result);//inicia-se na memória a lista que será a sublista
    if ((k<0 || k>(MAX_ELEM-1))){//verificando os limites da lista
        printf("\nErro ao definir sublista - Origem vazia ou indice alem dos limites!\n");
    }else{
        if ((k+n)<=MAX_ELEM)
            limite=n;
        else
            limite=MAX_ELEM - k;
        //calculado o limite, inicia-se o laço
        for (i=1; i<=limite; i++){
            //lembrando que POS_FINAL indica qualquer posição final lógica na lista
            inserir(&result, POS_FINAL, lst.elem[k]);
            //leia-se:&result=onde; POS_FINAL=em qual posição; lst.elem[k]=qual dado
            k++;
        }
    }
    return result;//retorna a sublista que foi composta por elementos da lista
}

/**
* Insere um elemento ou nó, mantendo ordem alfabética na lista.
* @param lst - Lista em que o nó será inserido.
* @param e - elemento.
*/

void inserirOrdenado(struct Lista* lst, char e){
    int k=0;
    while((e >= lst->elem[k]) && (k < lst->n)){
        k++;
    }
    inserir(lst,k,e);
    printf("\n");
}

/**
* Formata a exibição de uma lista.
* @param lst - Lista a ser exibida.
*/

void mostrarLista(struct Lista lst){
    int k;
    for(k=0; k<(lst.n); k++){
        printf("\nL[%d] = %c", k, lst.elem[k]);
    }
}

/**
* Intercala duas listas, resultando em uma terceira lista.
* @param lst - Lista a ser exibida // ?
*/

void interLista(struct Lista* inter1, struct Lista* inter2){
    struct Lista inter3;
    int i, limite;
    for (i=1; i<=limite; i++){
        inter1->elem[inter1->n] = inter2->elem[i-1];
        inter1->n++;
    }
}
