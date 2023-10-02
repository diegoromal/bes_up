#include <stdio.h>

int main(){

    int option, placar_grifinoria = 0, placar_sonserina = 0, pdo_capturado;
    //1 - Grifinoria, 2 - Sonserina
    int equipe_vencedora;

    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*= \n");
    printf("Bem vindo ao jogo de Quadribol! \n");
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*= \n\n");

    do {
        printf("Escolha uma das opcoes a seguir: \n");
        printf("1 - Grifnoria faz um gol \n");
        printf("2 - Sonserina faz um gol \n");
        printf("3 - Grifnoria captura o pomo de ouro \n");
        printf("4 - Sonserina captura o pomo de ouro \n");
        printf("Opcao: ");
        scanf("%i", &option);

        if (option == 1) {
            placar_grifinoria = placar_grifinoria + 10;
        } else if (option == 2) {
            placar_sonserina = placar_sonserina + 10;
        } else if (option == 3) {
            placar_grifinoria = placar_grifinoria + 150;
            equipe_vencedora = 1;
            pdo_capturado = 1;
        } else if (option == 4) {
            placar_sonserina = placar_sonserina + 150;
            equipe_vencedora = 2;
            pdo_capturado = 1;
        } else {
            printf("Opcao invalida, tente novamente. \n");
        }

        if (pdo_capturado == 1) {
            printf("\nFim de jogo! Pomo de ouro capturado! \n");
        }

    } while (pdo_capturado == 0);

    printf("\nPlacar final: \n");
    printf("Grifinoria: %i \n", placar_grifinoria);
    printf("Sonserina: %i \n", placar_sonserina);
    if (equipe_vencedora == 1) {
        printf("\n~*~*~*~*~*~*~*~*~*~*~*~*~*~*~ \n");
        printf("Equipe vencedora: Grifinoria \n");
        printf("~*~*~*~*~*~*~*~*~*~*~*~*~*~*~ \n");
    } else if (equipe_vencedora == 2) {
        printf("\n~*~*~*~*~*~*~*~*~*~*~*~*~*~ \n");
        printf("Equipe vencedora: Sonserina \n");
        printf("~*~*~*~*~*~*~*~*~*~*~*~*~*~ \n");
    }

    return 0;
}