public class Livro {

    private String titulo;
    private String autor;

    public Livro(){}

    public Livro(String titulo, String autor) {
        this.titulo = titulo;
        this.autor = autor;
    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    @Override
    public String toString(){
        return "Título=" + titulo + ", Autor=" + autor;
    }

    public String exibirDados() {
        return "\nTítulo: " + titulo +
               "\nAutor: " + autor;
    }

    public void fromString(String linha) {
        String[] dadosLivro = linha.split(", ");
        
        titulo = dadosLivro[0].split("=")[1];
        autor = dadosLivro[1].split("=")[1];
        
    }
}