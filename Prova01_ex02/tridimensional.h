#ifndef TRIDIMENSIONAL_H_INCLUDED // marcador de início
#define TRIDIMENSIONAL_H_INCLUDED

#define MAX_ELEM 10 // defini uma constante de nome "MAX_ELEM" de 10 elementos

// declaração dos dados
float cubo[MAX_ELEM][MAX_ELEM][MAX_ELEM]; //estrutura estática, porque tem tamanho definido

// protótipo das funções (operações)
void limparEstrutura(float cubo[MAX_ELEM][MAX_ELEM][MAX_ELEM]);
void alterarCelula(float cubo[MAX_ELEM][MAX_ELEM][MAX_ELEM],float,int,int,int);
                                    // "float" se refere ao valor que será passado
                                    // os "ints" se referem aos índices para achar a célular que será mudado

#endif // TRIDIMENSIONAL_H_INCLUDED // marcador de fim
