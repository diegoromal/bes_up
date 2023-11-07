/*
 Leia dois números inteiros a e b do teclado e imprima a sequência de valores entre esses números
 O programa deve ser executado até que o usuário decida parar.
 Escreva uma função para leitura de a e b do teclado e um procedimento para exibir a sequência denúmeros.
 */

#include <stdio.h>

int leValor() {
    int num;
    
    do {
        printf("Entre com um valor inteiro: ");
        scanf("%i", &num);
    } while (num <= 0);

    return num;
}

int imprimeSequencia(int a, int b) {
    int i;
    if (a < b) {
        for (i = a; i <= b; i++) {
            printf("%i ", i);
        }
    } else if (a > b) {
        for (i = b; i <= a; i++) {
            printf("%i ", i);
        }
    } else {
        printf("a e b são iguais!\n");
    }
    printf("\n");
}

int main() {
    int a, b, s;

    do {
        a = leValor();
        b = leValor();

        imprimeSequencia(a, b);

        printf("Repetir? (0 para parar): ");
        scanf("%i", &s);
    } while (s != 0);
    
    return 0;
}