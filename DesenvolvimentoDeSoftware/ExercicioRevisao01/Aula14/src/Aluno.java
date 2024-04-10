public class Aluno extends Pessoa {
    
    private int rgm;

    public Aluno() {
    }
    
    public Aluno(int rgm) {
        this.rgm = rgm;
    }

    public Aluno(String nome, int idade, int rgm) {
        super(nome, idade);
        this.rgm = rgm;
    }

    public Aluno(String nome, int rgm) {
        super(nome);
        this.rgm = rgm;
    }

    public int getRgm() {
        return rgm;
    }

    public void setRgm(int rgm) {
        this.rgm = rgm;
    }

    @Override
    public String toString() {
        String txt = super.toString() + "\nRGM: " + rgm;
        return txt;
    }
        
}
