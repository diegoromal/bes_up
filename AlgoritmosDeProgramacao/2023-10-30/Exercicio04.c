/*
4. Escreva uma função que recebe um número inteiro como parâmetro e veriﬁca se ele é um número
perfeito. Um número perfeito é aquele cuja soma de seus divisores (excluindo ele mesmo) é igual a
ele. Em seguida, chame a função para veriﬁcar se um número fornecido pelo usuário é perfeito.
*/
#include <stdio.h>

int somaDivisores(int num);
void imprimeDivisores(int result, int num);

void imprimeDivisores(int result, int num) {
    if (result == num) {
        printf("%i e um numero perfeito! \n", num);
    } else {
        printf("%i nao e um numero perfeito! \n", num);
    }
}

int main() {
    int num, result;

    printf("Digite um numero inteiro: ");
    scanf("%i", &num);

    result = somaDivisores(num);

    imprimeDivisores(result, num);

    return 0;
}

int somaDivisores(int num) {
    int soma = 0;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("%i e divisivel por %i \n", num, i);
            soma += i;
        }
    }

    printf("Soma dos divisores: %i \n", soma);

    return soma;
}