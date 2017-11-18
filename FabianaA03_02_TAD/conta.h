#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED

// defini uma constante para o tamanho máximo do vetor nome do cliente
#define NOME_MSIZE 100

/* Nesse arquivo são feitas as declarações de variáveis e os protótipos das funções*/

/*Declaração da estrutura Contas*/ //SÃO OS DADOS
typedef struct {
        int numConta;
        char* nomeCliente;
        float saldo;
} Conta; // Conta é uma variável da estrutura? // Conta é um "apelido" (por ter usado typedef)

/*Protótipo das funções*/ // SÃO AS OPERAÇÕES
Conta* abrirConta(int, char*); // passa "char" por referência
void lancarCredito(Conta*, float); // passa "Conta" por referência ERRO!!!
void lancarDebito(Conta*, float); // passa "Conta" por referência ERRO!!!
void exibirSaldo(Conta); // passa "Conta" por valor

#endif // CONTA_H_INCLUDED
