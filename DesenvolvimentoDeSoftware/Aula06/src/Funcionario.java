public class Funcionario {

    private String nome;
    private float horasTrab;
    private float valorHora;
    private float salario;

    public String getNome() {
        return nome;
    }
    public float getHorasTrab() {
        return horasTrab;
    }
    public float getValorHora() {
        return valorHora;
    }
    public float getSalario() {
        return salario;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    public void setHorasTrab(float horasTrab) {
        this.horasTrab = horasTrab;
    }
    public void setValorHora(float valorHora) {
        this.valorHora = valorHora;
    }
    // Utilizar somente se setar o salario manualmente, caso contrario utilizar o metodo calcularSalario()
    public void setSalario(float salario) {
        this.salario = salario;
    }

    // Construtores

    // Padrao
    public Funcionario() {}

    // Parametrizado (parcialmente)

    public Funcionario(String nome, float horasTrab, float valorHora) {
        this.nome = nome;
        this.horasTrab = horasTrab;
        this.valorHora = valorHora;
        calcularSalario();
    }

    // Metodos proprios
    public void calcularSalario() {
        salario = horasTrab * valorHora;
    }

    public void exibirFolhaPagamento() {

        System.out.println("\nFuncionário: " + nome);
        System.out.println("Horas trabalhadas: " + horasTrab);
        System.out.println("Valor da hora: R$" + valorHora);
        System.out.println("Salário: R$" + salario);
        
    }
    
}
