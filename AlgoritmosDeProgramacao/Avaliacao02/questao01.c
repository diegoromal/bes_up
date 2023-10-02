#include <stdio.h>

int main(){

    int p1, p2, c1, c2;

    do {
        printf("Entre com o peso(p1) da crianca que ficara do lado esquerdo da gangorra: ");
        scanf("%i", &p1);
        if (p1 < 10 || p1 > 100) {
            printf("Por favor, entre com um peso entre 10KG e 100KG! \n");
        }
    } while (p1 < 10 || p1 > 100);

    do {
        printf("Entre com o peso(p2) da crianca que ficara do lado direito da gangorra: ");
        scanf("%i", &p2);
        if (p2 < 10 || p2 > 100) {
            printf("Por favor, entre com um peso entre 10KG e 100KG! \n");
        }
    } while (p2 < 10 || p2 > 100);

    do {
        printf("Entre com o comprimento do lado esquerdo(c1) da gangorra: ");
        scanf("%i", &c1);
        if (c1 < 10 || c1 > 100) {
            printf("Por favor, entre com um comprimento entre 10M e 100M! \n");
        }
    } while (c1 < 10 || c1 > 100);

    do {
        printf("Entre com o comprimento do lado direito(c2) da gangorra: ");
        scanf("%i", &c2);
        if (c2 < 10 || c2 > 100) {
            printf("Por favor, entre com um comprimento entre 10M e 100M! \n");
        }
    } while (c2 < 10 || c2 > 100);

    if (p1 * c1 == p2 * c2) {
        printf("Gangorra equilibrada! \n");
        printf("0");
    } else if (p1 * c1 > p2 * c2) {
        printf("Gangorra desequilibrada para a esquerda! \n");
        printf("-1");
    } else if (p1 * c1 < p2 * c2) {
        printf("Gangorra desequilibrada para a direita! \n");
        printf("1");
    }
    
    return 0;
}