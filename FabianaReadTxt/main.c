#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){

    char nomeArq[]="nomes.txt"; // posso incluir o endereço inteiro do arquivo
    char ch1[10][10];
    FILE *arq; // FILE é um tipo de dado da linguagem C, presente na biblioteca stdio
    // * é um ponteiro
    int n = 0;
    arq = fopen(nomeArq, "r"); // r se refere a "read"; poderia ser "w" (write) ou "wr"
    // fopen é uma função pra ler arquivo; ela espera 2 parâmetros

    if (arq == NULL){ // NULL é uma constante
        printf("ERRO! Não foi possivel abrir o arquivo\n");
    } else {
        while ((fscanf(arq,"%s\n", &ch1[n])) != EOF && n < 10){
            printf("%s\n", ch1[n]);             // EOF é uma constante
            n++;
        }
        printf("\n >>>> Foram lidas %d linhas do arquivo! <<<<", n);
    }
    fclose(arq); // fclose é uma função que fecha o arquivo
    return (EXIT_SUCCESS);
}
