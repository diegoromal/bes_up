public class Gerente extends Funcionario {
    
    private String nomeProjeto;
    private float valorBonus;

    public Gerente(int matricula, String nome, float horasrabalhadas, float valorHora, String nomeProjeto,
            float valorBonus) {
        super(matricula, nome, horasrabalhadas, valorHora);
        this.nomeProjeto = nomeProjeto;
        this.valorBonus = valorBonus;
    }

    @Override
    public void calcularSalarioLiquido() {
        salarioLiquido = salarioBruto - ir - inss + valorBonus;
    }

    @Override
    public String retornarDados(){
        String txt = "\nMatrícula: " + matricula +
                     "\nNome do Gerente: " + nome +
                     "\nNome do projeto: " + nomeProjeto +
                     "\nValor da hora de trabalho: R$ " + valorHora +
                     "\nHoras trabalhadas: " + horasrabalhadas +
                     "\nValor do Bônus: R$ " + valorBonus +
                     "\nIR do mês: R$ " + ir +
                     "\nINSS do mês: R$ " + inss +
                     "\nFGTS recolhido: " + fgts +
                     "\nSalário Líquido: R$ " + salarioLiquido;

        return txt;
    }

    
}
