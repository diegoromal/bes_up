programa {
  funcao inicio() {
    /*
    Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno.
    A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5
    */
    
    real a, b, c, media

    escreva("Digite a nota A: ")
    leia(a)
    escreva("Digite a nota B: ")
    leia(b)
    escreva("Digite a nota C: ")
    leia(c)
    
    media = ((a * 2) + (b * 3) + (c * 5)) / (2 + 3 + 5)
    
    escreva("A média do aluno é ", media)
  }
}