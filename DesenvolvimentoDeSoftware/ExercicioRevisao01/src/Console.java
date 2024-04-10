import java.util.Scanner;

public class Console {
    
    private static Scanner leitor = new Scanner(System.in);

    public static int lerInt() {
        int valor = leitor.nextInt();
        leitor.nextLine(); //limpeza do buffer
        return valor;
    }

    public static String lerString() {
        String valor = leitor.nextLine();
        return valor;
    }

    public static Float lerFloat() {
        Float valor = leitor.nextFloat();
        return valor;
    }
}
