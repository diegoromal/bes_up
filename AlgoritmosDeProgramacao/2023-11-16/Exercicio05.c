/*
5.
Um estacionamento localizado no centro da cidade possui capacidade para 10
veículos. Para a primeira hora, é cobrado o valor de R$ 5,00 e é cobrado o valor de R$ 2,00
a cada 15 minutos extras.
Com base no exposto, escreva um programa que apresente ao atendente do
estacionamento o seguinte menu:
# Estacionamento do Chaves #
[1] Entrada de veículo
[2] Saída de veículo
[3] Listagem de veículos
[4] Sair
Para a opção 1 (Entrada de veículo), primeiramente deve ser verificada a existência
de vagas no estacionamento. Caso não existam vagas disponíveis, a mensagem
"Estacionamento lotado!" deve ser mostrada ao atendente do estacionamento.
Estacionamento lotado!Caso existam vagas disponíveis no estacionamento, deve ser solicitado a placa do
veículo e o horário da entrada do veículo no estacionamento no formato hh:mm. Após a
inclusão desses dados, deve ser mostrada a mensagem "Veículo cadastrado com sucesso!"
e a quantidade de vagas disponíveis no estacionamento.
Informe a placa: AAA-1111
Informe o horário de entrada: 18:20
Veículo cadastrado com sucesso!
Vagas disponíveis: 9
Para a opção 2 (Saída de veículo), deve ser solicitado a placa do veículo e o horário
da saída do veículo do estacionamento no formato hh:mm. Após a inclusão desses dados,
deve ser mostrado um recibo com as informações sobre a estadia do veículo e a quantidade
de vagas disponíveis no estacionamento.
Informe a placa do veículo: AAA-1111
Informe o horário de saida: 19:35
-----------------------------
Recibo
-----------------------------
Placa: AAA-1111
Entrada: 18:20
Saída: 19:35
Tempo total (em minutos): 75
Total a pagar: R$ 7.00
-----------------------------
Vagas disponíveis: 10
Para a opção 3 (Listagem de veículos), deve ser mostrado um relatório no seguinte formato:
Nr. vaga
Placa
Entrada
-------------------------------------
1
AAA-1111
18:20
2
BBB-2222
19:07
3
CCC-3333
19:43
-------------------------------------
Vagas disponíveis: 7
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CAPACIDADE_ESTACIONAMENTO 10
#define VALOR_PRIMEIRA_HORA 5.00
#define VALOR_HORA_ADICIONAL 2.00

typedef struct {
    char placa[10];
    char entrada[6]; // Formato hh:mm
} Veiculo;

void entradaVeiculo(Veiculo estacionamento[], int *vagasDisponiveis);
void saidaVeiculo(Veiculo estacionamento[], int *vagasDisponiveis);
void listarVeiculos(Veiculo estacionamento[], int vagasDisponiveis);

int main() {
    Veiculo estacionamento[CAPACIDADE_ESTACIONAMENTO];
    int vagasDisponiveis = CAPACIDADE_ESTACIONAMENTO;
    int opcao;

    do {
        printf("# Estacionamento do Chaves #\n");
        printf("[1] Entrada de veículo\n");
        printf("[2] Saída de veículo\n");
        printf("[3] Listagem de veículos\n");
        printf("[4] Sair\n");

        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                entradaVeiculo(estacionamento, &vagasDisponiveis);
                break;
            case 2:
                saidaVeiculo(estacionamento, &vagasDisponiveis);
                break;
            case 3:
                listarVeiculos(estacionamento, vagasDisponiveis);
                break;
            case 4:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}

void entradaVeiculo(Veiculo estacionamento[], int *vagasDisponiveis) {
    if (*vagasDisponiveis == 0) {
        printf("Estacionamento lotado!\n");
        return;
    }

    printf("Informe a placa do veículo: ");
    scanf("%s", estacionamento[*vagasDisponiveis - 1].placa);

    printf("Informe o horário de entrada (hh:mm): ");
    scanf("%s", estacionamento[*vagasDisponiveis - 1].entrada);

    printf("Veículo cadastrado com sucesso!\n");
    (*vagasDisponiveis)--;
    printf("Vagas disponíveis: %d\n", *vagasDisponiveis);
}

void saidaVeiculo(Veiculo estacionamento[], int *vagasDisponiveis) {
    if (*vagasDisponiveis == CAPACIDADE_ESTACIONAMENTO) {
        printf("Estacionamento vazio! Nenhum veículo para saída.\n");
        return;
    }

    char placa[10];
    char saida[6]; // Formato hh:mm
    int tempoTotal, valorPagar;

    printf("Informe a placa do veículo: ");
    scanf("%s", placa);

    printf("Informe o horário de saída (hh:mm): ");
    scanf("%s", saida);

    // Procurar o veículo no estacionamento
    int i;
    for (i = 0; i < CAPACIDADE_ESTACIONAMENTO; i++) {
        if (strcmp(estacionamento[i].placa, placa) == 0) {
            break;
        }
    }

    if (i == CAPACIDADE_ESTACIONAMENTO) {
        printf("Veículo não encontrado no estacionamento.\n");
        return;
    }

    // Calcular tempo total e valor a pagar
    tempoTotal = (atoi(saida) - atoi(estacionamento[i].entrada)) + ((atoi(saida + 3) - atoi(estacionamento[i].entrada + 3)) / 60);
    valorPagar = VALOR_PRIMEIRA_HORA + ((tempoTotal > 60) ? ((tempoTotal - 60) / 15) * VALOR_HORA_ADICIONAL : 0);

    // Exibir recibo
    printf("-----------------------------\n");
    printf("Recibo\n");
    printf("-----------------------------\n");
    printf("Placa: %s\n", estacionamento[i].placa);
    printf("Entrada: %s\n", estacionamento[i].entrada);
    printf("Saída: %s\n", saida);
    printf("Tempo total (em minutos): %d\n", tempoTotal);
    printf("Total a pagar: R$ %.2f\n", (float)valorPagar);
    printf("-----------------------------\n");

    // Liberar vaga
    (*vagasDisponiveis)++;
    printf("Vagas disponíveis: %d\n", *vagasDisponiveis);

    // Remover veículo do estacionamento
    for (int j = i; j < CAPACIDADE_ESTACIONAMENTO - 1; j++) {
        strcpy(estacionamento[j].placa, estacionamento[j + 1].placa);
        strcpy(estacionamento[j].entrada, estacionamento[j + 1].entrada);
    }

    // Limpar última vaga
    strcpy(estacionamento[CAPACIDADE_ESTACIONAMENTO - 1].placa, "");
    strcpy(estacionamento[CAPACIDADE_ESTACIONAMENTO - 1].entrada, "");
}

void listarVeiculos(Veiculo estacionamento[], int vagasDisponiveis) {
    printf("\nNr. vaga\tPlaca\t\tEntrada\n");
    printf("-------------------------------------\n");

    for (int i = 0; i < CAPACIDADE_ESTACIONAMENTO; i++) {
        printf("%d\t\t%s\t\t%s\n", i + 1, estacionamento[i].placa, estacionamento[i].entrada);
    }

    printf("-------------------------------------\n");
    printf("Vagas disponíveis: %d\n", vagasDisponiveis);
}
