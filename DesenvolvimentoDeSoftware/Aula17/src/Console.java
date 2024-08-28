import java.util.Scanner;

public class Console {

    private static Scanner leitor = new Scanner(System.in);

    
    public static int lerInt() {
        int valor = leitor.nextInt();
        
        leitor.nextLine(); //limpeza do buffer

        return valor;
    }


    public static String lerString() {
        return leitor.nextLine();
    }


    public static Float lerFloat(){
        return leitor.nextFloat();
    }
    
}