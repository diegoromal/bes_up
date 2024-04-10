public class Principal {

    public static void main(String[] args) {

        String a1 = new Aluno("Diego", "BES", "3", "Noite");

        String a2 = new Aluno();

        System.out.print("\nEntre com o nome do Aluno 2:");
        a2.setNome(Console.lerString());
        System.out.print("\nEntre com o curso do Aluno 2:");
        System.out.print("\nEntre com o periodo do Aluno 2:");
        System.out.print("\nEntre com o turno do Aluno 2:");
        
    }

    
}