#define MAX_ELEM 10 // n� m�ximo de elementos na lista
#define POS_FINAL -1 // n�mero absurdo no contexto
                     // indica qualquer posi��o final l�gica na lista

// ESTRUTURA DE DADOS
struct Lista{
    int n;
    char elem[MAX_ELEM];
};

// FUN��ES REFERENTES E OPERA��ES EXEMPLO
void iniciarLista(struct Lista*);
char acessar(struct Lista, int);
void alterar(struct Lista*, int, char);
void inserir(struct Lista*, int, char);
void remover(struct Lista*, int);
void concatenar(struct Lista*, struct Lista*);
void inverter(struct Lista*);
struct Lista subLista(struct Lista, int, int);
void inserirOrdenado(struct Lista*, char);
void mostrarLista(struct Lista);
