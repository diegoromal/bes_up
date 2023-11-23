/*
3. Escreva um programa que realiza o cadastro de veículos e calcula o valor do
IPVA.
a. Receba a quantidade de veículos que serão registrados.
b. Receba o modelo, o ano de fabricação, o valor do veículo, a placa e o
número RENAVAM (documento do veículo).
c. Receba o tipo de combustível que o veículo utiliza: gás, flex(gasolina/etanol)
ou gasolina. Defina o percentual em relação ao valor do veículo para o
cálculo do IPVA: 1% para veículos que utilizam gás, 2% para flex e 4% para
gasolina. Defina que os veículos com mais de 20 (vinte) anos de fabricação
estão isentos do IPVA.
d. Calcule o valor do IPVA.
e. Mostre o modelo, a placa, o RENAVAM e o valor do IPVA de cada veículo.
*/

#include <stdio.h>

typedef struct {
    char modelo[50];
    int anoFabricacao;
    float valor;
    char placa[10];
    long long renavam;
    char combustivel[15];
} Veiculo;

float calcularIPVA(Veiculo veiculo) {
    int anoAtual = 2023; // Ano corrente para cálculo de isenção de IPVA
    float percentualIPVA = 0;

    // Verificar isenção de IPVA para veículos com mais de 20 anos de fabricação
    if (anoAtual - veiculo.anoFabricacao > 20) {
        return 0;
    }

    // Definir percentual de acordo com o tipo de combustível
    if (strcmp(veiculo.combustivel, "gás") == 0) {
        percentualIPVA = 0.01; // 1% para veículos a gás
    } else if (strcmp(veiculo.combustivel, "flex") == 0) {
        percentualIPVA = 0.02; // 2% para veículos flex
    } else if (strcmp(veiculo.combustivel, "gasolina") == 0) {
        percentualIPVA = 0.04; // 4% para veículos a gasolina
    }

    // Calcular e retornar o valor do IPVA
    return veiculo.valor * percentualIPVA;
}

int main() {
    int n;

    printf("Digite a quantidade de veículos a serem registrados: ");
    scanf("%d", &n);

    Veiculo veiculos[n];

    // Receber informações dos veículos
    for (int i = 0; i < n; i++) {
        printf("\nVeículo %d:\n", i + 1);

        printf("Modelo: ");
        scanf(" %[^\n]s", veiculos[i].modelo);

        printf("Ano de Fabricação: ");
        scanf("%d", &veiculos[i].anoFabricacao);

        printf("Valor: ");
        scanf("%f", &veiculos[i].valor);

        printf("Placa: ");
        scanf(" %[^\n]s", veiculos[i].placa);

        printf("RENAVAM: ");
        scanf("%lld", &veiculos[i].renavam);

        printf("Tipo de Combustível (gás/flex/gasolina): ");
        scanf(" %[^\n]s", veiculos[i].combustivel);
    }

    // Calcular e mostrar o valor do IPVA para cada veículo
    printf("\nValores do IPVA:\n");
    for (int i = 0; i < n; i++) {
        float valorIPVA = calcularIPVA(veiculos[i]);
        printf("Veículo %d - Modelo: %s, Placa: %s, RENAVAM: %lld, Valor IPVA: %.2f\n", i + 1, veiculos[i].modelo, veiculos[i].placa, veiculos[i].renavam, valorIPVA);
    }

    return 0;
}
