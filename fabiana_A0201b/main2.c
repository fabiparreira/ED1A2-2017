#include <stdio.h>

void swap(int *x, int *y); // declara��o da fun��o swap (passagem de par�metros por refer�ncia)

   int a = 300; // vari�veis locais
   int b = 400;

   swap(&a, &b); // chamando a fun��o para trocar valores, sendo que &a indica ponteiro para 'a' (endere�o da vari�vel)

   printf("VALOR DE A DEPOIS DA TROCA: %d\n", a );
   printf("VALOR DE B DEPOIS DA TROCA: %d\n", b );

   return 0;
}
