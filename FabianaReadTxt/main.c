#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){

    char nomeArq[]="nomes.txt"; // posso incluir o endere�o inteiro do arquivo
    char ch1[10][10];
    FILE *arq; // FILE � um tipo de dado da linguagem C, presente na biblioteca stdio
    // * � um ponteiro
    int n = 0;
    arq = fopen(nomeArq, "r"); // r se refere a "read"; poderia ser "w" (write) ou "wr"
    // fopen � uma fun��o pra ler arquivo; ela espera 2 par�metros

    if (arq == NULL){ // NULL � uma constante
        printf("ERRO! N�o foi possivel abrir o arquivo\n");
    } else {
        while ((fscanf(arq,"%s\n", &ch1[n])) != EOF && n < 10){
            printf("%s\n", ch1[n]);             // EOF � uma constante
            n++;
        }
        printf("\n >>>> Foram lidas %d linhas do arquivo! <<<<", n);
    }
    fclose(arq); // fclose � uma fun��o que fecha o arquivo
    return (EXIT_SUCCESS);
}
