/*
Sabe-se que, para iluminar de maneira correta os cômodos de uma casa,
para cada m² deve-se usar 18W de potência. Faça um programa que recebe as duas
dimensões de um cômodo (em metros), calcule e mostre a sua área (em m²) e a potência
de iluminação em watts que deverá ser usada.
*/

#include <stdio.h>

#define POT 18.0

int main() {
    float dim1, dim2, area, pot_ilum;

    printf("Informe a dimensão 1 do cômodo: ");
    scanf("%f", &dim1);

    printf("Informe dimensão 2 do cômodo: ");
    scanf("%f", &dim2);

    area = dim1 * dim2;

    pot_ilum = area * POT;

    printf("Para a área %f será necessário usar %fW\n", area, pot_ilum);

    return 0;
}