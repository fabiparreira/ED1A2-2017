#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 100; // variáveis locais
    int b = 200;
    printf("VALOR DE A ANTES DA TROCA: %d\n", a );
    printf("VALOR DE B ANTES DA TROCA: %d\n", b );
    swap(&a,&b);
    return 0;
}

/*void swap(int *x, int *y) { // essa função irá trocar os valores (passagem de parâmetros por valor)

   int troca;
   troca = *x; // salva o valor no endereço x
   *x = *y;   // coloca y em x; faz x receber o valor (?) de y
   *y = troca;  // coloca a troca em y; faz y receber o valor da célula troca

   return;
} */
