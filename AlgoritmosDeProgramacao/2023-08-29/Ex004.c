/*
Em uma certa papelaria, até 100 folhas, a cópia do xerox custa
R$ 0,25 e, acima de 100 folhas, cada cópia adicional custa R$ 0,20. Escreva
um algoritmo que dado o número total de cópias, informe o valor a ser pago
*/

#include <stdio.h>

int main() {
    int folhas, dif_folhas;
    float total;

    printf("Digite o número de cópias: ");
    scanf("%i", &folhas);

    if (folhas <= 100){
        total = folhas * 0.25;
        printf("O valor à ser pago é: R$%.2f \n", total);
    } else if (folhas > 100) {
        dif_folhas = folhas - 100;
        total = (100 * 0.25) + (dif_folhas * 0.20);
        printf("O valor à ser pago é: R$%.2f \n", total);
    } else {
        printf("Opção inválida. \n");
    }

    return 0;
}