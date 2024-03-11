programa {
  funcao inicio() {
  /*
  Escreva um programa que leia o nome de um funcionário, seu número de horas
  trabalhadas, o valor que recebe por hora e calcule o salário desse funcionário. A
  seguir, mostre o nome e o salário do funcionário.
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
