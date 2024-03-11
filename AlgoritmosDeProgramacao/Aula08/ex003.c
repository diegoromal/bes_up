/*
Escreva um programa que receba um número inteiro de 1 a 7 e exiba o dia da semana correspondente
*/

#include <stdio.h>

int main() {
    int number;

    printf("Digite um número de 1 a 7: ");
    scanf("%i", &number);

    switch (number)
    {
    case 1:
        printf("O dia é: Domingo\n");
        break;
    case 2:
        printf("O dia é: Segunda\n");
        break;
    case 3:
        printf("O dia é: Terça\n");
        break;
    case 4:
        printf("O dia é: Quarta\n");
        break;
    case 5:
        printf("O dia é: Quinta\n");
        break;
    case 6:
        printf("O dia é: Sexta\n");
        break;
    case 7:
        printf("O dia é: Sabado\n");
        break;    
    default:
        printf("Número inválido!\n");
        break;
    }
    return 0;
}