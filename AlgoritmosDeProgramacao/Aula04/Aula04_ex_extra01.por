programa {
  funcao inicio() {
    /*
    Faca um programa que leia o nome de um vendedor, o seu salario fixo e o total de vendas
    efetuadas por ele no mes (em dinheiro). Sabendo que este vendedor ganha 15% de comissao sobre
    suas vendas efetuadas, informar o total a receber no final do mes.
    */
    cadeia nome
    real salario_fixo, total_vendas, comissao = 0.15, salario

    escreva("Digite o nome do vendedor: ")
    leia(nome)
    escreva("Digite o salario fixo do vendedor: ")
    leia(salario_fixo)
    escreva("Digite o valor de vendas feitas pelo vendedor: ")
    leia(total_vendas)

    salario = salario_fixo + (total_vendas * comissao)

    escreva("O vendedor devera receber R$", salario)

  }
}
