/*
1. Escreva um programa que recebe nome completo, idade, salário, anos de
experiência na profissão e cargo em uma empresa de N funcionários. Calcule e mostre a
idade média dos funcionários, o nome do funcionário com maior experiência e o cargo do
funcionário com maior salário.
*/

#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
    int anosExperiencia;
    char cargo;
} funcionario ;


void cadastraFuncionario() {
    // int i;
    // funcionario f[i];

    int lixo;
    char continua;
    char nome[50];

    for (int i = 0; continua != 'n' && continua != 'N'; i++){
        printf("Entre com o nome do funcionário: ");
        scanf("%[^\n]s", nome);
        lixo = getchar();

        printf("Deseja inserir mais um funcionario? [S/N]: ");
        scanf("%c", &continua);
        printf("%c \n", continua);
        lixo = getchar();
    }
}

    // do {

    //     printf("Entre com o nome do funcionário: ");
    //     scanf("", nome);

    //     printf("Entre com a idade: ");
    //     scanf("%f", &f[])

    //     printf("Entre com o salario: ");

    //     printf("Entre com os anos de experiencia: ");

    //     printf("Entre com o cargo: ");


    //     char nome[50];
    // int idade;
    // float salario;
    // int anosExperiencia;
    // char cargo;

int main () {

    cadastraFuncionario();

    return 0;
}