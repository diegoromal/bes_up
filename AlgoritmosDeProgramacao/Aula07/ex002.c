/*
Efetuar a leitura de um valor numérico inteiro positivo ou negativo
representado pela variável N e apresentar o valor lido como sendo positivo. Dica: se o valor
lido for menor que zero, ele deve ser multiplicado por -1.
*/

#include <stdio.h>

int main() {
    int n;
    
    printf("Digite um número inteiro: ");
    scanf("%i", &n);

    if (n < 0) {
        n = n * -1;
    }
    printf("O valor lido foi %i\n", n);

    return 0;
}