public class Aluno {

    private String nome;
    private String curso;
    private String periodo;
    private String turno;

    
    public Aluno() {
    }


    public Aluno(String nome, String curso, String periodo, String turno) {
        this.nome = nome;
        this.curso = curso;
        this.periodo = periodo;
        this.turno = turno;
    }


    public String getNome() {
        return nome;
    }


    public void setNome(String nome) {
        this.nome = nome;
    }


    public String getCurso() {
        return curso;
    }


    public void setCurso(String curso) {
        this.curso = curso;
    }


    public String getPeriodo() {
        return periodo;
    }


    public void setPeriodo(String periodo) {
        this.periodo = periodo;
    }


    public String getTurno() {
        return turno;
    }


    public void setTurno(String turno) {
        this.turno = turno;
    }
    

    public String mostrarDados() {
        String aluno = "Nome: " + nome + "\nCurso: " + curso + "\nPeríodo: " + periodo + "\nTurno: " + turno;
        return aluno;
    }
    
}
