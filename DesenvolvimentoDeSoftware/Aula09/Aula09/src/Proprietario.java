public class Proprietario {

    private String nome;
    
    private Carro carro;

    
    public Proprietario() {
    }


    public Proprietario(String nome, Carro carro) {
        this.nome = nome;
        this.carro = carro;
    }


    public String getNome() {
        return nome;
    }


    public void setNome(String nome) {
        this.nome = nome;
    }


    public Carro getCarro() {
        return carro;
    }


    public void setCarro(Carro carro) {
        this.carro = carro;
    }
    

    @Override
    public String toString(){
        
        String txt = "Proprietário: " + nome + "\n" + carro.toString();

        return txt;
    }
    
}
