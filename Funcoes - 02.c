/* 2. Crie uma função capaz de receber 2 números x e y, e retornar qual dos dois é maior. */
#include <stdio.h>

int maior(int x, int y){
    if (x > y){
        return x;
    }else{
        return y;
    }
}

int main()
{
    int x, y, resposta;
    scanf("%d %d", &x, &y);
    resposta = maior(x, y);
    printf("%d", resposta);
    
    return 0;
}