#include <stdio.h>

int main(){

    int num_jabutis, cont, vel_jabuti;
    int maior_velocidade = 0, jabuti_mais_veloz = 0;

    do {
        printf("Entre com o numero de jabutis do grupo: ");
        scanf("%i", &num_jabutis);

        if (num_jabutis < 1 || num_jabutis > 100) {
            printf("Por favor, entre com um numero no intervalo de 1 a 100! \n");
        }
    } while (num_jabutis < 1 || num_jabutis > 100);

    for (cont = 1; cont <= num_jabutis; cont++) {
        do {
            printf("Entre com a velocidade do Jabuti %i: ", cont);
            scanf("%i", &vel_jabuti);

            if (vel_jabuti < 1 || vel_jabuti > 500) {
                printf("Por favor, entre com uma velocidade no intervalo de 1m/h a 500m/h! \n");
            }
        } while (vel_jabuti < 1 || vel_jabuti > 500);

        if (vel_jabuti > maior_velocidade) {
            maior_velocidade = vel_jabuti;
            jabuti_mais_veloz = cont;
        }   
    }


    if (maior_velocidade < 180) {
        printf("\nJabuti mais veloz: %i \n", jabuti_mais_veloz);
        printf("Velocidade: %im/h \n", maior_velocidade);
        printf("Nivel: 01 \n");
    } else if (maior_velocidade >= 180 && maior_velocidade < 250) {
        printf("\nJabuti mais veloz: %i \n", jabuti_mais_veloz);
        printf("Velocidade: %im/h \n", maior_velocidade);
        printf("Nivel: 02 \n");
    } else if (maior_velocidade >= 250) {
        printf("\nJabuti mais veloz: %i \n", jabuti_mais_veloz);
        printf("Velocidade: %im/h \n", maior_velocidade);
        printf("Nivel: 03 \n");
    }

    return 0;
}