/*
1 - Elaborar um programa que apresente como resultado um número positivo,
mesmo que a entrada tenha sido feita com um valor negativo.
Use um procedimento com passagem de valor por referência.
*/

// multiplica por -1 
#include <stdio.h>

void tornarPositivo(int *num) {
    if (*num < 0) {
        *num = *num * (-1);
    }
}

int main() {
    int num;
    
    printf ("Digite um número: ");
    scanf("%i", &num);

    tornarPositivo(&num);

    printf("O número positivo é %i \n", num);

    return 0;
}