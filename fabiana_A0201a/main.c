#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 3000;  // vari�veis globais
    int b = 4000;
    int c;
    printf("Testando funcao de soma\n");
    c = somaNum(a,b); // chamando a fun��o
    printf("O resultado da soma eh: %d", c);
    return 0;
}

int somaNum(int num1, int num2){

    int somatoria; // vari�vel de escopo local
    somatoria = num1+num2;

    return somatoria;
}
