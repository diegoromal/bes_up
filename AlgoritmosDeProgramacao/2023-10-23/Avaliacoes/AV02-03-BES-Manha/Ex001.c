/*
Questão 01. [0.3 pontos] (Beecrowd | 1134) Um posto de combustíveis deseja
determinar qual de seus produtos tem a preferência de seus clientes. Escreva um
programa que leia a quantidade N de abastecimentos a serem registrados. Em seguida,
leia do teclado o tipo de combustível utilizado em cada abastecimento, sendo: 1 - etanol, 2
- gasolina, 3 - diesel e armazene em um vetor de tamanho N. Caso o usuário informe um
código inválido (fora da faixa de 1 a 3), deve ser solicitado um novo código (até que ele
seja válido). Após o preenchimento dos dados dos abastecimentos no vetor, você deve
imprimir a quantidade de clientes que abasteceram com cada tipo de combustível.
*/
#include <stdio.h>

int main() {
    int c, qtde_abastecimentos, option, somas[4] = {0, 0, 0, 0};
    printf("Informe a quantidade de abastecimentos que serao registrados: \n");
    scanf("%i", &qtde_abastecimentos);

    for (c = 1; c <= qtde_abastecimentos; c++){
        do {
            printf("Informe o combustivel utilizado no abastecimento %i: \n\
            1 - Etanol \n\
            2 - Gasolina \n\
            3 - Diesel \n", c);
            scanf("%i", &option);

            if (option < 1 || option > 3) {
                printf("Entre com um valor valido. \n");
            } else {
                somas[option] = somas[option] + 1;
            }
        } while (option < 1 || option > 3);
    }

    printf("Abastecimentos por tipo: \n");
    printf("Etanol: %i \n", somas[1]);
    printf("Gasolina: %i \n", somas[2]);
    printf("Diesel: %i \n", somas[3]);

    return 0;
}