/* 1. Crie uma função capaz de receber 3 números a, b e c, e retornar o delta desses números. */

#include <stdio.h>
#include <math.h>

int delta(int n1, int n2, int n3){
    int resultado;
    resultado = pow(n2, 2) - 4 * n1 *n3;
    return resultado;
}

int main()
{
    int a, b, c, resposta;
    scanf("%d%d%d", &a, &b, &c);
   
    resposta = delta(a, b, c);
    printf("%d", resposta);

    return 0;
}