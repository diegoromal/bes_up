import java.util.Scanner;

public class Exercicios {

    public static Scanner leitor = new Scanner(System.in);
    public static void main(String[] args) {
        // ex01();
        // ex02();
        // ex03();
        ex04();
    }

    public static void ex01() {

        int num;
        
        System.out.print("Entre com um número: ");
        num = leitor.nextInt();

        if (num > 10) {
            System.out.println("Número maior do que 10!");
        } else if (num <= 10) {
            System.out.println("Número menor ou igual a 10!");
        }


        leitor.close();
    }
    
    public static void ex02() {

        int num1;
        int num2;
        int soma;

        System.out.print("Entre com o primeiro valor: ");
        num1 = leitor.nextInt();
        System.out.print("\nEntre com o segundo valor: ");
        num2 = leitor.nextInt();

        soma = num1 + num2;

        System.out.println("A soma dos valores é : " + soma);

    }

    public static void ex03(){

        int a;
        int b;

        System.out.print("Entre com 1 valor: ");
        a = leitor.nextInt();
        do {
            System.out.print("Entre com outro valor: ");
            b = leitor.nextInt();
            if (a == b) {
                System.out.println("O segundo valor deve ser diferente do primeiro!");
            }
        } while (a == b);

        if (a > b) {
            System.out.println("O valor " + a + " é maior que " + b);
        } else if (b > a) {
            System.out.println("O valor " + b + " é maior que " + a);
        }
        
    }

    public static void ex04(){
        // Escreva um algoritmo que leia dois números e ao final mostre a soma, subtração,
        // multiplicação e a divisão dos números lidos

        int num1;
        int num2;
        int soma, subt, mult, div;

        System.out.print("Entre com o primeiro número: ");
        num1 = leitor.nextInt();
        System.out.print("Entre com o segundo número: ");
        num2 = leitor.nextInt();

        soma = num1 + num2;
        subt = num1 - num2;
        mult = num1 * num2;
        div = num1 / num2;

        System.out.println("Soma: " + soma + "\nSubtracao: " + subt + "\nMultiplicação: " + mult + "\nDivisão: " + div);



    }
}
