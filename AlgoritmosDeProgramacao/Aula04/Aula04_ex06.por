programa {
  funcao inicio() {
  /*
  Escreva um programa que leia o nome de um funcion�rio, seu n�mero de horas
  trabalhadas, o valor que recebe por hora e calcule o sal�rio desse funcion�rio. A
  seguir, mostre o nome e o sal�rio do funcion�rio.
  */

  cadeia nome
  real horas_trabalhadas, valor_hora, salario

  escreva("Digite o nome do funcionario: ")
  leia(nome)

  escreva("Digite o numero de horas trabalhadas: ")
  leia(horas_trabalhadas)

  escreva("Digite o valor recebido por hora: ")
  leia(valor_hora)

  salario = horas_trabalhadas * valor_hora

  escreva("O funcionario ", nome, " devera receber R$", salario)

  }
}
