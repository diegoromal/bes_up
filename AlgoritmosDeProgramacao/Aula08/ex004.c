/*
Em uma loja de eletrodomésticos, as compras têm um preço à vista, ou acréscimo de 10 % para 
pagamentos em 2 vezes, ou ainda, acréscimo de 20% para pagamento em 3 vezes. O algoritmo 
deve pedir para o usuário digitar o valor da compra à vista e a opção de compra. O algoritmo deve 
exibir qual o valor final a ser pago
*/

#include <stdio.h>

int main() {
    float valor_compra, total_compra;
    int option;

    printf("Informe o valor da compra: R$");
    scanf("%f", &valor_compra);

    printf("Escolha a opção de pagamento: \n1-A vista \n2-Parcelado em 2x \n3-Parcelado em 3x\n");
    scanf("%i", &option);

    switch (option)
    {
    case 1:
        total_compra = valor_compra;
        printf("O valor total da compra é: R$%.2f\n", total_compra);
        break;
    case 2:
        total_compra = valor_compra * 1.10;
        printf("O valor total da compra é: R$%.2f\n", total_compra);
        break;
    case 3:
        total_compra = valor_compra * 1.20;
        printf("O valor total da compra é: R$%.2f\n", total_compra);
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}