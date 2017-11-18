#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED

/*Declara��o da estrutura livro*/
struct Livro {
        char titulo[50];
        char autor[30];
        char assunto[100];
        int numTombo;
        int numExs;
};

/*Declara��o de um novo tipo de dado na forma de struct*/
typedef struct{
        int matricula;
        char nome[30];
        char endereco[100];
        char fone[15];
} Aluno;

/*Prot�tipo das fun��es*/
void mostrarLivro(struct Livro *l);
void mostrarAluno(Aluno ap); // o que � esse "ap"?


#endif // BIBLIOTECA_H_INCLUDED
