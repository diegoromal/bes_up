/*
Leia quatro números (N1, N2, N3, N4), cada um deles com uma
casa decimal, correspondente às quatro notas de um aluno. Calcule a média
com pesos 2, 3, 4 e 1, respectivamente, para cada uma destas notas e mostre
esta média acompanhada pela mensagem "Media: ". Se esta média for maior
ou igual a 7.0, imprima a mensagem "Aluno aprovado.". Se a média calculada
for inferior a 5.0, imprima a mensagem "Aluno reprovado.". Se a média
calculada for um valor entre 5.0 e 6.9, inclusive estas, o programa deve
imprimir a mensagem "Aluno em exame".
No caso do aluno estar em exame, leia um valor correspondente à nota
do exame obtida pelo aluno. Imprima então a mensagem "Nota do exame: "
acompanhada pela nota digitada. Recalcule a média (some a pontuação do
exame com a média anteriormente calculada e divida por 2). e imprima a
mensagem "Aluno aprovado." (caso a média final seja 5.0 ou mais ) ou "Aluno
reprovado.", (caso a média tenha ficado 4.9 ou menos). Para estes dois casos
(aprovado ou reprovado após ter pego exame) apresente na última linha uma
mensagem "Media final: " seguido da média final para esse aluno.
*/

#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media, nota_exame, media_final;
    int exame;

    printf("Informe a primeira nota: \n");
    scanf("%f", &n1);
    printf("Informe a segunda nota: \n");
    scanf("%f", &n2);
    printf("Informe a terceira nota: \n");
    scanf("%f", &n3);
    printf("Informe a quarta nota: \n");
    scanf("%f", &n4);

    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
    printf("Media: %.1f \n", media);

    if (media >= 7.0){
        printf("Aluno aprovado. \n");
        media_final = media;
    } else if (media < 5.0) {
        printf("Aluno reprovado. \n");
        media_final = media;
    } else {
        printf("Aluno em exame. \n");
        exame = 1;
    }
    if (exame == 1) {
        printf("Informe a nota do exame: \n");
        scanf("%f", &nota_exame);
        printf("Nota do exame: %.1f \n", nota_exame);

        media_final = (nota_exame + media) / 2;

        if (media_final >= 5.0){
            printf("Aluno aprovado. \n");
        } else {
            printf("Aluno reprovado. \n");
        }
    }

    printf("Média final: %.1f \n", media_final);

    return 0;
}