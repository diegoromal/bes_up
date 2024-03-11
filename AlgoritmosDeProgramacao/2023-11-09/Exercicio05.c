/*
5. Faça um programa que calcula o custo de um churrasco para n
pessoas incluindo adultos e crianças. Cada criança maior do que 3 anos paga
a metade. O usuário define os itens do churrasco e seus respectivos preços. O
programa calcula a quantidade necessária de cada item conforme a
quantidade de pessoas. O programa também calcula quanto cada pessoa terá
que pagar para ir no churrasco. Suponha que cada adulto consome em média
250g de carne e 700ml de bebida. Suponha que as crianças consomem em
média a metade do que um adulto consome.
*/
#include <stdio.h>

// Função para calcular o custo total do churrasco
float calcularCustoChurrasco(int numAdultos, int numCriancas, float precoCarne, float precoBebida) {
    const float consumoCarneAdulto = 0.25; // 250g de carne por adulto
    const float consumoBebidaAdulto = 0.7; // 700ml de bebida por adulto
    const float fatorConsumoCriancas = 0.5; // As crianças consomem a metade dos adultos

    // Calcula o consumo total de carne e bebida
    float consumoTotalCarne = (numAdultos * consumoCarneAdulto) + (numCriancas * fatorConsumoCriancas * consumoCarneAdulto);
    float consumoTotalBebida = numAdultos * consumoBebidaAdulto;

    // Calcula o custo total do churrasco
    float custoTotal = (consumoTotalCarne * precoCarne) + (consumoTotalBebida * precoBebida);

    return custoTotal;
}

int main() {
    int numAdultos, numCriancas;
    float precoCarne, precoBebida;

    // Solicita ao usuário informações sobre o churrasco
    printf("Quantidade de adultos: ");
    scanf("%d", &numAdultos);

    printf("Quantidade de crianças: ");
    scanf("%d", &numCriancas);

    printf("Preço da carne por quilo: R$");
    scanf("%f", &precoCarne);

    printf("Preço da bebida por litro: R$");
    scanf("%f", &precoBebida);

    // Chama a função para calcular o custo total do churrasco
    float custoTotal = calcularCustoChurrasco(numAdultos, numCriancas, precoCarne, precoBebida);

    // Calcula quanto cada pessoa terá que pagar
    float custoPorPessoa = custoTotal / (numAdultos + numCriancas);

    // Exibe o resultado
    printf("\nCusto total do churrasco: R$%.2f\n", custoTotal);
    printf("Cada pessoa pagará: R$%.2f\n", custoPorPessoa);

    return 0;
}
