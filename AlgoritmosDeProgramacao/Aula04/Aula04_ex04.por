programa {
  funcao inicio() {
    /*
    Elaborar um programa que apresente o valor da conversão em dólar (US$) de um valor lido em real (R$).
    O programa deve solicitar ao usuário o valor da cotação do dólar e também a quantidade de reais disponível.
    */

    real r, d, c

    escreva("Digite a cotação do dólar: ")
    leia(c)
    escreva("Digite o valor em R$: ")
    leia(r)

    d = r * c
    
    escreva("Com a cotação ", c, ", R$", r, "equivale à U$$", d)    
  }
}
