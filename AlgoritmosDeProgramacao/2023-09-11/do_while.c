#include <stdio.h>

int main() {

    int number, result, cont;

    printf("Entre com um número: \n");
    scanf("%i", &number);

    do {
        result = number * cont;
        printf("%i x %i = %i \n", number, cont, result);
        cont++;
    } while (cont <= 10);
    

    return 0;
}