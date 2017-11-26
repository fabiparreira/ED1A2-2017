#ifndef FILAESTATICA2_H_INCLUDED
#define FILAESTATICA2_H_INCLUDED

#define SIM 1
#define NAO 0
/**<  dependendo da versão do compilador C, o tipo boolean não existe;
portanto, foi preciso adaptar, criando dois ints, um SIM e um NAO. */

#define SUCESSO 0 /** um apelido para o valor padrão de sucesso de execução */
#define FILA_CHEIA 1 /** um apelido para um valor que expresse Fila Cheia */
#define MAX_ELEM 10 /** n° máximo de elementos na fila */

#define FILA_VAZIA -1 /** valor que indica fila vazia...
                 Pode ser associado ao início da fila (Front) indicando que está vazia. */

#define ELEM_NULO 0 /** valor de elemento nulo. Em C, zero é caractere nulo. */

// --- Estrutura de dados ---
struct Fila{
    int inicio; //índice da célula do vetor que representa início da fila
    int fim; //índice da célula do vetor que representa final da fila
    char elem[MAX_ELEM]; // elementos da fila
};

// --- Funções referentes a operações exemplo ---
int vazia(struct Fila); // Empty
int cheia(struct Fila); // Full
void iniciarFila(struct Fila*); // Setup
char obterInicio(struct Fila);
void listarElementos(struct Fila);
int inserir(struct Fila*, char); // Enqueue
char remover(struct Fila*); // Dequeue
int tamanho(struct Fila); // Size

#endif // FILAESTATICA2_H_INCLUDED
