#include <stdio.h>

int maiorvalor(int a, int b, int c) {
    int maior;

    maior = a;

    if (b > maior) {
        maior = b;
    }

    if (c > maior) {
        maior = c;
    }

    return maior;
}

int lerInteiro() {
    int num;

    printf("Entre com um numero positivo: ");
    scanf("%i", &num);

    return num;
}

int main() {
    int a, b, c, maior;

    a = lerInteiro();
    b = lerInteiro();
    c = lerInteiro();

    maior = maiorvalor(a, b, c);

    printf("O maior valor é: %i \n", maior);

    return 0;
}