public class Sistema {

    public static void executar() {
        teste1();
    }

    private static void teste1() {
        CadastroAlunos.cadastrarAluno(new Aluno("João", "joao@email.com", 321654));
        CadastroAlunos.cadastrarAluno(new Aluno("Maria", "maria@email.com", 987654));
        CadastroAlunos.cadastrarAluno(new Aluno("Cleiton", "cleiton@email.com", 654321));

    }
    
}
