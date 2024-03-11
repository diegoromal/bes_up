#include <stdio.h>

int main() {

    float peso, altura, imc;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("---------------\n");
    printf("Peso: %f \nAltura: %f \n", peso, altura);
    printf("---------------\n");
    printf("Calculo do IMC: %f \n", imc);
    printf("---------------\n");

    return 0;
}