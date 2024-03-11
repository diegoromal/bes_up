public class Aula04 {

    public static void main(String[] args){
        
        // ex00();
        // exMatriz();
        // exObjetoAluno();
        exVetorObjeto();

    }

    
    public static void ex00() {
        /*
         * Ler um valor inteiro entre 2 e 10
         * Criar um vetor deste tamanho e ler todos os valores
         * deste vetor. Apresentar vetor na tela.
         */

        int valor;
        do {
            System.out.println("Ex 00: ");
            System.out.print("Informe um valor entre 2 e 10: ");
            valor = Console.lerInt();
        } while (valor < 2 || valor > 10);

        int[] vetor = new int[valor];

        for (int i = 0; i < vetor.length; i++) {
            System.out.print("Entre com o valor da posição " + i + ": ");
            vetor[i] = Console.lerInt();
        }
        
        System.out.print("Vetor: ");
        for (int i = 0; i < vetor.length; i++) {
            System.out.print(vetor[i] + " ");
        }

        System.out.println("\n");
    }
    
    public static void exMatriz() {
        System.out.println("\nExemplo Matriz: ");
        int[][] m1 = new int[3][3];
        for (int i = 0; i < m1.length; i++) {
            for (int j = 0; j < m1[i].length; j++) {
               
                System.out.print("Informe o valor para a posição " + i + " - " + j + ": ");
                m1[i][j] = Console.lerInt();
            }
        }

        System.out.println("\nExibindo matriz gerada: ");
        for (int lin = 0; lin < m1.length; lin++) {
            for (int col = 0; col < m1[lin].length; col++) {
                System.out.print(m1[lin][col]);
            }
            System.out.print("\n");
        }

        


    }

    public static void exObjetoAluno(){

        Aluno aluno1 = new Aluno();

        System.out.println("\nCadastro de aluno: ");
        System.out.print("Nome: ");
        aluno1.nomeAluno = Console.lerString();
        System.out.print("Curso: ");
        aluno1.curso = Console.lerString();
        System.out.print("Campus: ");
        aluno1.campus = Console.lerString();

        System.out.println("\nAluno cadastrado: ");
        System.out.println(aluno1.toString());
    }

    public static void exVetorObjeto(){

        Aluno[] alunos = new Aluno[3];

        System.out.println("\nExemplo vetor de objetos");

        for (int i = 0; i < alunos.length; i++) {
            alunos[i] = new Aluno();
            System.out.println("\nCadastro do aluno " + i + 1 + ": ");
            System.out.print("Nome: ");
            alunos[i].nomeAluno = Console.lerString();
            System.out.print("Curso: ");
            alunos[i].curso = Console.lerString();
            System.out.print("Campus: ");
            alunos[i].campus = Console.lerString();
        }

        System.out.println("Alunos cadastrados: ");
        for (int i = 0; i < alunos.length; i++) {
            System.out.println(alunos[i].toString());
        }
    }
}
