/*
Crie um programa que calcule XY (X elevado a Y), sendo que os valores de X e Y devem ser números
do tipo double, positivos, informados pelo usuário. O resultado deve ser exibido na tela.
*/
#include <stdio.h>
#include <math.h>

double calcula(double x, double y) {
    double result;
    result = pow(x, y);
    return result;
}

int main() {
    double x, y, result;
    
    printf("Entre com o valor de x: ");
    scanf("%lf", &x);

    printf("Entre com o valor de y: ");
    scanf("%lf", &y);

    result = calcula(x, y);

    printf("%.2lf elevado a %.2lf e igual a %.2lf \n", x, y, result);
}
