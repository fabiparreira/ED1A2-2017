#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED

// defini uma constante para o tamanho m�ximo do vetor nome do cliente
#define NOME_MSIZE 100

/* Nesse arquivo s�o feitas as declara��es de vari�veis e os prot�tipos das fun��es*/

/*Declara��o da estrutura Contas*/ //S�O OS DADOS
typedef struct {
        int numConta;
        char* nomeCliente;
        float saldo;
} Conta; // Conta � uma vari�vel da estrutura? // Conta � um "apelido" (por ter usado typedef)

/*Prot�tipo das fun��es*/ // S�O AS OPERA��ES
Conta* abrirConta(int, char*); // passa "char" por refer�ncia
void lancarCredito(Conta*, float); // passa "Conta" por refer�ncia ERRO!!!
void lancarDebito(Conta*, float); // passa "Conta" por refer�ncia ERRO!!!
void exibirSaldo(Conta); // passa "Conta" por valor

#endif // CONTA_H_INCLUDED
