/* 11. Faça uma função que receba um número positivo e imprima todos os seus divisores.
Exemplo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66. */
#include <stdio.h>

void divisores(int a){
    int i, vet[a];
    for (i = 0; i < a; i++){
        vet[i] = i+1;
    }
    for (i = 0; i < a; i++){
        if (a % vet[i] == 0){
            printf("%d ", vet[i]);
        }
    }
}    
int main(){

    int a;
    scanf("%d", &a);
    divisores(a);

    return 0;
}    
