/*
2 - Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles
estão nos seguintes intervalos: [0,25], [26,50], [51,75] e [76,100]. A entrada de dados deve terminar
quando for lido um número negativo.
*/

#include <stdio.h>

int main() {

    int num, int_01=0, int_02=0, int_03=0, int_04=0;

    do {
        printf("Digite um número [Negativo para parar.]: ");
        scanf("%i", &num);
        if (num >= 0 && num <= 25) {
            int_01++;
        } else if (num >= 26 && num <= 50) {
            int_02++;
        } else if (num >= 51 && num <= 75) {
            int_03++;
        } else if (num >= 76 && num <= 100) {
            int_04++;
        }
    } while (num >= 0);

    printf("Quantidade nos intervalos:\
            \n[0,25]: %i\
            \n[26,50]: %i\
            \n[51,75]: %i\
            \n[76,100]: %i\n", int_01, int_02, int_03, int_04);

    return 0;
}