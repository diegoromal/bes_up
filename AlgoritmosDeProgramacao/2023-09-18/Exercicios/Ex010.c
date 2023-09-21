/*
10 - Crie um algoritmo que ajude o DETRAN a saber o total de
recursos que foram arrecadados com a aplicação de multas de trânsito. O
algoritmo deve ler as seguintes informações para cada motorista:
● O número da carteira de motorista (de 1 a 4327)
● Número de multas;
● Valor da cada uma das multas.
Deve ser impresso o valor da dívida de cada motorista e, ao final da
leitura, o total de recursos arrecadados (somatório de todas as multas). O
algoritmo deverá imprimir também o número da carteira do motorista que
obteve o maior número de multas.
*/
#include <stdio.h>

int main() {

    int num_cnh, num_multa, total_multas, c1, c2;
    float valor_multa, soma_multas, maior_multa, maior_divida;

    for (c1 = 1; c1 <= 3; c1++) {
        printf("Entre com o total de multas do motorista %i: ", c1);
        scanf("%i", &total_multas);
        
        for (c2 = 1; c2 <= total_multas; c2++) {
            printf("Entre com o valor da multa %i: R$", c2);
            scanf("%f", &valor_multa);
            soma_multas = soma_multas + valor_multa;
        }
        
        printf("Motorista %i, valor da divida: R$%.2f \n", c1, soma_multas);
        
        if (soma_multas > maior_divida) {
            maior_divida = soma_multas;
            num_cnh = c1;
        }
        
        soma_multas = 0;
    }

    printf("A maior divida foi R$%.2f do motorista %i \n", maior_divida, num_cnh);

    return 0;
}