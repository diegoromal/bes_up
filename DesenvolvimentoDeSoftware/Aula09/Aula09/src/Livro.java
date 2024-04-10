public class Livro {

    private String titulo;

    private String genero;


    public Livro() {
    }


    public Livro(String titulo, String genero) {
        this.titulo = titulo;
        this.genero = genero;
    }


    public String getTitulo() {
        return titulo;
    }


    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }


    public String getGenero() {
        return genero;
    }


    public void setGenero(String genero) {
        this.genero = genero;
    }
    

    @Override
    public String toString(){
        String txt = "Titulo do livro: " + titulo +
                     "\nGênero: " + genero;

        return txt;
    }
    

}
