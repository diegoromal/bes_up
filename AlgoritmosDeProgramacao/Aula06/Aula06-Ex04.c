/*
Escreva um algoritmo que leia o valor total devido por um cliente, quantidade
de dias de atraso e percentual de multa por dia de atraso. Aplique a porcentagem de multa
pelo atraso do pagamento e imprima o valor total devido.
*/

#include <stdio.h>

int main() {
    int dias_atraso;
    float valor_devido, percentual_multa, total_devido;

    printf("Informe o valor devido: ");
    scanf("%f", &valor_devido);

    printf("Informe os dias em atraso: ");
    scanf("%d", &dias_atraso);

    printf("Informe o percentual de multa: ");
    scanf("%f", &percentual_multa);

    total_devido = valor_devido + (dias_atraso * (valor_devido * (percentual_multa/100)));

    printf("O valor total devido é %f\n", total_devido);

    return 0;
}