/*Crie uma função capaz de determinar a soma dos n primeiros termos de uma P.A. A soma
dos n primeiros termos de uma P.A. é definida pela fórmula a seguir: Sn = n∗(a1+an)2. 
É necessário receber o primeiro elemento, o n-ésimo elemento e o valor de n.  */
#include<stdio.h>

int soma(int n, int a1, int an){
    int pa = 0;
    for (int i=0; i<n; i++){
        pa = ((i*(a1 + an)))/ 2;
        printf("%d\n", pa);
    }
    return  pa;
}


int main(){

    int n, a1, an;

    scanf("%d %d %d", &n, &a1, &an);

    soma(n, a1, an);

    return 0;
}