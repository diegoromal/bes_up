public class Principal {

    public static void main(String[] args) {
        
        int opcao;
        Jogo jogo;
        String titulo;
        String genero;
        String estudio;
        int ano;
        String nomeProprietario;


        System.out.println("\nColeção de Jogos\n");
        System.out.print("Informe o nome do proprietário da coleção: ");
        nomeProprietario = Console.lerString();

        Colecao minhaColecao = new Colecao(nomeProprietario);

        do {
            System.out.println("\nColeção de jogos de " + nomeProprietario);
            System.out.println("[ 1 ] Cadastrar jogo \n[ 2 ] Buscar jogo \n[ 3 ] Listar todos os jogos \n[ 0 ] Finalizar programa");
            System.out.print("\nInforme uma opção: ");
            opcao = Console.lerInt();


            switch (opcao) {
                case 1:
                    System.out.println("Cadastro de jogo: ");
                    
                    System.out.print("Título: ");
                    titulo = Console.lerString();
                    
                    System.out.print("Genero: ");
                    genero = Console.lerString();

                    System.out.print("Estúdio: ");
                    estudio = Console.lerString();

                    System.out.print("Ano: ");
                    ano = Console.lerInt();

                    jogo = new Jogo(titulo, genero, estudio, ano);

                    minhaColecao.cadastrarJogo(jogo);

                    System.out.println("\nJogo cadastrado com sucesso!");

                    break;

                case 2:
                    System.out.println("\nBuscat jogo: ");
                    System.out.print("Informe o título do jogo: ");
                    titulo = Console.lerString();

                    System.out.println(minhaColecao.buscarJogo(titulo));

                    break;

                case 3:
                    minhaColecao.listarJogos();
                    
                    break;

                case 0:
                    System.out.println("O programa foi finalizado...");

                    break;
            
                default:
                    System.out.println("Opção inválida. Digite novamente.");

                    break;
            }

        } while(opcao != 0);






    }
    
}
