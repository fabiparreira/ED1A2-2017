#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "tridimensional.h"

/* Nesse arquivo são feitas as descrições das funções e a implementação dos protótipos*/
void limparEstrutura(float cubo[MAX_ELEM][MAX_ELEM][MAX_ELEM]){
    int x,y,z; // índices para passear na matriz
    for (x=0; x<MAX_ELEM; x++){
        for (y=0; y<MAX_ELEM; y++){
            for (z=0; z<MAX_ELEM; z++){
                cubo[x][y][z] = 0; // atribui o valor zero para todas as células da matriz tridimensional
            }
        }
    }
}

void alterarCelula(float cubo[MAX_ELEM][MAX_ELEM][MAX_ELEM], float vr, int x, int y, int z){
}
