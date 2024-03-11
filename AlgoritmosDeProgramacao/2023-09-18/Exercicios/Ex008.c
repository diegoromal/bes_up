/*
8 - Escreva um algoritmo para validar um lote de recibos bancários.
O programa deverá inicialmente solicitar o valor (soma) total do lote e o
número de recibos. A seguir deverá ler o valor de cada recibo calculando o
valor (soma) total. Após a digitação dos valores de todos os recibos, o
programa deverá imprimir as seguintes mensagens: “LOTE Ok” se a somainformada for igual a soma calculada;
“Diferença negativa” se a soma calculada for menor que a informada; e “Diferença positiva” se a soma calculada for
maior que a informada. Observação: O valor da diferença deve ser impresso
(caso exista).
*/
#include <stdio.h>

int main() {
    float valor_lote, soma_lote, valor_recibo;
    int num_recibos, cont;

    printf("Entre com o valor total do lote: R$");
    scanf("%f", &valor_lote);

    printf("Entre com a quantidade de recibos: ");
    scanf("%i", &num_recibos);

    printf("Agora vamos validar... \n");
    for (cont = 1; cont <= num_recibos; cont++) {
        printf("Entre com o valor do recibo %i: R$", cont);
        scanf("%f", &valor_recibo);
        soma_lote = soma_lote + valor_recibo;
    }

    if (soma_lote == valor_lote) {
        printf("Lote OK. \n");
    } else if (soma_lote < valor_lote) {
        printf("Diferença negativa de R$%.2f \n", valor_lote - soma_lote);
    } else if (soma_lote > valor_lote) {
        printf("Diferença positiva de R$%.2f \n", soma_lote - valor_lote);
    }

    return 0;
}