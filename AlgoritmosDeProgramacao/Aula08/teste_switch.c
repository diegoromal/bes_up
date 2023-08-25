/*

*/

#include <stdio.h>

int main() {
    int option;
    
    printf("Bem vindo!\nEscolha uma das opções:\n1 - Coxinha\n2 - Bauru\n3 - Pastel\n");
    scanf("%i", &option);

    switch (option)
    {
    case 1:
        printf("Você escolheu Coxinha!\n");
        break;
    case 2:
        printf("Você escolheu Bauru!\n");
        break;
    case 3:
        printf("Você escolheu Pastel!\n");
        break;
    default:
        printf("Comece denovo e escolha uma opção!\n");
        break;
    }
    return 0;
}