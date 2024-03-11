/*
8. Escreva um programa que deverá permitir que o usuário entre
com os valores dos elementos de uma matriz quadrada de ordem 4 (4 linhas e
4 colunas) e possibilite ao usuário realizar as seguintes funcionalidades:
a. Imprimir todos os elementos da matriz;
b. Somar os quadrados de todos os elementos da primeira coluna;
c. Somar todos os elementos da terceira linha;
d. Somar os elementos da diagonal principal; e
e. Somar todos os elementos de índice par da segunda linha.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int l, c, matriz[4][4], opt, soma = 0;
    char option;

    srand(time(NULL));               // semente da funcao rand
    
    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c++){
            matriz[l][c] = rand() % 51;
        }
    }

    printf("Agora escolha uma das opcoes: \n \
    a. Imprimir todos os elementos da matriz \n \
    b. Somar os quadrados de todos os elementos da primeira coluna \n \
    c. Somar todos os elementos da terceira linha \n \
    d. Somar os elementos da diagonal principal \n \
    e. Somar todos os elementos de índice par da segunda linha. \n");
    do {
        scanf("%c", &option);

        if (option == 'a' || option == 'A') {
            opt = 1;
        } else if (option == 'b' || option == 'B') {
            opt = 2;
        } else if (option == 'c' || option == 'C') {
            opt = 3;
        } else if (option == 'd' || option == 'D') {
            opt = 4;
        } else if (option == 'e' || option == 'E') {
            opt = 5;
        } else {
            printf("Entre com uma opcao valida. \n");
        }
    } while (option < 1 && option > 5);

    switch (opt) {
        case 1:
            printf("Matriz: ");
            for(l = 0; l < 4; l++){
                for(c = 0; c < 4; c++){
                printf("%02i ", matriz[l][c]);
                }
                printf("\n");
            }
            break;
        case 2:
            printf("Elementos da primeira coluna: ");
            for(l = 0; l < 4; l++){
                printf("%02i ", matriz[l][1]);
                soma = soma + (matriz[l][1] * matriz[l][1]);
            }
            printf("\nSoma dos quadrados: %02i \n", soma);
            break;
        case 3:
            printf("Elementos da terceira linha: ");
            for(c = 0; c < 4; c++){
                printf("%02i ", matriz[3][c]);
                soma = soma + matriz[3][c];
            }
            printf("\nSoma dos elementos: %02i \n", soma);
            break;
        case 4:
            printf("Elementos da diagonal principal: ");
            for(l = 0; l < 4; l++){
                for(c = 0; c < 4; c++){
                    if (l == c) {
                        printf("%02i ", matriz[l][c]);
                        soma = soma + matriz[l][c];
                    }
                }
            }
            printf("\nSoma dos elementos: %02i \n", soma);
            break;
        case 5:
            printf("Elementos de indice par da segunda linha: ");
            for(c = 0; c < 4; c++){
                if (matriz[2][c] % 2 == 0) {
                    printf("%02i ", matriz[2][c]);
                    soma = soma + matriz[2][c];
                }
            }
            printf("\nSoma dos elementos: %02i \n", soma);
            break;        
    };

    return 0;
}