/* Faça uma função capaz de receber três números a, b e c, e imprimir as duas raízes da
equação do segundo grau. Se a função tem apenas uma raiz, imprimir apenas essa raiz. Se
não tiver raiz, imprima não existem raízes. */
#include <stdio.h>
#include <math.h>

void equacao(double a, double b, double c){
    double delta, x1, x2;
    delta = pow(b, 2) - 4 * a *c;
    
    if (delta < 0){
        printf("Nao existem raizes");
    }else{
        x1 = (-b + sqrt(delta)) / 2 * a;
        x2 = (-b - sqrt(delta)) / 2 * a;
    }
    if (delta == 0){
        printf("%.1lf", x1);
    }else if (delta > 0){
        printf("%.1lf\n%.1lf\n", x1, x2);
    }
}
    
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    equacao(a, b, c);
    
    return 0;
}