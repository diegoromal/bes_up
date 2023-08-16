/*
Antes de o racionamento de energia ser decretado, quase ninguém falava em
quilowatts; mas, agora, todos incorporaram essa palavra em seu vocabulário. Sabendo-se
que 100 quilowatts de energia custa um sétimo do salário mínimo, faça um programa que
receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência e
imprima:
● o valor em reais de cada quilowatt;
● o valor em reais a ser pago.
*/

#include <stdio.h>

int main() {

    float salario_minimo, qtde_kw, valor_kw, valor_pago;

    printf("Entre com o valor do salário mínimo: R$");
    scanf("%f", &salario_minimo);

    printf("Entre com a quantidade de quilowatts gasta pela residência: ");
    scanf("%f", &qtde_kw);

    valor_kw = (salario_minimo / 7) / 100;

    valor_pago = qtde_kw * valor_kw;

    printf("Com o valor por quilowatt de R$%.2f, a conta será de R$%.2f.\n", valor_kw, valor_pago);


    return 0;
}