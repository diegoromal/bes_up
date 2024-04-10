import java.util.ArrayList;
import java.util.List;

public class Colecao {

    private String nomeProprietario;

    private List<Jogo> listaJogos;

    public Colecao(String nomeProprietario) {
        this.nomeProprietario = nomeProprietario;
        listaJogos = new ArrayList<Jogo>();
    }


    public void cadastrarJogo(Jogo jogo) {
        listaJogos.add(jogo);
    }


    public String buscarJogo(String titulo){

        String jogos = "\nResultado da busca: \n";
        
        boolean encontrou = false;


        for (Jogo temp : listaJogos) {

            // verificar se titulo informado é igual ao titulo do jogo atual
            if (temp.getTitulo().equals(titulo)) {
                jogos += temp.toString();
                encontrou = true;
            }
        }

        if (encontrou) {
            return jogos;
        }

        return "\nJogo " + titulo + " não localizado...";

    }


    public void listarJogos() {

        if (listaJogos.size() == 0) {
            System.out.println("\nNão há jogos na sua coleção...");
            return;
        }

        System.out.println("\nJogos cadastrados: ");
        for (Jogo temp : listaJogos) {

            System.out.println(temp);
            
        }

    }

    
}