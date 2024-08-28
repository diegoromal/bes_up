import java.util.ArrayList;

public class CadastroAlunos {

    private static ArrayList<Aluno> listaAlunos = new ArrayList<>();

    public static void cadastrarAluno(Aluno aluno) {
        listaAlunos.add(aluno);
    }

    public static ArrayList<Aluno> getListaAlunos() {
        return listaAlunos;
    }
}
