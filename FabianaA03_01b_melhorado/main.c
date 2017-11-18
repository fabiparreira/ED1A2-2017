#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomes[10][20]; // declara��o de uma matriz de strings para armazenar os nomes
    char enderecos[10][50]; // declara��o de uma matriz de strings para armazenar os endere�os
    int i,num; // contadores
    printf("-------------------------------------------------------------\n");
    printf("Voce devera informar 10 nomes e seus respectivos enderecos:\n");
    printf("-------------------------------------------------------------\n");
    for (i=1; i<=10; i++){
        printf("Informe o %do nome: \n", i);
        gets(nomes[i]);
        printf("Informe o %do endereco: \n", i);
        gets(enderecos[i]);
    }

    printf("---------------------------------------------------\n");
    printf("Informe o numero que deseja consultar:(1 a 10) \n");   // Ele tem que pedir a informa��o desta linha dentro do while, pois se estiver errado ele ja revalida.
    printf("---------------------------------------------------\n");
    scanf("%d",&num);                                              // a linha da leitura � a mesma coisa Fabi, tem que ser dentro do while, para toda hora ele verificar

    while (num<0 && num>10){                                       //Voce nao vai perder nada aqui, s� dar uma realocada no c�digo
        printf("ERRO! Informe um numero valido:(1 a 10)\n");       //Tenta colocar a condi��o de parada do while sempre como boolean - True/false . Ex while (Parar == falso)
    }                                                              //O seu while atual pode virar um IF dentro do while, caso o usu�rio digite errado
    if (num>0 && num<=10){                                         //O seu IF atual est� perfeito para mostrar o caso correto, eu s� mudei o indice i, para o num�ro que o usu�rio digitou -1 (para bater com o indice do vetor[1 para o us�ario � 0 para o vetor])
        printf("O nome encontrado � %s",nomes[num-1]);             // por fim a condi��o de parada, vc pode escolher:
        printf("O endereco de %s � %s",nomes[num-1],enderecos[num-1]); //if usuario digitar 0 parada = true, ou if cont = 10 parada = true, ai fica no seu crit�rio
    }
    return 0;
}
