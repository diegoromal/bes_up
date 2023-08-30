/*
Rosy é uma talentosa professora do Ensino
Médio que já ganhou muitos prêmios pela qualidade de sua aula. Seu
reconhecimento foi tamanho que foi convidada a dar aulas em uma escola da
Inglaterra. Mesmo falando bem inglês, Rosy ficou um pouco apreensiva com a
responsabilidade, mas resolveu aceitar a proposta e encará-la como um bom
desafio.
Tudo ocorreu bem para Rosy até o dia da prova. Acostumada a dar
notas de 0 (zero) a 100 (cem), ela fez o mesmo na primeira prova dos alunos
da Inglaterra. No entanto, os alunos acharam estranho, pois na Inglaterra o
sistema de notas é diferente: as notas devem ser dadas como conceitos de A a
E. O conceito A é o mais alto, enquanto o conceito E é o mais baixo.
Conversando com outros professores, ela recebeu a sugestão de utilizar
a seguinte tabela, relacionando as notas numéricas com as notas de conceitos:
Nota     | Conceito
0        | E
1 a 35   | D
36 a 60  | C
61 a 85  | B
86 a 100 | A
O problema é que Rosy já deu as notas no sistema numérico, e terá que
converter as notas para o sistema de letras. Porém, Rosy precisa preparar as
próximas aulas (para manter a qualidade que a tornou reconhecida), e não tem
tempo suficiente para fazer a conversão das notas manualmente.
Você deve escrever um programa que recebe uma nota no sistema
numérico e determina o conceito correspondente.
*/

#include <stdio.h>

int main() {

    int nota;

    printf("Informe a nota do aluno: \n");

    scanf("%i", &nota);

    if(nota <= 0) {
        printf("Conceito E. \n");
    } else if(nota >= 1 && nota <= 35){
        printf("Conceito D. \n");
    } else if(nota >= 36 && nota <= 60){
        printf("Conceito C. \n");
    } else if(nota >= 61 && nota <= 85){
        printf("Conceito B. \n");
    } else if(nota >= 86 && nota <= 100){
        printf("Conceito A. \n");
    }

    return 0;
}