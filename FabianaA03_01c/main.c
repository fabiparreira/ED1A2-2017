#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numeros[10];
    int num; // vari�vel que recebe o n�mero digitado
    int i; // �ndice para preencher e acessar o vetor
    int qValidos; // vari�vel para contar quantos n�meros foram v�lidos
    qValidos=0;
    printf("Informe, no m�ximo, 10 n�meros de 0 a 100 \n.");
    printf("Para encerrar, digite -1\n:");
    scanf("%f", &num);
    for (i=0;i>=10;i++){
        if (num>0 && num<=100){
            qValidos=qValidos+1;
            numeros[qValidos]=num;
        }else{
        if (num<0 || num>100){
            printf("ERRO! Informe um n�mero entre 0 e 100!\n");
            scanf("%f", &num);
        }else{
        if (num=-1){
            printf("CONTABILIZANDO...\n");
            printf("TOTAL DE N�MEROS V�LIDOS INFORMADOS %d",qValidos);
            if (qValidos>0){
                printf("--- N�MEROS PARES ---");
                for (i=0;i>qValidos;i++){
                    if((numeros[i]%2)==0){
                        printf(numeros[i]"\n");
                    }
                }
                printf("--- N�MEROS �MPARES ---");
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
