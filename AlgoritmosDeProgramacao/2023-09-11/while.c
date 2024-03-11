/*
Construir um programa que apresente a soma dos cem primeiros números naturais (1+2+3+ ... +98+99+100)
*/
#include <stdio.h>

int main () {

    int cont = 1, total = 0;
    
    while (cont <= 100)
    {
        total = total + cont;
        cont++;
    }
    printf("O total da soma e %i \n", total);

    return 0;
    
}