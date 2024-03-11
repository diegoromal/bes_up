/*
Escreva um programa que receba um caractere e verifique se ele é uma vogal ou uma consoante.
*/

#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    switch (letra)
    {
    case 'A' | 'a':
        printf("A letra %c é vogal!\n", letra);
        break;
    case 'E' | 'e':
        printf("A letra %c é vogal!\n", letra);
        break;
    case 'I' | 'i':
        printf("A letra %c é vogal!\n", letra);
        break;
    case 'O' | 'o':
        printf("A letra %c é vogal!\n", letra);
        break;
    case 'U' | 'u':
        printf("A letra %c é vogal!\n", letra);
        break;
    default:
        printf("A letra %c é consoante!\n", letra);
        break;
    }

    return 0;
}