#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "tridimensional.h"

/* Nesse arquivo s�o feitas as descri��es das fun��es e a implementa��o dos prot�tipos*/
void limparEstrutura(float cubo[MAX_ELEM][MAX_ELEM][MAX_ELEM]){
    int x,y,z; // �ndices para passear na matriz
    for (x=0; x<MAX_ELEM; x++){
        for (y=0; y<MAX_ELEM; y++){
            for (z=0; z<MAX_ELEM; z++){
                cubo[x][y][z] = 0; // atribui o valor zero para todas as c�lulas da matriz tridimensional
            }
        }
    }
}

void alterarCelula(float cubo[MAX_ELEM][MAX_ELEM][MAX_ELEM], float vr, int x, int y, int z){
}
