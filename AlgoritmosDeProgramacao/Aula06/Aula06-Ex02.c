/*
Faça um programa em para calcular e imprimir o valor do volume de uma lata de óleo,
utilizando a fórmula: volume = PI * raio² * altura
*/

#include <stdio.h>

#define PI 3.1415 // constante

int main() {
    
    float volume, raio, altura;

    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    printf("Informe o valor da altura: ");
    scanf("%f", &altura);

    volume = PI * (raio * raio) * altura;

    printf("O resultado é %f\n", volume);

    return 0;
}