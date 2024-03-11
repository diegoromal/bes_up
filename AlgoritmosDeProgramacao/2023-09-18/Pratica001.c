/*
1 - Dado um valor n inteiro positivo lido do teclado, exibir n linhas em que cada linha contém tantos 
asteriscos (*) quanto for o número da linha. 
--> Por exemplo, lendo o número 3, a linha 1 deve exibir “*”, a linha 2 deve exibir “**” e a linha 3 
deve exibir “***”.
*/
#include <stdio.h>

int main() {

    int cont = 0, i;
    
    printf("Entre com um numero inteiro positivo: ");
    scanf("%i", &cont);

    if (cont <= 0) {
        printf("Numero invalido, tente novamente.");
    } else {
        for (i = 1; i <= cont; i++) {
            printf("%i \n", i);
        }
    }

    return 0;
}