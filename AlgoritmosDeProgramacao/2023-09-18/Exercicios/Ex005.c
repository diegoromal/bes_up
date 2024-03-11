/*
5 - Foi realizada uma pesquisa entre os habitantes de uma região e
coletados os dados de altura e sexo (0 = masc, 1 = fem, 2 = não declarado)
das pessoas. Faça um programa que leia 50 dados diferentes e informe:
● a maior e a menor altura encontradas;
● a média de altura das mulheres;
● a média de altura da população;
● o percentual de homens na população.
*/
#include <stdio.h>

int main() {
    int sexo, cont1;
    float altura, maior_altura, menor_altura, total_altura_mulher, media_mulher, total_altura_populacao, media_populacao;
    float total_mulher = 0, total_homem = 0, total_populacao = 0;

    for (cont1 = 1; cont1 <= 3; cont1++) {
        printf("Entre com a altura: ");
        scanf("%f", &altura);

        if (cont1 == 1) {
            menor_altura = altura;
            maior_altura = altura;
        }
        
        if (altura > maior_altura) {
            maior_altura = altura;
        }
        
        if (altura < menor_altura) {
            menor_altura = altura;
        }

        do {
            printf("Entre com o sexo [0-Masculino, 1=Feminino, 2-Não declarado]: ");
            scanf("%i", &sexo);
            if (sexo < 0 && sexo < 2) {
                printf("Entre com uma opção válida.");
            }
        } while (sexo < 0 && sexo < 2);
        
        if (sexo == 1) {
            total_mulher++;
            total_altura_mulher = total_altura_mulher + altura;
        }

        total_populacao++;
        total_altura_populacao = total_altura_populacao + altura;

        if (sexo == 0) {
            total_homem++;
        }
    }

    printf("A maior altura: %.2f \n", maior_altura);
    printf("A menor altura: %.2f \n", menor_altura);
    printf("A media de altura das mulheres: %.2f \n", total_altura_mulher / total_mulher);
    printf("A media de altura da populacao: %.2f \n", total_altura_populacao / total_populacao);
    printf("O percentual de homens na populacao: %.2f \n", (total_homem / 3) * 100);
    
    return 0;
}