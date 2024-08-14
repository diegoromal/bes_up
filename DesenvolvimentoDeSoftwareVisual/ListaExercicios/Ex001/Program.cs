// Escrever um algoritmo que receba a altura e a largura de um retângulo e calcule a sua área.
// 1. Definir duar variáveis do tipo float que receba do teclado a altura e largura do retângulo
float altura, largura;

Console.Write("Entre com a altura do retângulo: ");
altura = float.Parse(Console.ReadLine());

Console.Write("Entre com a largura do retângulo: ");
largura = float.Parse(Console.ReadLine());

// 2. Exibir o produto entre altura e largura (area)
Console.WriteLine("A área do retângulo é: " + (altura * largura));

