/* 10. Faça uma função capaz de receber dois números a e b, onde o primeiro sempre é menor
que o segundo, e calcula a soma dos números pares compreendidos entre os dois números
lidos. */

#include <stdio.h>

void pares(int a, int b){

    int i, vet[b];
    
    for (i = a; i < b; i++){
        vet[i] = i+1;
    }

    for (i = a; i < b-1; i++){
        if (vet[i] % 2 == 0){
            printf("%d ", vet[i]);
        }
    } 
}

int main(){

    int a, b;
    scanf("%d %d", &a, &b);
    
    pares(a,b);
       
    return 0;  
}