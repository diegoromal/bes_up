#include <stdio.h>

int main() {

    float salario_julius_01, salario_julius_02, salario_rochelle, soma_salarios = 0.0, soma_despesas = 0.0, despesas;

    printf("Entre com o 1 salario de Julius: R$");
    scanf("%f", &salario_julius_01);
    printf("Entre com o 2 salario de Julius: R$");
    scanf("%f", &salario_julius_02);
    printf("Entre com o salario de Rochele: R$");
    scanf("%f", &salario_rochelle);
    soma_salarios = salario_julius_01 + salario_julius_02 + salario_rochelle;

    do {
        printf("Entre com uma despesa: R$");
        scanf("%f", &despesas);
        soma_despesas = soma_despesas + despesas;
        if ((soma_salarios / 2) > soma_despesas){
            printf("Eu nao preciso disso, meu marido tem dois empregos!\n");
            printf("Despesas: %.2f\n", soma_despesas);
        } else if (soma_salarios < soma_despesas) {
            printf("Ei carinha que mora logo ali, me passa um dolar!\n");
        } else if ((soma_salarios / 2) <= soma_despesas) {
            printf("Se você nao comprar nada, o desconto e bem maior!\n");
            printf("Despesas: %.2f\n", soma_despesas);
        }
    }  while (soma_salarios >= soma_despesas);

    return 0;
}