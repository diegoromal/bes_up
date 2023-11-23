/*
4.
A ACME Inc., uma organização com mais de 1500 funcionários, está tendo
problemas de espaço em disco no seu servidor de arquivos. Para tentar resolver este
problema, o Administrador de Rede precisa saber qual o espaço em disco ocupado pelascontas dos usuários, e identificar os usuários com maior espaço ocupado. Através de um
aplicativo baixado da Internet, ele conseguiu gerar os seguintes dados:
alexandre
anderson
antonio
carlos
cesar
rosemary
456123789
1245698456
123456456
91257581
987458
789456125
Nesse arquivo, o primeiro campo corresponde ao login do usuário e o segundo ao
espaço em disco (em bytes) ocupado pelo seu diretório home. Escreva um programa em
linguagem C que, utilizando registros, armazene o número, o login e o espaço em disco
ocupado por cada usuário e gere a seguinte saída:
Nr.
Usuário
Espaço utilizado
% de uso
--------------------------------------------------------
1
alexandre
434.99 MB
16.85
2
anderson
1187.99 MB
46.02
3
antonio
117.73 MB
4.56
4
carlos
87.03 MB
3.37
5
cesar
0.94 MB
0.04
6
rosemary
752.88 MB
29.16
Espaço total ocupado: 2581.58 MB
Espaço médio ocupado: 430.26 MB
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_USUARIOS 1500
#define TAMANHO_KB 1024
#define TAMANHO_MB (TAMANHO_KB * TAMANHO_KB)

typedef struct {
    char login[20];
    long long espaco;
} Usuario;

int main() {
    int n;

    printf("Digite o número de usuários: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_USUARIOS) {
        printf("Número de usuários inválido.\n");
        return 1;
    }

    Usuario usuarios[MAX_USUARIOS];

    // Ler dados dos usuários
    for (int i = 0; i < n; i++) {
        printf("\nDigite o login do usuário %d: ", i + 1);
        scanf("%s", usuarios[i].login);

        printf("Digite o espaço ocupado (em bytes) para o usuário %d: ", i + 1);
        scanf("%lld", &usuarios[i].espaco);
    }

    // Calcular e exibir resultados
    printf("\nNr.\tUsuário\t\tEspaço utilizado\t%% de uso\n");
    printf("--------------------------------------------------------\n");

    long long espacoTotal = 0;
    for (int i = 0; i < n; i++) {
        espacoTotal += usuarios[i].espaco;
    }

    for (int i = 0; i < n; i++) {
        double espacoMB = (double)usuarios[i].espaco / TAMANHO_MB;
        double percentualUso = (double)usuarios[i].espaco / espacoTotal * 100;

        printf("%d\t%s\t\t%.2f MB\t\t%.2f\n", i + 1, usuarios[i].login, espacoMB, percentualUso);
    }

    double espacoTotalMB = (double)espacoTotal / TAMANHO_MB;
    double espacoMedioMB = espacoTotalMB / n;

    printf("\nEspaço total ocupado: %.2f MB\n", espacoTotalMB);
    printf("Espaço médio ocupado: %.2f MB\n", espacoMedioMB);

    return 0;
}
