#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**<  dependendo da versão do compilador C, o tipo boolean não existe;
portanto, foi preciso adaptar, criando dois ints, um SIM e um NAO. */

#define SIM 1
#define NAO 0 /** foi uma estratégia criada, pois a linguagem C não tem booleano */
#define SUCESSO 0 /** um apelido para o valor padrão de sucesso de execução */
#define MAX_ELEM 10 /** n° máximo de elementos na pilha */
#define PILHA_VAZIA -1 /** valor que indica pilha vazia. Pode ser associado...
                     ... ao topo. Logo, se topo = -1 => Pilha Vazia */
#define PILHA_CHEIA -2

/** ESTRUTURA DE DADOS */
struct Pilha{
    int topo; // -1
    char elem[MAX_ELEM];
};

/** FUNÇÕES REFERENTES A OPERAÇÕES EXEMPLO */
int vazia(struct Pilha);
int cheia(struct Pilha);
void iniciarPilha(struct Pilha*); // passada por referência porque vai alterar a pilha
char obterTopo(struct Pilha); // devolver o caracter que está no topo da pilha
void inserir(struct Pilha*, char);
char remover(struct Pilha*);
void mostrarPilha(struct Pilha);
int palindromo(struct Pilha);
