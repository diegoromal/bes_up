public class Professor extends Pessoa{ 

    private String disciplina;

    public Professor() {}

    public Professor(String nome, String email) {
        super(nome, email);
    }

    public String getDisciplina() {
        return disciplina;
    }

    public void setDisciplina(String disciplina) {
        this.disciplina = disciplina;
    }

    @Override
    public String toString() {
        return super.toString() + "\nDisciplina: " + disciplina;
    }
    


    
}
