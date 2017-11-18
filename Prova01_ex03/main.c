#include <stdio.h>
#include <stdlib.h>

// NA PROVA NÃO PRECISARIA DE UM "MAIN", SÓ DA IMPLEMENTAÇÃO DA FUNÇÃO

// função recursiva para demonstrar uma multiplicação por soma

// protótipo
int somarMult(int,int);

// implementação
int somarMult(int m, int n){ /* "m" sendo o número de vezes (chama-se "multiplicador"),
     e "n" o número que se quer multiplicar (chama-se "multiplicando")*/
    if ((m==0) || (n==0))
        return 0;
    else
        if ((m==1) && (n>0))
            return n;
        else
            if ((m>0) && (n==1))
                return m;
            else
                return n+(somarMult(m-1,n));
}

int main(){
    int n1,n2,resultado;

    printf(" x+x+x+x MULTIPLICAR SOMANDO x+x+x+x\n");
    printf("\nQUANTAS VEZES (m) x QUAL NUMERO (n)\n");
    printf("\nInforme um numero: ");
    scanf("%d", &n1);
    printf("\nInforme mais um numero: ");
    scanf("%d", &n2);
    resultado = somarMult(n1,n2);
    printf("\n %d x %d = %d", n1, n2, resultado);
    return 0;
}
