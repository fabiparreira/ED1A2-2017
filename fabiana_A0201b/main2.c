#include <stdio.h>

void swap(int *x, int *y); // declaração da função swap (passagem de parâmetros por referência)

   int a = 300; // variáveis locais
   int b = 400;

   swap(&a, &b); // chamando a função para trocar valores, sendo que &a indica ponteiro para 'a' (endereço da variável)

   printf("VALOR DE A DEPOIS DA TROCA: %d\n", a );
   printf("VALOR DE B DEPOIS DA TROCA: %d\n", b );

   return 0;
}
