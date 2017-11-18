#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"

/*Fun��o principal */
int main(int argc, char *argv[]) // tem 36 linhas escondidas aqui
{
        struct Livro l1;
        struct Livro l2;
        Aluno a1; // Por Aluno ter sido definida como typedef,...
              // ... n�o precisa citar que � struct.

        // Preenchendo dados do Livro 1
        strcpy(l1.titulo,"Aprendendo a programar em C");
        strcpy(l1.autor,"Osvandre A. Martins");
        strcpy(l1.assunto,"Programa��o de computadores");
        l1.numTombo = 12345;
        l1.numExs = 10;

        // Preenchendo dados do Livro 2
        strcpy(l2.titulo,"Estrutura de Dados em C");
        strcpy(l2.autor,"Osvandre A. Martins");
        strcpy(l2.assunto,"Estrutura de Dados e Algoritmos");
        l2.numTombo = 54321;
        l2.numExs = 5;

        // Mostra dados dos livros
        mostrarLivro(&l1);
        mostrarLivro(&l2);

        // Preenchendo dados do Aluno
        a1.matricula = 11111;
        strcpy(a1.nome,"Jos� da Silva");
        strcpy(a1.endereco,"Rua X, 123.");
        strcpy(a1.fone,"(11) 11111-1111");

        // Mostra dados do Aluno
        mostrarAluno(a1);

    return 0;
}

/* Formata a exibi��o de um registro Livro */
void mostrarLivro(struct Livro *l){
        printf("\n-------- LIVRO ---------\n");
        printf("T�tulo.......: %s\n", l ->titulo);
        printf("Autor.......: %s\n", l ->autor);
        printf("Assunto.......: %s\n", l ->assunto);
        printf("N� Tombo.......: %d\n", l ->numTombo);
        printf("Exemplares.......: %d\n", l ->numExs);
}

/* Formata a exibi��o de um registro Aluno */
void mostrarAluno( Aluno ap){
        printf("\n-------- ALUNO ---------\n");
        printf("Matricula.......: %d\n", ap.matricula);
        printf("Nome.......: %s\n", ap.nome);
        printf("Endere�o.......: %s\n", ap.endereco);
        printf("Telefone.......: %s\n", ap.fone);
}
