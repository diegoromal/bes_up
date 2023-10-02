/*
Escreva um programa que crie um vetor de números inteiros de 6 posições e povoe esse vetor com
valores lidos do teclado. O programa deverá aceitar somente números pares entre 1 e 20. Ao ﬁnal,
imprima todos os valores salvos no vetor, além da média dos valores, o menor e o maior valor.
*/
#include <stdio.h>

int main() {
    int cont, vet[6], soma = 0, maior, menor, media;

    for (cont = 0; cont <= 5; cont++) {
        do {
            printf("Entre com o valor do indice[%i]: ", cont);
            scanf("%i", &vet[cont]);
        } while(vet[cont] < 1 || vet[cont] > 20);

        soma = soma + vet[cont];
        if (vet[cont] > maior) {
            maior = vet[cont];
        }
        if (cont == 0) {
            menor = vet[cont];
        } else if (vet[cont] < menor) {
            menor = vet[cont];
        }
    }

    media = soma / 6;

    printf("Valores: ");
    for (cont = 0; cont <= 5; cont++) {
        printf("%i ", vet[cont]);
    }

    printf("\nMedia: %i \n", media);
    printf("Menor: %i \n", menor);
    printf("Maior: %i \n", maior);

    return 0;
}