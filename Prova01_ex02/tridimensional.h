#ifndef TRIDIMENSIONAL_H_INCLUDED // marcador de in�cio
#define TRIDIMENSIONAL_H_INCLUDED

#define MAX_ELEM 10 // defini uma constante de nome "MAX_ELEM" de 10 elementos

// declara��o dos dados
float cubo[MAX_ELEM][MAX_ELEM][MAX_ELEM]; //estrutura est�tica, porque tem tamanho definido

// prot�tipo das fun��es (opera��es)
void limparEstrutura(float cubo[MAX_ELEM][MAX_ELEM][MAX_ELEM]);
void alterarCelula(float cubo[MAX_ELEM][MAX_ELEM][MAX_ELEM],float,int,int,int);
                                    // "float" se refere ao valor que ser� passado
                                    // os "ints" se referem aos �ndices para achar a c�lular que ser� mudado

#endif // TRIDIMENSIONAL_H_INCLUDED // marcador de fim
