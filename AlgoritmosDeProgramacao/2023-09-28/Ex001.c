/*
Escreva um programa que leia do teclado valores para dois vetores de 4 posições de ponto
ﬂutuante, depois subtraia os dois vetores. Ao ﬁnal da execução deverá ser impresso o resultado na
tela.
*/

#include <stdio.h>

int main() {
    int cont;
    float vet1[4], vet2[4], dif[4];

    for(cont = 0; cont <= 3; cont++) {
        printf("Entre com o valor da posicao %i do vetor 1: ", cont);
        scanf("%f", &vet1[cont]);
        printf("Entre com o valor da posicao %i do vetor 2: ", cont);
        scanf("%f", &vet2[cont]);

        dif[cont] = vet1[cont] - vet2[cont];
    }


    for(cont = 0; cont <= 3; cont++) {
        printf("Indice[%i]: ", cont);
        printf("%.2f - %.2f = %.2f \n", vet1[cont], vet2[cont], dif[cont]);
    }

    return 0;
}