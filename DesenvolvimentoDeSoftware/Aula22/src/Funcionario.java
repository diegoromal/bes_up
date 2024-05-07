public abstract class Funcionario {
    protected int matricula;
    protected String nome;
    protected float horasrabalhadas;
    protected float valorHora;
    protected float salarioBruto;
    protected float salarioLiquido;
    protected float ir;
    protected float inss;
    protected float fgts;

    public Funcionario(int matricula, String nome, float horasrabalhadas, float valorHora) {
        this.matricula = matricula;
        this.nome = nome;
        this.horasrabalhadas = horasrabalhadas;
        this.valorHora = valorHora;

        calcularSalarioBruto();
    }

    public void calcularSalarioBruto(){
        salarioBruto = valorHora * horasrabalhadas;
        calcularIR();
        calcularINSS();
        calcularFGTS();
        calcularSalarioLiquido();
    }

    public void calcularIR() {
        if (salarioBruto <= 1372.81f) {
            ir = 0;
            return;
        }

        if (salarioBruto <= 2743.25f) {
            ir = salarioBruto * 0.15f;
            return;
        }

        ir = salarioBruto * 0.275f;
    }

    public void calcularINSS(){
        if (salarioBruto <= 868.29f) {
            inss = salarioBruto * 0.08f;
            return;
        }

        if (salarioBruto <= 1447.14f) {
            inss = salarioBruto * 0.09f;
            return;
        }

        if (salarioBruto <= 2894.27f) {
            inss = salarioBruto * 0.11f;
            return;
        }

        inss = 318.37f;
    }

    public void calcularFGTS() {
        fgts = salarioBruto * 0.08f;
    }

    public abstract void calcularSalarioLiquido();

    public abstract String retornarDados();
    
}
