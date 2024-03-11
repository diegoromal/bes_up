/*
3 - Escreva um algoritmo que leia um valor inicial A e uma razão R e imprima uma sequência em 
progressão geométrica contendo 10 valores.
Por exemplo, com A = 1 e R = 3, tem-se “1.00 3.00 9.00 27.00 81.00 243.00 729.00 2187.00 6561.00 19683.00”
*/
#include <stdio.h>

int main() {

    float A, R, valor_atual=1.0;
    int i;

    double power(float base, float exponent) {
        double result = 1.0;
        int i;
        for (i = 0; i < exponent; i++) {
            result *= base;
        }
        return result;
    }

    printf("Entre com o valor inicial (A): ");
    scanf("%f", &A);

    printf("Entre com o valor da razao (R): ");
    scanf("%f", &R);

    printf("Com A=%.2f e R=%.2f, tem-se: \n%.2f %.2f ", A, R, A, A * R);

    for (i = 1; i <= 10; i++) {
        valor_atual = power(R, A + i);
        printf("%.2f ", valor_atual);
        }

    return 0;
}