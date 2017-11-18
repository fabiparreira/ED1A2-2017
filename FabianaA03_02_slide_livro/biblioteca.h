#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED

/*Declaração da estrutura livro*/
struct Livro {
        char titulo[50];
        char autor[30];
        char assunto[100];
        int numTombo;
        int numExs;
};

/*Declaração de um novo tipo de dado na forma de struct*/
typedef struct{
        int matricula;
        char nome[30];
        char endereco[100];
        char fone[15];
} Aluno;

/*Protótipo das funções*/
void mostrarLivro(struct Livro *l);
void mostrarAluno(Aluno ap); // o que é esse "ap"?


#endif // BIBLIOTECA_H_INCLUDED
