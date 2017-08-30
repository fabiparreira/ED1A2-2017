#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numeros[10];
    int num; // variável que recebe o número digitado
    int i; // índice para preencher e acessar o vetor
    int qValidos; // variável para contar quantos números foram válidos
    qValidos=0;
    printf("Informe, no máximo, 10 números de 0 a 100 \n.");
    printf("Para encerrar, digite -1\n:");
    scanf("%f", &num);
    for (i=0;i>=10;i++){
        if (num>0 && num<=100){
            qValidos=qValidos+1;
            numeros[qValidos]=num;
        }else{
        if (num<0 || num>100){
            printf("ERRO! Informe um número entre 0 e 100!\n");
            scanf("%f", &num);
        }else{
        if (num=-1){
            printf("CONTABILIZANDO...\n");
            printf("TOTAL DE NÚMEROS VÁLIDOS INFORMADOS %d",qValidos);
            if (qValidos>0){
                printf("--- NÚMEROS PARES ---");
                for (i=0;i>qValidos;i++){
                    if((numeros[i]%2)==0){
                        printf(numeros[i]"\n");
                    }
                }
                printf("--- NÚMEROS ÍMPARES ---");
                for (i=0;i>qValidos;i++){
                    if((numeros[i]%2)!=0){
                        printf(numeros[i]"\n");
                    }
                }
            }
        }
    }
    }
    }
    }

    return 0;
}
