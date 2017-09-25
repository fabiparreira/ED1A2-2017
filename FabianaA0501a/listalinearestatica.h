#define MAX_ELEM 10 // n° máximo de elementos na lista
#define POS_FINAL -1 // número absurdo no contexto
                     // indica qualquer posição final lógica na lista

// ESTRUTURA DE DADOS
struct Lista{
    int n;
    char elem[MAX_ELEM];
};

// FUNÇÕES REFERENTES E OPERAÇÕES EXEMPLO
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
