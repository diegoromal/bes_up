public class Principal {

    public static void main(String[] args) {
        Pessoa p1 = new Pessoa("João", 18);

        Aluno a1 = new Aluno("Jorge", 32, 43211234);

        Aluno a2 = new Aluno();
        a2.setNome("Maria");
        a2.setIdade(33);
        a2.setRgm(12344321);

        Professor prof1 = new Professor("Jason", 38, 123456);

        Professor prof2 = new Professor();
        prof2.setNome("Evandro");
        prof2.setIdade(47);
        prof2.setMatricula(654321);

        System.out.print("\nPessoa: ");
        System.out.println(p1.toString());

        System.out.print("\nAluno 01: ");
        System.out.println(a1.toString());

        System.out.print("\nAluno 02: ");
        System.out.println(a2.toString());

        System.out.print("\nProfessor 01: ");
        System.out.println(prof1.toString());

        System.out.print("\nProfessor 02: ");
        System.out.println(prof2.toString());


        Bolsista ab1 = new Bolsista("Carla", 34, 54321123, 50.0f);
        System.out.println("\nAluno Bolsista 01: " + ab1);
    }

    /*
    // Método para somar inteiros
    public static int somar(int n1, int n2) {
        return n1 + n2;
    }

    // Método para somar reais
    public static float somar(float n1, float n2) {
        return n1 + n2;
    }
     */
}