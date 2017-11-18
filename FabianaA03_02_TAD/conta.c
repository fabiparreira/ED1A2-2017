#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "conta.h"

/* Nesse arquivo s�o feitas as descri��es das fun��es e a implementa��o dos prot�tipos*/

// FUN��O PARA ABRIR CONTA
Conta* abrirConta(int num, char* nome){
    Conta* c = malloc(sizeof(Conta)); /* malloc aloca espa�o na mem�ria */
    c -> numConta = num;
    c ->nomeCliente = malloc((NOME_MSIZE+1)*sizeof(char)); /*esse +1 faz com que caiba o /0 */
    strcpy(c->nomeCliente, nome);
    c->saldo=0.0;
    return c;
};

// FUN��O PARA CREDITAR VALOR NA CONTA
void lancarCredito(Conta*c, float valor){
    c -> saldo = c ->saldo+valor;
    return;
};

// FUN��O PARA DEBITAR VALOR NA CONTA
void lancarDebito(Conta*c, float valor){
    c -> saldo = c ->saldo-valor;
    return;
};

// FUN��O PARA EXIBIR SALDO DA CONTA
void exibirSaldo(Conta c){
    printf("\n\n ----- SALDO DA CONTA CORRENTE -----");
    printf("\n Numero da conta .....: %d", c.numConta);
    printf("\n Nome do cliente .....: %s", c.nomeCliente);
    printf("\n Saldo atual R$: %6.2f",c.saldo);
    return;
};
