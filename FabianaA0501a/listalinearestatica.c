/**
* Inicia a lista definindo a quantidade de elementos com 0 e cada elemento
* com caractere nulo (0).
* @param lst - struct Lista a iniciar.
*/

void iniciarLista(struct Lista* lst){
    int i;
    lst->n=0; //A quantidade de elementos inicia com 0

    for (i=0;i<MAX_ELEM;i++){
        lst->elem[i]=0; // cada elemento � iniciado com valor nulo
    }
}

/**
* Possibilita acessar um elemento na posi��o k de uma lista.
* @param lst - struct Lista a realizar o acesso.
* @param k - posi��o do elemento desejada.
* @return char referente ao elemtno da posi��o k. Caso haja erro, retorna
*         caractere nulo (0).
*/

char acessar(struct Lista lst,int k){
    char dado = 0;
    if((k<0 || k>(lst.n-1))){
        printf("\nErro ao acessar - Lista vazia ou �ndice fora dos limites!");
    }else{
        dado=lst.elem[k];
    }
    return dado;
}

/**
* Altera o dado na posi��o k da lista.
* @param lst - struct Lista a realizar o acesso.
* @param k - posi��o do elemento cujo valor ser� alterado.
* @param dado - dado a representar o novo valor na posi��o k.
*/

void alterar(struct Lista* lst, int k, char dado){
    if((k<0 || k>(lst.n-1))){
        printf("\nErro ao alterar - Lista vazia ou �ndice fora dos limites!");
    }else{
        lst->elem[k]=dado;
    }
}

/**
* Insere um dado na lista em uma posi��o espec�fica.
* @param lst - struct Lista a realizar a inser��o.
* @param k - posi��o k da lista em que o dado ser� inserido.
*        A constante FINAL indica que a inser��o ser� no final da lista.
* @param dado - dado a ser inserido na posi��o k da lista.
*/

void inserir(struct Lista* lst, int k, char dado){
    int i;
    if(lst->n >= MAX_ELEM){
        printf("\nErro ao inserir - Lista cheia!");
    }else{
        if(k==POS_FINAL || lst->n==0){
            lst->elem[lst->n]=dado;
            lst->n++;
        }else{
            if((k<0 || k>(lst->n-1))){
                printf("\nErro ao inserir na posi��o k - �ndice fora dos limites!");
            }else{
                for(i=lst->n; i>k; i--){
                    lst->elem[i] = lst->elem[i-1];
                }
                lst->elem[k]=dado;
                lst->n++;
            }
        }
    }
}

/**
* Remove o elemento da posi��o k da lista.
* @param lst - struct Lista a realizar a exclus�o.
* @param k - posi��o do elemento a ser removido.
*        A constante FINAL indica que o elemento ser� o �ltimo da lista.
*/

void remover(struct Lista* lst, int k){
    int i;
    if(k==POS_FINAL){
        lst->elem[(lst->n)-1]=0;
        lst->n--;
    }else{
        if((k<0 || k>(lst->n-1))){
            printf("\nErro ao remover - Lista vazia ou �ndice fora dos limites!");
        }else{
            for(i=k; i<lst->n;i++){
                lst->elem[i]=lst->elem[i+1];
            }
            lst->n--;
            lst->elem[lst->n]=0;
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
    int i, limite;
    if((lst1->n + lst2->n) <= MAX_ELEM)
        limite = lst2->n;
    else
        limite = MAX_ELEM - lst1->n;
    for (i=1; i<=limite; i++){
        lst1->elem[lst1->n] = lst2->elem[i-1];
        lst1->n++;
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
        aux = lst->elem[i];
        lst->elem[i] = lst->elem[lst->n - (i+1)];
        lst->elem[lst->n - (i+1)] = aux;
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

struct Lista subLista(struct Lista lst, int k, int n){
    struct Lista result;
    int i;
    int limite;
    iniciarLista(&result);
    if ((k<0 || k>(MAX_ELEM-1))){
        printf("\nErro ao definir sublista - Origem vazia ou �ndice al�m dos limites!");
    }else{
        if ((k+n)<=MAX_ELEM)
            limite=n;
        else
            limite=MAX_ELEM - k;
        for (i=1; i<=limite; i++){
            inserir(&result, POS_FINAL, lst.elem[k]);
            k++;
        }
    }
    return result;
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
}

/**
* Formata a exibi��o de uma lista.
* @param lst - Lista a ser exibida.
*/

void mostrarLista(struct Lista lst){
    int k;
    printf("\n ---- Lista de Caracteres ----\n");
    for(k=0; k<(lst.n); k++){
        printf("\nL[%d] = %c", k, lst.elem[k]);
    }
}
