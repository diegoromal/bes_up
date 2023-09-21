/*
7 - Crie um algoritmo que leia os limites inferior e superior de um
intervalo e imprima todos os números pares no intervalo aberto e seu
somatório. Suponha que os números digitados são um intervalo crescente.
Exemplo:
● Limite inferior: 3
● Limite superior: 12
● Saída: 4 6 8 10
● Soma: 28
*/
#include <stdio.h>

int main() {

    int inf, sup, cont, soma;

    do {
        printf("Entre com o limite inferior: ");
        scanf("%i", &inf);
        
        printf("Entre com o limite superior: ");
        scanf("%i", &sup);

        if (sup <= inf) {
            printf("O limite superior precisa ser maior que o inferior.\n");
        }

    } while (sup <= inf);
    
    printf("Saída: ");
    for (cont = inf + 1; cont < sup; cont++) {
        if (cont % 2 == 0) {
            printf("%i ", cont);
            soma = soma + cont;
        }
    }

    printf("\nSoma dos pares: %i \n", soma);

    return 0;
}