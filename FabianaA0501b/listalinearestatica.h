#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

//constantes
#define MAX_ELEM 10 // n° máximo de elementos na lista
#define POS_FINAL -1 // número absurdo no contexto
                     // indica qualquer posição final lógica na lista

// ESTRUTURA DE DADOS
struct Lista{
    int n; // variável que determina o tamanho do vetor
    char elem[MAX_ELEM]; // vetor de caracteres denominado "elem",
                        // cujo índice é expresso pela constante MAX_ELEM (= 10)
};

// FUNÇÕES REFERENTES E OPERAÇÕES EXEMPLO

// A0501a
void iniciarLista(struct Lista*); // ponteiro porque mexe na struct
char acessar(struct Lista, int); // sem ponteiro porque só visualiza
void alterar(struct Lista*, int, char); // ponteiro porque mexe na struct
void inserir(struct Lista*, int, char); // poteiro porque mexe na struct
void remover(struct Lista*, int); // ponteiro porque mexe na struct
void concatenar(struct Lista*, struct Lista*); // ponteiro porque mexe em duas structs
void inverter(struct Lista*); // ponteiro porque mexe na struct
struct Lista subLista(struct Lista, int, int); // sem ponteiro porque só retira parte, não altera nada
void inserirOrdenado(struct Lista*, char); // ponteiro porque mexe na struct
void mostrarLista(struct Lista); // sem ponteiro porque só mostra

// A0501b
int localizarNo(struct Lista* lst, char, int[]);//NAO FUNCIONA
struct Lista interLista(struct Lista*, struct Lista*); // ponteiro porque manipula duas structs em uma terceira
void ordenar(struct Lista*);//ponteiro porque manipula a lista
