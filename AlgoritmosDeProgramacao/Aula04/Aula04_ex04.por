programa {
  funcao inicio() {
    /*
    Elaborar um programa que apresente o valor da convers�o em d�lar (US$) de um valor lido em real (R$).
    O programa deve solicitar ao usu�rio o valor da cota��o do d�lar e tamb�m a quantidade de reais dispon�vel.
    */

    real r, d, c

    escreva("Digite a cota��o do d�lar: ")
    leia(c)
    escreva("Digite o valor em R$: ")
    leia(r)

    d = r * c
    
    escreva("Com a cota��o ", c, ", R$", r, "equivale � U$$", d)    
  }
}
