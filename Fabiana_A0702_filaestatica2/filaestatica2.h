#ifndef FILAESTATICA2_H_INCLUDED
#define FILAESTATICA2_H_INCLUDED

#define SIM 1
#define NAO 0
/**<  dependendo da vers�o do compilador C, o tipo boolean n�o existe;
portanto, foi preciso adaptar, criando dois ints, um SIM e um NAO. */

#define SUCESSO 0 /** um apelido para o valor padr�o de sucesso de execu��o */
#define FILA_CHEIA 1 /** um apelido para um valor que expresse Fila Cheia */
#define MAX_ELEM 10 /** n� m�ximo de elementos na fila */

#define FILA_VAZIA -1 /** valor que indica fila vazia...
                 Pode ser associado ao in�cio da fila (Front) indicando que est� vazia. */

#define ELEM_NULO 0 /** valor de elemento nulo. Em C, zero � caractere nulo. */

// --- Estrutura de dados ---
struct Fila{
    int inicio; //�ndice da c�lula do vetor que representa in�cio da fila
    int fim; //�ndice da c�lula do vetor que representa final da fila
    char elem[MAX_ELEM]; // elementos da fila
};

// --- Fun��es referentes a opera��es exemplo ---
int vazia(struct Fila); // Empty
int cheia(struct Fila); // Full
void iniciarFila(struct Fila*); // Setup
char obterInicio(struct Fila);
void listarElementos(struct Fila);
int inserir(struct Fila*, char); // Enqueue
char remover(struct Fila*); // Dequeue
int tamanho(struct Fila); // Size

#endif // FILAESTATICA2_H_INCLUDED
