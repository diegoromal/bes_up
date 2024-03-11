/*
2. Crie um programa que leia um número de 1 a 12 e imprima o nome do mês correspondente.
*/

#include <stdio.h>

void imprimeMes(int mes) {
    switch (mes) {
        case 1:
            printf("Janeiro \n");
            break;
        case 2:
            printf("Fevereiro \n");
            break;
        case 3:
            printf("Marco \n");
            break;
        case 4:
            printf("Abril \n");
            break;
        case 5:
            printf("Maio \n");
            break;
        case 6:
            printf("Junho \n");
            break;
        case 7:
            printf("Julho \n");
            break;
        case 8:
            printf("Agosto \n");
            break;
        case 9:
            printf("Setembro \n");
            break;
        case 10:
            printf("Outubro \n");
            break;
        case 11:
            printf("Novembro \n");
            break;
        case 12:
            printf("Dezembro \n");
            break;
    }
}

int main() {
    int mes;

    do {
        printf("Digite um número entre 1 e 12: ");
        scanf("%i", &mes);

        if (mes < 1 || mes > 12) {
            printf("Entre com um valor entre 1 e 12! \n");
        }
    } while (mes < 1 || mes > 12);

    imprimeMes(mes);

    return 0;
}