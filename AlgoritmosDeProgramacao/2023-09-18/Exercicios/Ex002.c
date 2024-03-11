/*
2 - Construa um algoritmo que receba um número inteiro e verifique se o mesmo é primo
*/

#include <stdio.h>

int main() {

    int num, i;

    do {
        printf("Entre com um numero inteiro: ");
        scanf("%i", &num);

        if (num < 1) {
            printf("O número precisa ser maior ou igual a 1.");
        }
    } while(num < 1);

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("O numero não e primo! \n");
            return 1;
        }
    }
    printf("O numero e primo. \n");

    return 0;
}