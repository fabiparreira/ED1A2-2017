#ifndef LISTAENCADEADA_H_INCLUDED
#define LISTAENCADEADA_H_INCLUDED

// -- Estrutura de N� para Lista Ligada Simples e at� Circular --
struct No{
    int dado;
    struct No *prox;
};

// -- Estrutura de N� para Lista Duplamente Ligada --
struct No2{
    int dado;
    struct No2 *prox;
    struct No2 *ant;
};

// -- Opera��es Primitivas --
void montarListaSimples();
void listarListaSimples();
void montarListaDupla();
void listarListaDupla();

#endif // LISTAENCADEADA_H_INCLUDED
