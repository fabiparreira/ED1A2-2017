#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomes[10][20]; // declaração de uma matriz de strings para armazenar os nomes
    char enderecos[10][50]; // declaração de uma matriz de strings para armazenar os endereços
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
    printf("Informe o numero que deseja consultar:(1 a 10) \n");   // Ele tem que pedir a informação desta linha dentro do while, pois se estiver errado ele ja revalida.
    printf("---------------------------------------------------\n");
    scanf("%d",&num);                                              // a linha da leitura é a mesma coisa Fabi, tem que ser dentro do while, para toda hora ele verificar

    while (num<0 && num>10){                                       //Voce nao vai perder nada aqui, só dar uma realocada no código
        printf("ERRO! Informe um numero valido:(1 a 10)\n");       //Tenta colocar a condição de parada do while sempre como boolean - True/false . Ex while (Parar == falso)
    }                                                              //O seu while atual pode virar um IF dentro do while, caso o usuário digite errado
    if (num>0 && num<=10){                                         //O seu IF atual está perfeito para mostrar o caso correto, eu só mudei o indice i, para o numéro que o usuário digitou -1 (para bater com o indice do vetor[1 para o usúario é 0 para o vetor])
        printf("O nome encontrado é %s",nomes[num-1]);             // por fim a condição de parada, vc pode escolher:
        printf("O endereco de %s é %s",nomes[num-1],enderecos[num-1]); //if usuario digitar 0 parada = true, ou if cont = 10 parada = true, ai fica no seu critério
    }
    return 0;
}
