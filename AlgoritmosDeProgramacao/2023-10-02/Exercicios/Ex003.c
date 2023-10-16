/*
Escreva um programa que receba do teclado uma string de até 200 caracteres e um determinado 
caractere, e devolva a localização da última ocorrência desse caractere na string. Se o caractere 
não aparecer na string, o programa deve exibir uma mensagem informando isso.
28
*/

#include <stdio.h>
#include <string.h>

int main() {

    int tamanho, i, ultimo_indice = 0;
    char palavra[200], letra;

    printf("Digite uma string: ");
    fgets(palavra, 200, stdin);

    printf("Agora digite um caractere: ");
    scanf("%c", &letra);

    tamanho = strlen(palavra);
    printf("Tamanho da string: %i \n", tamanho);
    
    for (i = 0; i < tamanho; i++) {
        if (palavra[i] == letra) {
            printf("Letra %c encontrada no indice %i \n", letra, i);
            ultimo_indice = i;
        }
    }
    if (ultimo_indice != 0) {
        printf("O ultimo indice onde %c foi encontrada é %i! \n", letra, ultimo_indice);
    } else {
        printf("Letra %c não encontrada na string! \n", letra);
    }
    
    return 0;
}