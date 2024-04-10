import java.util.ArrayList;
import java.util.List;

public class Autor {

    private String nome;

    private List<Livro> livros;
    
    
    public Autor(String nome) {
        this.nome = nome;
        livros = new ArrayList<>();
    }
    

    public void adicionarLivro(Livro livro) {
        livros.add(livro);
        System.out.println("\nLivro adicionado: \n" + livro);
    }


    public void removerLivro(Livro livro) {

        livros.remove(livro);
        System.out.println("\nLivro removido da lista de " + nome);

    }


    @Override
    public String toString() {
        String txt = "Autor: " + nome ;

        txt += "Livros:\n";


        // foreach: laço próprio para percorrer arrays
        for (Livro temp : livros) {
            txt += temp;            
        }
        
        return txt;
    }
}
