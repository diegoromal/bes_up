/*
Com base na tabela abaixo, escreva um
programa que leia o código de um item e a quantidade deste item. A seguir,
calcule e mostre o valor da conta a pagar.
CódigoEspecificaçãoPreço
1 | Cachorro-quente | R$12,00
2 | X-Salada        | R$15,50
3 | X-Bacon         | R$ 18,00
4 | Torrada simples | R$8,00
5 | Refrigerante    | R$4,50
*/

#include <stdio.h>

int main() {

    float cachorro_quente = 12.00, x_salada = 15.50, x_bacon = 18.00, torrada_simples = 8.00, refrigerante = 4.50, total;
    int option, qtde;

    printf("Escolha uma das opções à seguir: \
            \n1 - Cachorro Quente - R$%.2f\
            \n2 - X-Salada - R$%.2f\
            \n3 - X-Bacon - R$%.2f\
            \n4 - Torrada Simples - R$%.2f\
            \n5 - Refrigerante - R$%.2f\n", \
            cachorro_quente, x_salada, x_bacon, torrada_simples, refrigerante);
    scanf("%i", &option);

    printf("Entre com a quantidade: ");
    scanf("%i", &qtde);

    switch(option){
        case 1:
            total = qtde * cachorro_quente;
            break;
        case 2:
        total = qtde * x_salada;
            break;
        case 3:
            total = qtde * x_bacon;
            break;
        case 4:
            total = qtde * torrada_simples;
            break;
        case 5:
            total = qtde * refrigerante;
            break;
        default:
            printf("Opção inválida, tente novamente");
            break;
    }
    printf("O valor total à pagar é: R$%.2f\n", total);

    return 0;
}