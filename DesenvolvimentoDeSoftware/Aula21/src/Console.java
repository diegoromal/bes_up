import java.util.InputMismatchException;
import java.util.Scanner;

public class Console {

    private static Scanner scanner = new Scanner(System.in);

    public static int lerInt() {
        int valor = 0;

        while(true) {

            try {
                valor = scanner.nextInt();
                scanner.nextLine();
                break;
            } catch (InputMismatchException e) {
                    System.out.println("O valor informado não é um inteiro, digite novamente: ");
            }
        }
        
        return valor;

    }

    public static float lerFloat() {
        float valor = 0;

        while(true) {

            try {
                valor = scanner.nextFloat();
                scanner.nextLine();
                break;
            } catch (InputMismatchException e) {
                    System.out.println("O valor informado não é um float, digite novamente: ");
            }
        }
        
        return valor;

    }

    public static String lerString() {
        String valor = scanner.nextLine();
        return valor;
    }
}