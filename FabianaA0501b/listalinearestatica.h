#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

//constantes
#define MAX_ELEM 10 // n� m�ximo de elementos na lista
#define POS_FINAL -1 // n�mero absurdo no contexto
                     // indica qualquer posi��o final l�gica na lista

// ESTRUTURA DE DADOS
struct Lista{
    int n; // vari�vel que determina o tamanho do vetor
    char elem[MAX_ELEM]; // vetor de caracteres denominado "elem",
                        // cujo �ndice � expresso pela constante MAX_ELEM (= 10)
};

// FUN��ES REFERENTES E OPERA��ES EXEMPLO

// A0501a
void iniciarLista(struct Lista*); // ponteiro porque mexe na struct
char acessar(struct Lista, int); // sem ponteiro porque s� visualiza
void alterar(struct Lista*, int, char); // ponteiro porque mexe na struct
void inserir(struct Lista*, int, char); // poteiro porque mexe na struct
void remover(struct Lista*, int); // ponteiro porque mexe na struct
void concatenar(struct Lista*, struct Lista*); // ponteiro porque mexe em duas structs
void inverter(struct Lista*); // ponteiro porque mexe na struct
struct Lista subLista(struct Lista, int, int); // sem ponteiro porque s� retira parte, n�o altera nada
void inserirOrdenado(struct Lista*, char); // ponteiro porque mexe na struct
void mostrarLista(struct Lista); // sem ponteiro porque s� mostra

// A0501b
int localizarNo(struct Lista* lst, char, int[]);//NAO FUNCIONA
struct Lista interLista(struct Lista*, struct Lista*); // ponteiro porque manipula duas structs em uma terceira
void ordenar(struct Lista*);//ponteiro porque manipula a lista
