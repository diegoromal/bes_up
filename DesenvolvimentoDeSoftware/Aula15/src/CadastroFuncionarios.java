import java.util.ArrayList;
import java.util.List;

public class CadastroFuncionarios {

    private static List<Funcionario> listaFuncionarios = new ArrayList<>();

    public static void cadastrar(Funcionario func) {
        listaFuncionarios.add(func);
    }

    public static List<Funcionario> getListaFuncionarios() {
        return listaFuncionarios;
    }
       
}
