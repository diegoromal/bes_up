import java.util.ArrayList;

public class ListaLivros {
    private static ArrayList<Livro> listaLivros = new ArrayList<>();

    public static void salvarLivro(Livro livro) {
        listaLivros.add(livro);
    }

    public static ArrayList<Livro> getListaLivros() {
        return listaLivros;
    }

    public static void setListaLivros(ArrayList<Livro> listaLivros) {
        ListaLivros.listaLivros = listaLivros;
    }
}
