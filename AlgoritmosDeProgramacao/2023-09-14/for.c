#include <stdio.h>

int main() {

    int i, num, total;

    printf("Qual o fatorial a ser calculado? ");
    scanf("%i", &num);

    // for (i = num; i >= 1; i--){ //decrescente
    for (i = 1; i <= num; i++){
        total = total * i;
    }

    printf("%i! é %i \n", num, total);

    return 0;
}