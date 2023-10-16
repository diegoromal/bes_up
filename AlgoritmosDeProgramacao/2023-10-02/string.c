#include <stdio.h>

int main () {

    char nome[101], cpf[15];

    printf("Digite seu nome: ");
    fgets(nome, 101, stdin);
    // scanf("%s", nome);

    printf("Digite seu cpf [xxx.xxx.xxx-xx]: ");
    scanf("%14s", cpf);

    printf("O nome foi %s", nome);
    printf("O cpf foi %s \n", cpf);

    return 0;
}