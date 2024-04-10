public class App {
    public static void main(String[] args) {
        // exemploAssociacao();
        exemploArrayList();
    }

    private static void exemploAssociacao() {

        // nova instancia de carro
        Carro c1 = new Carro("Ford", "Ka", 2017);

        // System.out.println(c1.toString());
        
        // nova instancia de proprietario
        Proprietario p1 = new Proprietario("Diego", c1);

        // mostrando dados do proprietario "p1"
        System.out.println(p1.toString());

        // nova instancia de carro
        Carro c2 = new Carro("Ford", "Fiesta", 2020);

        // setar c2 como carro de p1
        p1.setCarro(c2);

        // mostrar dados de p1 com novo carro "c2"
        System.out.println(p1.toString());

        // alterar modelo do carro de p1
        p1.getCarro().setModelo("Eco Sport");

        // alterar ano do carro de p1
        p1.getCarro().setAno(2023);

        // mostrar o fabricante do carro de p1
        System.out.println("\nFabricante do carro de p1: " + p1.getCarro().getFabricante());

        // mostrar dados de p1 com as alterações
        System.out.println("\nNovos dados de p1: \n" + p1.toString());


        Carro c3 = new Carro(c1.getFabricante(), c1.getModelo(), c1.getAno());

        c3.setAno(2024);

        System.out.println("Dados de c1 e c3: \n" + c1 + c3);

    }

    private static void exemploArrayList(){
        Livro l1 = new Livro("Titulo 1", "Genero 1");
        Livro l2 = new Livro("Titulo 2", "Genero 2");
        Livro l3 = new Livro("Titulo 3", "Genero 3");

        Autor a1 = new Autor("Joao 1");
        a1.adicionarLivro(l1);
        a1.adicionarLivro(l2);

        a1.removerLivro(l1);



    }
}
