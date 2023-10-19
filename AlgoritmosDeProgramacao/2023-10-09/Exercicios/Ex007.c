/*
7. Escreva um programa que leia do teclado valores inteiros para
uma matriz de 5 linhas por 5 colunas. Em seguida, leia do teclado um valor
numérico X. Conte quantos valores múltiplos de X existem na matriz e
mostre-os na tela.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int l, c, matriz[5][5], num, soma;

    srand(time(NULL));               // semente da funcao rand
    
    printf("Matriz: \n");
    for(l = 0; l < 5; l++){
        for(c=0; c < 5; c++){
            matriz[l][c] = rand() % 51;
            printf("%02i ", matriz[l][c]);
        }
        printf("\n");
    }

    printf("Agora entre com um numero: ");
    scanf("%i", &num);

    printf("Numeros multiplos de %i: ", num);
    for(l = 0; l < 5; l++){
        for(c=0; c < 5; c++){
            if (matriz[l][c] % num == 0) {
                printf("%i ", matriz[l][c]);
                soma++;
            }
        }
    }
    printf("\nExistem %i numeros multiplos de %i na matriz. \n", soma, num);

    return 0;
}