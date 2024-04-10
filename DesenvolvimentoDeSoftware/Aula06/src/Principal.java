public class Principal {

    public static void main(String[] args) {

        // exConstrutores();
        // exGettersSetters();
        exMetodosdeObjetos();

    }

    public static void exConstrutores() {
        Pessoa p1 = new Pessoa("Fulano", 22);
        System.out.println(p1.toString());

        Pessoa p2 = new Pessoa();
        System.out.println(p2.toString());


        Pessoa p3 = new Pessoa("Ciclano");
        System.out.println(p3.toString());

        Pessoa p4 = new Pessoa(22) ;
        System.out.println(p4.toString());
    }
    
    public static void exGettersSetters() {

        Convidado c1 = new Convidado();
        c1.setNome("João");
        c1.setEmail("joao@joao.com");
        System.out.println(c1.toString());

        Convidado c2 = new Convidado("Maria", "maria@maria.com");
        System.out.println(c2.toString());

        c2.setNome("Marcia");
        System.out.println("\nNome alterado de c2: " + c2.getNome());

        Convidado c3 = new Convidado();

        String nome = Console.lerString();
        c3.setNome(nome);
    }

    public static void exMetodosdeObjetos() {
        
        Funcionario f1 = new Funcionario();
        String nome;
        float valorHora;
        float horasTrab;

        System.out.println("\nCadastro funcionário 1: ");
        System.out.print("Nome: ");
        nome = Console.lerString();
        System.out.print("Horas trabalhadas: ");
        horasTrab = Console.lerFloat();
        System.out.print("Valor da hora: R$");
        valorHora = Console.lerFloat();

        f1.setNome(nome);
        f1.setHorasTrab(horasTrab);
        f1.setValorHora(valorHora);

        // Calcular salario de f1
        f1.calcularSalario();
        // Mostrar dados de f1
        f1.exibirFolhaPagamento();

        Funcionario f2 = new Funcionario("Maria da Silva", 120f, 55.12f);

        f2.exibirFolhaPagamento();

    }
}
