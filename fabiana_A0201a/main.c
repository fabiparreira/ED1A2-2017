#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 3000;  // variáveis globais
    int b = 4000;
    int c;
    printf("Testando funcao de soma\n");
    c = somaNum(a,b); // chamando a função
    printf("O resultado da soma eh: %d", c);
    return 0;
}

int somaNum(int num1, int num2){

    int somatoria; // variável de escopo local
    somatoria = num1+num2;

    return somatoria;
}
