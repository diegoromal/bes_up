import java.util.Scanner;

public class Aula02 {
    public static void main(String[] args) {
        // declaracao de variaveis e saida de dados
        String txt = "Hello Java!";
        String aluno;

        System.out.println(txt);

        aluno = "Diego RA";

        System.out.println("Aluno: " + aluno);

        // declarar outras variaveis
        String curso = "ES";
        int periodo = 3;
        String campus = "Ecoville";
        String turno = "Noite";

        String txtFormatado = "Curso: " + curso +
        "\nPeriodo: " + periodo + "º" + "\nCampus: " + campus +
        "\nTurno: " + turno;

        System.out.println(txtFormatado);

        // entrada de dados
        // criando "variavel" para leitura de dados
        Scanner leitor = new Scanner(System.in);
        int dificuldade;

        System.out.println("\n\n");
        System.out.println("Qual o nivel de dificuldade da disciplina ate agora?");
        System.out.println("Digite 1 (facil), 2 (medio), 3 (dificil)");
        System.out.print("Informe o valor: ");
        // entrada de dados para a variavel "dificuldade"
        dificuldade = leitor.nextInt();

        if (dificuldade == 1) {
            System.out.println("Facil");
        } else if (dificuldade == 2) {
            System.out.println("Medio");
        } else if (dificuldade == 3) {
            System.out.println("Dificil");
        } else {
            System.out.println("Valor invalido!");
        }

        int avaliacao;

        System.out.println("\n\nAvalie o conteudo: ");
        System.out.println("1) Ruim - 2) Regular - 3) Bom");
        System.out.print("Informe o valor: ");
        avaliacao = leitor.nextInt();

        switch (avaliacao) {
            case 1:
                System.out.println("Ruim");                
                break;
            case 2:
                System.out.println("Regular");
                break;
            case 3:
                System.out.println("Bom");
                break;
            default:
                System.out.println("Valor invalido!");
                break;
        }


        leitor.close();
    }
    
}
