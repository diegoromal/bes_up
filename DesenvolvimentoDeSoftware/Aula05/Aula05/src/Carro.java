public class Carro {

    String modelo;
    int ano;
    String cor;

    // Construtor sem parametros
    public Carro() {
        modelo = "Ford Fiesta";
        ano = 2020;
        cor = "Vermelho";
    }

    // Construtor parametrizado
    public Carro(String modelo, int ano, String cor){
        this.modelo = modelo;
        this.ano = ano; 
        this.cor = cor;
    }

    @Override
    public String toString() {
        
        String txt = "Carro: " + modelo + "\n" +
                     "Ano: " + ano + "\n" +
                     "Cor: " + cor;

        return txt;
    }

    public void ligar() {
        System.out.println("O carro " + modelo + " está ligado");
    }

    public void desligar() {
        System.out.println("O carro " + modelo + " está desligado");
    }
    
}
