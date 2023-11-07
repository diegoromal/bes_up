#include <stdio.h>

float pesoIdeal(float altura, char sexo) {
    float pesoIdeal;

    if (sexo == 'M') {
        pesoIdeal = (72.7 * altura) - 58;
        return pesoIdeal;
    } else if (sexo == 'F') {
        pesoIdeal = (62.1 * altura) - 44.7;
        return pesoIdeal;
    }
}

int main() {
    float altura, pesoAtual;
    char sexo;

    printf("Entre com sua altura: ");
    scanf("%f", &altura);

    printf("Entre com seu peso atual: ");
    scanf("%f", &pesoAtual);

    do {
        printf("Entre com seu sexo [M/F]: ");
        scanf(" %c", &sexo);
    } while (sexo != 'M' && sexo != 'F');
    
    printf("Seu peso ideal é: %.2f \n", pesoIdeal(altura, sexo));
    

    if (pesoIdeal(altura, sexo) == pesoAtual) {
        printf("");
    } else if (pesoIdeal(altura, sexo) > pesoAtual) {
        printf("");
    } else {
        printf("");
    }
    return 0;
}