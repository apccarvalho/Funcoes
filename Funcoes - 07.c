/* 7. Faça uma função capaz de receber 3 números e retornar a soma do maior com o menor
número. */
#include <stdio.h>

int soma(int a, int b, int c){
    int maior, menor, res;
    
    if (a > b && a > c){
        maior = a;
    }else if (b > a && b > c){
        maior = b;
    }else{
        maior = c;
    }
    
    if (a < b && a < c){
        menor = a;
    }else if (b < a && b < c){
        menor = b;
    }else{
        menor = c;
    }
    res = maior + menor;
    return res;
}

int main()
{
    
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", soma(a, b, c));
    
    return 0;
}