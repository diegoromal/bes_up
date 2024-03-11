/*
Construa um algoritmo que funcione como uma calculadora simples. A calculadora deve realizar as 
operações de soma (+), subtração (-), multiplicação (*) e divisão (/). O usuário deve informar ao 
algoritmo dois operandos (dois números) e a operação. O algoritmo deve retornar o resultado da 
operação ou uma mensagem de erro caso o usuário solicite uma operação não definida
*/

#include <stdio.h>

int main() {
    float num1, num2, res;
    int option;

    printf("Informe o primeiro número: ");
    scanf("%f", &num1);

    printf("Informe o segundo número: ");
    scanf("%f", &num2);

    printf("Escolha uma operação: \n1-Adição \n2-Subtração \n3-Multiplicação \n4-Divisão\n");
    scanf("%i", &option);

    switch (option)
    {
    case 1:
        res = num1 + num2;
        printf("Adição: %.1f + %.1f = %.1f\n", num1, num2, res);
        break;
    case 2:
        res = num1 - num2;
        printf("Subtração: %.1f - %.1f = %.1f\n", num1, num2, res);
        break;
    case 3:
        res = num1 * num2;
        printf("Multiplicação: %.1f * %.1f = %.1f\n", num1, num2, res);
        break;
    case 4:
        res = num1 / num2;
        printf("Divisão: %.1f / %.1f = %.1f\n", num1, num2, res);
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }
    return 0;
}