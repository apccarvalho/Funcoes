/* 3. Crie uma função capaz de receber 1 número n qualquer e imprimir todos os números de 1
a n. */
#include <stdio.h>

void imprimeNumeros(int vet[], int n){
    int i;
    for (i = 0; i < n; i++){
        vet[i] = i + 1;
        printf("%d ", vet[i]);
    }
    
}

int main()
{
    int n;
    scanf("%d", &n);
    int vet[n];
    
    imprimeNumeros(vet, n);
    
    return 0;
}