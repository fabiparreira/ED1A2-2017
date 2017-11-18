#include <stdio.h>
#include <stdlib.h>

    // declaração da função fatorial
    int fatNum(int n){
	if (n){
        return n*fatNum(n-1);
	}
    else return 1;
    }

int main(){
	int n;
	printf(" ---- CALCULO DE FATORIAL ----\n");
	printf("\n\nQuer saber o fatorial de qual numero?: ");
	scanf("%d", &n);
	printf("\nO fatorial de %d eh %d.", n, fatNum(n));
	return 0;
}
