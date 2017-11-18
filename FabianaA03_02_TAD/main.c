#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "conta.h"


int mostraMenu();



// Este arquivo contém a função principal
int main(void){
    Conta* concor; // define ponteiro pra conta corrente
    int opcao; // opção para o menu; variável pra receber a entrada de dados
    int numC; // número da conta
    char* nomeCliente = malloc((NOME_MSIZE+1)*sizeof(char));
    float valor;

    concor = NULL; // não entendi isso

    do {
        opcao=mostraMenu();
        switch(opcao){
            case 1:
                printf("Digite nº ");
                scanf("%d", &numC);
                printf("Digite nome ");
                fgets(nomeCliente,NOME_MSIZE,stdin);
                concor = abrirConta(numC, nomeCliente);
                break;
            case 2:
                printf("Digite valor para credito ");
                scanf("%f", &valor);
                lancarCredito(concor, valor); // DÚVIDA ERRO !!!
                break;
            case 3:
                printf("Digite valor para dedito ");
                scanf("%f", &valor);
                lancarDebito(concor, valor);
                break;
            case 4:
                exibirSaldo(*concor);
                break;
            case 5:
                printf("Obrigado por usar o SISBANCO!\n");
                break;
            default:
                printf("ERRO! Informe uma opção válida: \n");
        }
    }while(opcao!=5);

    return (EXIT_SUCCESS);
}


int mostraMenu(){
        int op;
        printf("----- SISTEMA SISBANCO -----\n");
        printf("Informe a operacao que deseja realizar:\n");
        printf("1- ABERTURA DE CONTA\n");
        printf("2- LANCAMENTO DE CREDITO\n");
        printf("3- LANCAMENTO DE DEBITO\n");
        printf("4- EXIBICAO DE SALDO\n");
        printf("5- ENCERRA\n");
        scanf("%d",&op);
        return op;
}

