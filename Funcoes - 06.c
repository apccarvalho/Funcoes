/* 6. Faça uma função capaz de receber dois números b e h que representam os lados de um
retângulo ou quadrado, e retornar 1 se ele for um quadrado ou 0 se for um retângulo. */
#include <stdio.h>

int verifica(int b, int h){
    if (b != h){
        return 0;
    }else{
        return 1;
    }
}
int main()
{
    int b, h;
    scanf("%d %d", &b, &h);
    printf("%d", verifica(b, h));
    
    return 0;
}