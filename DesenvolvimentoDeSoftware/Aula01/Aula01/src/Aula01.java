import java.util.Scanner;

public class Aula01 {
    public static void main (String[] args) {
        // criar "leitor" para entrada de dados
        Scanner leitor = new Scanner(System.in);
        // variavel "nome" do tipo string 
        String nome;
        // variavel "txt" do tipo string com valor atribuido
        String txt = "Java - Aula 01";
        // saida de dados monstrando o valor de "txt"
        System.out.println(txt);
        // saida de dados solicitanto uma entrada
        System.out.print("Digite seu nome: ");
        // entrada de dados
        nome = leitor.nextLine();
        // mostrar o valor de "nome"
        System.out.println("Olá " + nome);
        // encerra o leitor
        leitor.close();
    }    
}
