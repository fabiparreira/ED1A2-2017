#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**<  dependendo da vers�o do compilador C, o tipo boolean n�o existe;
portanto, foi preciso adaptar, criando dois ints, um SIM e um NAO. */

#define SIM 1
#define NAO 0 /** foi uma estrat�gia criada, pois a linguagem C n�o tem booleano */
#define SUCESSO 0 /** um apelido para o valor padr�o de sucesso de execu��o */
#define MAX_ELEM 10 /** n� m�ximo de elementos na pilha */
#define PILHA_VAZIA -1 /** valor que indica pilha vazia. Pode ser associado...
                     ... ao topo. Logo, se topo = -1 => Pilha Vazia */
#define PILHA_CHEIA -2

/** ESTRUTURA DE DADOS */
struct Pilha{
    int topo; // -1
    char elem[MAX_ELEM];
};

/** FUN��ES REFERENTES A OPERA��ES EXEMPLO */
int vazia(struct Pilha);
int cheia(struct Pilha);
void iniciarPilha(struct Pilha*); // passada por refer�ncia porque vai alterar a pilha
char obterTopo(struct Pilha); // devolver o caracter que est� no topo da pilha
void inserir(struct Pilha*, char);
char remover(struct Pilha*);
void mostrarPilha(struct Pilha);
int palindromo(struct Pilha);
