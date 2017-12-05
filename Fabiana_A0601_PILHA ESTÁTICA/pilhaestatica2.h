#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**<  dependendo da versão do compilador C, o tipo boolean não existe;
portanto, foi preciso adaptar, criando dois ints, um SIM e um NAO. */

#define SIM 1
#define NAO 0
/** Definir essas duas constantes foi uma estratégia criada,
* pois a linguagem C não tem booleano */

#define SUCESSO 0 /** um apelido para o valor padrão de sucesso de execução */
#define MAX_ELEM 10 /** n° máximo de elementos na pilha */

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

/** FUNÇÕES REFERENTES A OPERAÇÕES EXEMPLO */
void iniciarPilha(struct Pilha*); // passada por referência porque vai alterar a pilha
void pop(struct Pilha*, char, int); //inserir/empilhar; esse int é a referência se deu certo ou não
char push(struct Pilha*, char); //remover
int vazia(struct Pilha);
int cheia(struct Pilha);
char obterTopo(struct Pilha); // devolver o caracter que está no topo da pilha
void mostrarPilha(struct Pilha);
int palindromo(struct Pilha);

