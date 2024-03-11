/*
3 - Faça um programa que leia n números e, para cada desses
números, diga se é primo ou não. Pare a repetição quando for lido um número negativo.
*/

#include <stdio.h>

int main() {

    int num, i, id = 0;
    
    while (num >= 0) {
        printf("Entre com um numero inteiro: ");
        scanf("%i", &num);

        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                id = 1;
            }
        }
        if (id != 0 && num >= 0) {
            printf("O numero não e primo! \n");
            id = 0;
        } else if (id == 0 && num >= 0){
            printf("O numero e primo. \n");
            id = 0;
        }
    }

    return 0;
}