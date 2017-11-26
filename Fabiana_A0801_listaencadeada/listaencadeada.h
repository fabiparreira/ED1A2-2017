#ifndef LISTAENCADEADA_H_INCLUDED
#define LISTAENCADEADA_H_INCLUDED

// -- Estrutura de Nó para Lista Ligada Simples e até Circular --
struct No{
    int dado;
    struct No *prox;
};

// -- Estrutura de Nó para Lista Duplamente Ligada --
struct No2{
    int dado;
    struct No2 *prox;
    struct No2 *ant;
};

// -- Operações Primitivas --
void montarListaSimples();
void listarListaSimples();
void montarListaDupla();
void listarListaDupla();

#endif // LISTAENCADEADA_H_INCLUDED
