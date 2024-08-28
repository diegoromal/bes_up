import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;

public abstract class GerenciadorJogos {
    private static final String ARQUIVO = "jogos.txt";

    public static void salvarJogo(Jogo jogo) throws IOException {
        try(FileWriter fw = new FileWriter(ARQUIVO, true);
            BufferedWriter bw = new BufferedWriter(fw)) {
                bw.write(jogo + "\n");
            }
    }

    public static ArrayList<Jogo> listarJogos() throws IOException {
        ArrayList<Jogo> listaJogos = new ArrayList<>();

        try(FileReader fr = new FileReader(ARQUIVO); BufferedReader br = new BufferedReader(fr)) {
            String linha;
            while (linha = br.readLine() != null) {
                Jogo jogo = Jogo.fromString(linha);
                listaJogos.add(jogo);
                
            }
        }

        return listaJogos;
    }
    
}
