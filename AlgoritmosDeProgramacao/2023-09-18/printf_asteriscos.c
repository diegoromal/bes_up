#include <stdio.h>

int main() {

    int cont, i;

    cont = 1;

    while (cont != 0) {
        printf("Entre com o numero de * que deseja ver [0 - Parar]: ");
        scanf("%i", &cont);

        if (cont < 0) {
            printf("Número inválido, tente novamente.");
        } else if (cont == 0) {
            printf("Você escolheu sair.");
        } else {
            for (i = 1; i <= cont; i++) {
            printf("*");
            }
        }
        printf("\n");
    }
    
    return 0;
}