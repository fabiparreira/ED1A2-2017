#include <stdio.h>
#include <stdlib.h>

    // declaração da função fibonacci
int fib(int num){
    if (num==1 || num==2)
        return 1;
    else
        return fib(num-1) + fib(num-2);
    }

int main()
{
    int pos;
    printf("---- SEQUENCIA DE FIBONACCI ----\n");
    printf("\n\n Voce quer visualizar qual posicao da Sequencia Fibonacci?\n");
    scanf("%d",&pos);
    printf("%d",fib(pos));
    return 0;
}
