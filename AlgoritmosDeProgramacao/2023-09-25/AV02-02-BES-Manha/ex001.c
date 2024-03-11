#include <stdio.h>

int main() {
    int colocacao;

    do {
        printf("Entre com a colocacao: ");
        scanf("%i", &colocacao);

        if(colocacao < 1 || colocacao > 100) {
            printf("Entre com um numero entre 1 e 100. \n");
        }
    } while (colocacao < 1 || colocacao > 100);

    if (colocacao == 1) {
        printf("Top 1. \n");
    } else if (colocacao <= 3) {
        printf("Top 3. \n");
    } else if (colocacao <= 5) {
        printf("Top 5. \n");
    } else if (colocacao <= 10) {
        printf("Top 10. \n");
    } else if (colocacao <= 25) {
        printf("Top 25. \n");
    } else if (colocacao <= 50) {
        printf("Top 50. \n");
    } else if (colocacao <= 100) {
        printf("Top 100. \n");
    }
    
    return 0;
}