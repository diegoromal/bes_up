#include <stdio.h>

int main() {
    int cont, gols_tamarindo, gols_groselha, pontos_tamarindo, pontos_groselha;

    for (cont = 1; cont <= 3; cont++) {
        printf("=*=*=*=*=*=\nJogo %i\n=*=*=*=*=*=\n", cont);
        printf("Entre com os gols do time Tamarindo: ");
        scanf("%i", &gols_tamarindo);
        printf("Entre com os gols do time Groselha: ");
        scanf("%i", &gols_groselha);
        if (gols_tamarindo == gols_groselha) {
            printf("Empate!\n");
            pontos_tamarindo = pontos_tamarindo + 1;
            pontos_groselha = pontos_groselha + 1;
        } else if (gols_tamarindo > gols_groselha) {
            printf("Vitoria de Tamarindo.\n");
            pontos_tamarindo = pontos_tamarindo + 3;
        } else if (gols_tamarindo < gols_groselha) {
            printf("Vitoria de Groselha.\n");
            pontos_groselha = pontos_groselha + 3;
        }
    }

    if (pontos_tamarindo == pontos_groselha) {
        printf("Pontos: %i - Nao ha vencedor!\n", pontos_tamarindo);
    } else if (pontos_tamarindo > pontos_groselha) {
        printf("Pontos: %i - Vitoria de Tamarindo.\n", pontos_tamarindo);
    } else if (pontos_tamarindo < pontos_groselha) {
        printf("Pontos: %i - Vitoria de Groselha.\n", pontos_groselha);
    }

    return 0;
}