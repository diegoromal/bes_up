programa {
  funcao inicio() {
  /*
  Escreva um algoritmo que pergunte ao usuário a quantidade de km percorridos por um carro alugado
  e a quantidade de dias pelos quais ele foi alugado. Calcule e mostre o valor a pagar, sabendo que o
  carro custa R$70,00 por dia e R$0,15 por km rodado.
  */

  real km_percorridos, qtde_dias, custo_dia = 70.00, custo_km = 0.15, valor_pagar

  escreva("Digite quantos KM o carro percorreu: ")
  leia(km_percorridos)
  
  escreva("Digite por quantos dias ele foi alugado: ")
  leia(qtde_dias)

  valor_pagar = (km_percorridos * custo_km) + (qtde_dias * custo_dia)

  escreva("O valor total a pagar será de R$", valor_pagar)

  }
}
