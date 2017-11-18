#include <stdio.h>
#include <stdlib.h>

    // FUNÇÃO MULTIPLICAR SOMANDO
    int multS(int x, int y){
        if (y == 0)
            return 0;
        else
            return (x + multS(x, y-1));
    }

    int main(){
    int n1,n2;

    printf(" ++ MULTIPLICANDO PELA ADICAO ++\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Agora digite o segundo numero: ");
    scanf("%d", &n2);
    printf("\nResultado: %d\n\n",multS(n1,n2));
    system("pause");
    return 0;
}
