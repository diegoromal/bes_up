import java.util.Scanner;

public class Console {

    private static Scanner leitor = new Scanner(System.in);


    public static int lerInt() {
        int valor = leitor.nextInt();
        // Limpeza de buffer - Para evitar problemas de quebra de linha
        leitor.nextLine();
        return valor;
    }

    public static float lerFloat() {
        float valor = leitor.nextFloat();
        return valor;
    }

    public static String lerString() {
        String txt = leitor.nextLine();
        return txt;
    }

}