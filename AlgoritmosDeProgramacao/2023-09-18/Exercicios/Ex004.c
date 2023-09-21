/*
4 - Escreva um algoritmo que encontre o quinto número maior que
1000 cuja divisão por 11 tenha resto 5.
*/

#include <stdio.h>

int main() {

    int i, c, num;

    for (i = 1000; c <= 5; i++) {
        if (i % 11 == 5){
            num = i;
            c++;
        }
    }
    printf("O numero e %i \n", num);
    
    return 0;
}