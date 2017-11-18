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
    int i; // contador/�ndice pra passear no vetor
    lst->n = 0; //A quantidade de elementos inicia com 0

    for (i=0; i<MAX_ELEM; i++){
        lst->elem[i] = 0; // cada elemento � iniciado com valor nulo
    }
}

/**
* Possibilita acessar um elemento na posi��o k de uma lista.
* @param lst - struct Lista a realizar o acesso.
* @param k - posi��o do elemento desejada.
* @return char referente ao elemento da posi��o k. Caso haja erro, retorna
*         caractere nulo (0).
*/

char acessar(struct Lista lst,int k){ //� uma fun��o que retorna caractere
    char dado = 0; // vari�vel pra armazenar o valor que foi encontrado na posi��o k
    if((k<0 || k>(lst.n-1))){ // testando se est� dentro dos limites do vetor
        printf("\nErro ao acessar - Lista vazia ou �ndice fora dos limites!\n");
    }else{
        dado=lst.elem[k]; // dado recebe o valor que est� na posi��o k
    }   // poderia ser direto: return lst.elem[k] (eu acho)
    return dado; // a fun��o retorna a vari�vel que armazenou o valor achado na posi��o k
}

/**
* Altera o dado na posi��o k da lista.
* @param lst - struct Lista a realizar o acesso.
* @param k - posi��o do elemento cujo valor ser� alterado.
* @param dado - dado a representar o novo valor na posi��o k.
*/

void alterar(struct Lista* lst, int k, char dado){
    if((k<0 || k>(lst->n-1))){ // testa os limites do vetor
        // lst->n-1 (flechinha) indicando que a passagem foi por refer�ncia
        printf("\nErro ao alterar - Lista vazia ou indice fora dos limites!\n");
    }else{
        lst->elem[k] = dado; //o elemento na posi��o k recebe o dado
    }
}

/**
* Insere um dado na lista em uma posi��o espec�fica.
* @param lst - struct Lista a realizar a inser��o.
* @param k - posi��o k da lista em que o dado ser� inserido.
*        A constante POS_FINAL indica que a inser��o ser� no final l�gico da lista.
* @param dado - dado a ser inserido na posi��o k da lista.
*/

void inserir(struct Lista* lst, int k, char dado){
    int i;
    if(lst->n >= MAX_ELEM){ // se o tamanho n for maior ou igual ao m�ximo
        printf("\nErro ao inserir - Lista cheia!\n");
    }else{
        if(k==POS_FINAL || lst->n==0 || k==lst->n){
            // se a posi��o � a final ou a quantidade � zero ou a posi��o � o tamanho n
            lst->elem[lst->n] = dado; // insere o dado na posi��o final
            lst->n++; // incrementa a quantidade n
        }else{
            if((k<0 || k>(lst->n-1))){ // testa os limites do vetor
                printf("\nErro ao inserir na posicao %d\n",k);
                printf("Indice fora dos limites!\n");
            }else{
                for(i=lst->n; i>k; i--){
                    lst->elem[i] = lst->elem[i-1]; // abre espa�o jogando os valores para a frente
                }
                lst->elem[k]=dado; // o espa�o aberto recebe o dado novo
                lst->n++; // atualiza o tamanho da lista
                printf("\n");
            }
        }
    }
}

/**
* Remove o elemento da posi��o k da lista.
* @param lst - struct Lista a realizar a exclus�o.
* @param k - posi��o do elemento a ser removido.
*        A constante POS_FINAL indica que o elemento ser� o �ltimo da lista.
*/

void remover(struct Lista* lst, int k){
    int i;
    if(k==POS_FINAL){ // se a posi��o � a final
        lst->elem[(lst->n)-1]=0; // o valor da posi��o ganha valor zero, fica nulo.
        lst->n--; // decrementa a quantidade n
    }else{
        if(k<0 || k>(lst->n-1)){ // testa se est� fora dos limites
            printf("\nErro ao remover - Lista vazia ou indice fora dos limites!\n");
        }else{ //
            for(i=k; i<lst->n; i++){ // vai trazendo os elementos de traz pra frente
                lst->elem[i]=lst->elem[i+1]; // pra irem ocupando a casa anterior
            }
            lst->n--; // atualiza a quantidade n
            lst->elem[lst->n]=0; // atribui valor nulo para a �ltima casa
        }
    }
}

/**
* Concatena (une) duas listas de forma que a segunda lista � copiada para as
* por��es finais da primeira at� o limite suportado por esta.
* @param lst1 - primeira lista - receber� elementos da outra.
* @param lst2 - segunda lista - prover� elementos a serem juntados � primeira.
*/

void concatenar(struct Lista* lst1, struct Lista* lst2){
    // na verdade a segunda struct nem precisaria de ponteiro
    int i, limite;
    if((lst1->n + lst2->n) <= MAX_ELEM)
    //se o tamanho das duas listas for menor ou igual que o m�ximo de elementos
        limite = lst2->n;
        //o limite ser� o tanto de elementos que a lista dois tem
    else
        limite = MAX_ELEM - lst1->n;
        //sen�o o limite ser� o m�ximo de elementos - o tanto de elementos da lista um
    for (i=1; i<=limite; i++){//i vai de 1 at� ser menor ou igual que o limite
        lst1->elem[lst1->n] = lst2->elem[i-1];
        //o elemento da lista 1 cujo �ndice � o tamanho da lista 1
        //recebe o elemento da lista 2 cujo �ndice � i-1 (lembrando que i come�a com zero)
        lst1->n++; //como a lista um recebeu um elemento, incrementa-se o tamanho dela
    }
}

/**
* Inverte a ordem dos elementos de uma lista.
* @param lst - Lista cujos elementos ser�o invertidos em sua ordem.
*/

void inverter(struct Lista* lst){
    int i;
    char aux;
    for (i=0; i<(lst->n-1)/2; i++){
    //usou-se como estrat�gia a divis�o por dois
    //para que dois n�meros sejam invertidos por vez
    //assim, leva-se a metade do tempo e de vezes de la�os
        aux = lst->elem[i];//auxilia recebe o elemento cujo �ndice � i
        lst->elem[i] = lst->elem[lst->n - (i+1)];
        //o elemento cujo �ndice � i recebe o elemento
        //cujo �ndice � o tamanho da lista - i+1
        //� uma estrat�gia de fazer o �ndice ir de tr�s pra frente
        lst->elem[lst->n - (i+1)] = aux;
        //por fim, o elemento que foi mexido por �ltimo
        //recebe o que estava guardado no auxiliar
    }
}

/**
* Cria uma sublista a partir de uma lista. A sublista conter� n elementos
* a partir da posi��o de k.
* @param lst - Lista de origem para criar a sublista.
* @param k - posi��o a partir da qual os elementos ser�o copiados.
* @param n - quantidade de elementos a copiar para a sublista.
* @return struct Lista referente � sublista criada.
*/
//n�o � void porque tem retorno; no caso, retorna uma struct que � a sublista
struct Lista subLista(struct Lista lst, int k, int n){//sem ponteiro porque n�o se altera nada da lista
    struct Lista result;// lista que receber� os elementos e formar� uma sublista
    int i;
    int limite;//serve pra controlar quantos elementos d� pra tirar pra sublista
    iniciarLista(&result);//inicia-se na mem�ria a lista que ser� a sublista
    if ((k<0 || k>(MAX_ELEM-1))){//verificando os limites da lista
        printf("\nErro ao definir sublista - Origem vazia ou indice alem dos limites!\n");
    }else{
        if ((k+n)<=MAX_ELEM)
            limite=n;
        else
            limite=MAX_ELEM - k;
        //calculado o limite, inicia-se o la�o
        for (i=1; i<=limite; i++){
            //lembrando que POS_FINAL indica qualquer posi��o final l�gica na lista
            inserir(&result, POS_FINAL, lst.elem[k]);
            //leia-se:&result=onde; POS_FINAL=em qual posi��o; lst.elem[k]=qual dado
            k++;
        }
    }
    return result;//retorna a sublista que foi composta por elementos da lista
}

/**
* Insere um elemento ou n�, mantendo ordem alfab�tica na lista.
* @param lst - Lista em que o n� ser� inserido.
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
* Formata a exibi��o de uma lista.
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
