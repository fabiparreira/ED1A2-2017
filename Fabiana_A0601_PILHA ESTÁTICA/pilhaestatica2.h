#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**<  dependendo da vers�o do compilador C, o tipo boolean n�o existe;
portanto, foi preciso adaptar, criando dois ints, um SIM e um NAO. */

#define SIM 1
#define NAO 0
/** Definir essas duas constantes foi uma estrat�gia criada,
* pois a linguagem C n�o tem booleano */

#define SUCESSO 0 /** um apelido para o valor padr�o de sucesso de execu��o */
#define MAX_ELEM 10 /** n� m�ximo de elementos na pilha */

#define PILHA_VAZIA -1
/** valor que indica pilha vazia. Pode ser associado ao topo.
*Logo, se topo = -1 => Pilha Vazia */

#define PILHA_CHEIA -2

/** ESTRUTURA DE DADOS */
struct Pilha{
    int topo; // -1
    int n;
    //n = MAX_ELEM - 1; // n sendo o tamanho da pilha
    char elem[MAX_ELEM];
};

/** FUN��ES REFERENTES A OPERA��ES EXEMPLO */
void iniciarPilha(struct Pilha*); // passada por refer�ncia porque vai alterar a pilha
void pop(struct Pilha*, char, int); //inserir/empilhar; esse int � a refer�ncia se deu certo ou n�o
char push(struct Pilha*, char); //remover
int vazia(struct Pilha);
int cheia(struct Pilha);
char obterTopo(struct Pilha); // devolver o caracter que est� no topo da pilha
void mostrarPilha(struct Pilha);
int palindromo(struct Pilha);

