#include <stdio.h>
#include <stdlib.h>

// função de conversão de decimal em binário
void converteBin(int num){
    int q, resto; // q se refere a quociente

	if(num != 0){
		q=num / 2;
		resto=num-q * 2;
		converteBin(q);
		printf("%d", resto);
	}
}

int main(){
    int dec;

    printf("\nInforme o decimal que deseja converter para binario: ");
    scanf("%d", &dec);
    //printf("\nResultado: %d",converteBin(dec));
    system("pause");
    return 0;
}
