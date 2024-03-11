import java.util.Scanner;

public class Aula03 {

    static Scanner leitor = new Scanner(System.in);
    public static void main(String[] args){
        int option;
        do {
            System.out.println("\nAula 03 - Menu:");
            System.out.println("[ 1 ] - Exemplo For");
            System.out.println("[ 2 ] - Exemplo While");
            System.out.println("[ 3 ] - Exemplo Do/While");
            System.out.println("[ 4 ] - Exemplo Vetor");
            System.out.println("[ 0 ] - Sair");
            option = leitor.nextInt();

            switch(option) {
                case 1:
                    exemploFor();
                    break;
                case 2:
                    exemploWhile();
                    break;
                case 3:
                    exemploDoWhile();
                    break;
                case 4:
                    exemploVetor();
                    break;
                case 0:
                    System.out.println("O programa será finalizado");
                    break;
                default:
                 System.out.println("\nEscolha uma das opções:");
            }

        } while (option != 0);      
    }
    public static void exemploFor() {

        // Ler um valor inteiro e mostrar na tela a tabuada do valor de 1 à 10

        System.out.println("\nexemploFor: ");
        System.out.print("Informe um valor inteiro: ");
        int valor = leitor.nextInt();

        System.out.println("Tabuada do " + valor);
        for (int c = 1; c <= 10; c++) {
            System.out.println(valor + " * " + c + " = " + (valor * c));
        }
    }
    public static void exemploWhile() {
        // Ler um valor inteiro e mostrar todos os valores entre ele e o número 100
        System.out.println("\nexemploFor: ");
        System.out.print("Informe um valor inteiro: ");
        int valor = leitor.nextInt();

        if (valor > 100) {
            System.out.println("O valor digitado precisa ser menor que 0");
        }

        while (valor <= 100) {
            System.out.println(valor);
            valor++;
        }

    }
    public static void exemploDoWhile() {
        // Solicitar a entrada de um inteiro entre 100 e 200 e mostrar todos os valores pares dentro do intervalo (até 200)
        System.out.println("\nexemploDoWhile: ");
        
        int valor;

        do {
            System.out.print("Informe um valor inteiro entre 100 e 200: ");
            valor = leitor.nextInt();
        } while (valor < 100 || valor > 200);

        do {
            if(valor % 2 == 0) {
               System.out.println("Valor atual: " + valor);
            }
            valor++;
        
        } while (valor <= 200);

    }
    
    public static void exemploVetor() {
        // Ler 5 valores do teclado e armazenar em um vetor de inteiros.
        // Em seguida, armazenar em um segundo vetor o dobro dos valores do primeiro.
        // Mostrar os dois vetores na tela
        int[] vetor = new int[5];
        int[] dobro = new int[5];

        // Atribuindo valor a um vetor na sua declaracao
        int[] exemplo = {2,4,5,6,7};

        System.out.println("\nExemplo vetor.");

        for (int i = 0; i < vetor.length; i++) {
            System.out.print("Entre com o valor para a posição " + i + " do vetor 1: ");
            vetor[i] = leitor.nextInt();
            dobro[i] = (vetor[i] * 2);
        }
        
        System.out.print("\nVetor: ");
        for (int i = 0; i < vetor.length; i++) {
            System.out.print(vetor[i] + " ");
        }
        System.out.print("\nDobro: ");
        for (int i = 0; i < dobro.length; i++) {
            System.out.print(dobro[i] + " ");
        }
        System.out.println(" ");
    }
}
