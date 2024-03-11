/*
1. Crie um programa que cadastre em registros o nome, o peso e a altura de 5 esportistas.
Apresente na tela os dados de cada esportista e seu IMC (deve haver um campo para o IMC no registro).
*/
#include <stdio.h>

typedef struct {
    char nome[50];
    float peso;
    float altura;
    float imc;
} atletas;

int main() {
    atletas a[5];
    int lixo;

    for (int i = 0; i < 5; i++) {
        printf("Cadastro do atleta %i \n", i);

        // fflush(stdin); // limpeza de buffer do teclado antes de ler cada string
        printf("Digite o nome: ");
        scanf("%[^\n]s", a[i].nome);
        lixo = getchar();

        printf("Digite o peso e a altura: ");
        scanf("%f %f", &a[i].peso, &a[i].altura);

        a[i].imc = a[i].peso / (a[i].altura * a[i].altura);

        printf("IMC: %.1f \n", a[i].imc);
    }

    return 0;
}