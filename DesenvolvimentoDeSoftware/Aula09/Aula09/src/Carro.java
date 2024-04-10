public class Carro {

    private String fabricante;

    private String modelo;
    
    private int ano;


    public Carro(String fabricante, String modelo, int ano) {
        this.fabricante = fabricante;
        this.modelo = modelo;
        this.ano = ano;
    }


    public String getFabricante() {
        return fabricante;
    }


    public void setFabricante(String fabricante) {
        this.fabricante = fabricante;
    }


    public String getModelo() {
        return modelo;
    }


    public void setModelo(String modelo) {
        this.modelo = modelo;
    }


    public int getAno() {
        return ano;
    }


    public void setAno(int ano) {
        this.ano = ano;
    }  

    @Override
    public String toString() {
        String txt = "Carro: " + fabricante +
        " " + modelo + " (" + ano + ")\n";

        return txt;
    }

}