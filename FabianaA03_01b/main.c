#include <stdlib.h>

int main()
{
    char nomes[10][20]; // declaração de uma matriz de strings para armazenar os nomes
    char enderecos[10][50]; // declaração de uma matriz de strings para armazenar os endereços
    int i,num; // contador
    for (i=1; i<=10; i++){
        printf("Informe o %do nome: \n", i);
        gets(nomes[i]);
        printf("Informe o %do endereço: \n", i);
        gets(enderecos[i]);
    }
    num=0;
    printf("Informe o número que deseja consultar:(1 a 10) \n");
    scanf("%d",&num); // aqui o programa fecha sozinho
    while (num<0 && num>10){
        printf("ERRO! Informe um número válido:(1 a 10)\n");
    }
    if (num>0 && num<=10){
        printf("O nome encontrado é %s",nomes[i]);
        printf("O endereço de %s é %s",nomes[i],enderecos[i]);
    }
    return 0;
}
