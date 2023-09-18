/*
2 - Escreva um algoritmo que leia um valor inicial A e uma razão R e imprima uma sequência em 
progressão aritmética contendo 10 valores.
Por exemplo, com A = 1 e R = 3, tem-se “1 4 7 10 13 16 19 22 25 28”
*/
#include <stdio.h>

int main() {
    const int A, R;
    int i, valor_atual=0;
    
    printf("Entre com o valor inicial (A): ");
    scanf("%i", &A);

    printf("Entre com o valor da uma razao (R): ");
    scanf("%i", &R);

    printf("Se A=%i e R=%i, entao: \n", A, R);

    for (i = 1; i <= 10; i++) {
        if (valor_atual == 0) {
            printf("%i ", A);
        } else {
            printf("%i ", valor_atual);
        }
        valor_atual = A + (i * R);
            
    }

    return 0;
}