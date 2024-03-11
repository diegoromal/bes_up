/*
Escreva um programa que apresente os dados de um vetor na ordem inversa em que eles foram
inseridos.
*/
#include <stdio.h>

int main() {
    int cont;
    float vet[10];

    for (cont = 0; cont <= 9; cont++) {
        printf("Entre com o valor do indice[%i]: ", cont);
        scanf("%f", &vet[cont]);
    }

    for (cont = 9; cont >= 0; cont--) {
        printf("Indice[%i]: %.2f \n", cont, vet[cont]);
    }


    return 0;
}