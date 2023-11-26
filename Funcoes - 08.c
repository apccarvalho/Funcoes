/* 8. Supondo um empréstimo no valor de c Reais, por m meses a juros de t% ao mês, crie
uma função capaz de descobrir os juros cobrados nesse empréstimo. A fórmula para
cálculo dos juros simples é a que se segue: j = c ∗ m ∗ t.*/
#include <stdio.h>

double emprestimo(double c, int m, double t){
    double j;
    t = t/100;
    j = c * m * t;
    return j;
    
}

int main()
{
    
    double c, t;
    int m;
    scanf("%lf %d %lf", &c, &m, &t);
    printf("%.2lf", emprestimo(c, m, t));
    
    return 0;
}