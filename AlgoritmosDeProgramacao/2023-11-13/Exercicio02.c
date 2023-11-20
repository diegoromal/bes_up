/*
2. Crie um programa que armazene o resultado de 5 jogos realizados em uma rodada do campeonato
brasileiro de futebol. Para cada jogo, será necessário armazenar as seguintes informações:
a.Data do jogo;
b.Time mandante;
c.Time visitante;
d.Gols do mandante;
e.Gols do visitante.
Depois dos dados informados, o algoritmo deve escrever na tela os dados de cada jogo, indicando quem foi
o vencedor ou se deu empate. Utilize um vetor de registros na sua implementação.
*/

#include <stdio.h>

typedef struct {
    char data[10];
    char timeMandante[50];
    char timeVisitante[50];
    int golsMandante;
    int golsVisitante;
    char vencedor[10];

} jogos;


int main() {
    jogos j[5];
    int lixo;

    for(int i = 0; i < 5; i++) {
        printf("--- Cadastro Jogo %i ---\n", i);

        printf("Entre com a data do jogo: ");
        scanf("%[^\n]s", j[i].data);
        lixo = getchar();

        printf("Entre com o time mandante: ");
        scanf("%[^\n]s", j[i].timeMandante);
        lixo = getchar();

         printf("Entre com o time visitante: ");
         scanf("%[^\n]s", j[i].timeVisitante);

         printf("Entre com o numero de gols do time mandante: ");
         scanf("%i", &j[i].golsMandante);

        printf("Entre com o numero de gols do time visitante: ");
        scanf("%i", &j[i].golsVisitante);

        if (j[i].golsMandante > j[i].golsVisitante) {
            printf("Vencedor: %s \n", j[i].timeMandante);
        } else if (j[i].golsMandante < j[i].golsVisitante) {
           printf("Vencedor: %s \n", j[i].timeVisitante);
        } else {
            printf("O jogo empatou. \n");
        }
    }

    return 0;
}
