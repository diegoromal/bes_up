/*
2 -  Leia dois números (a e b) do teclado, tal que a < b, e imprima a tabuada de cada um desses números. 
--> Por exemplo, se forem lidos os números 3 e 5, apresentar a tabuada do 3, do 4 e do 5 (cada uma de 1 a 10).
*/
#include <stdio.h>

int main() {

    int a, b, i, j;

    printf("Entre com o valor de a: ");
    scanf("%i", &a);

    do {
        printf("Entre com o valor de b (maior que a): ");
        scanf("%i", &b);

        if (b <= a) {
            printf("O valor de b precisa ser maior que a. \n");
        }
    } while (b <= a);
    
    for (i = a; i <= b; i++) {
        printf("Tabuada do %i: \n", i);

        for (j = 1; j <= 10; j++) {
            printf("%i x %i = %i \n", i, j, i * j);
        }

        printf("\n");
    }
    
    return 0;
}