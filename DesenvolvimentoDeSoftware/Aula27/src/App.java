public class App {
    public static void main(String[] args) throws Exception {
        
        System.out.println("\nNovo Livro");
        String titulo = Console.lerString("Informe o título");
        String autor = Console.lerString("Informe o autor");

        try {

            Livro livro = new Livro(titulo, autor);

            ListaLivros.salvarLivro(livro);
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }

        System.out.println("\nLivros cadastrados");

        for (Livro tempLivro : ListaLivros.getListaLivros()) {

            return listaLivros;
            
        }

    }
}
