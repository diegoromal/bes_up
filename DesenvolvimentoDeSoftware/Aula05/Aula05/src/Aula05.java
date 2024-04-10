public class Aula05 {

    public static void main (String[] args) {

        // exemploPessoa();
        exemploCarro();

    }
    
    public static void exemploPessoa() {
        
        // instanciando objeto do tipo Pessoa
        Pessoa p1 = new Pessoa();

        p1.nome = "Diego RA";
        p1.idade = 31;

       
        System.out.println("Dados da pessoa p1:");
        System.out.println("Nome: " + p1.nome + "\nIdade: " + p1.idade);

        // Instanciando objeto p2
        Pessoa p2 = new Pessoa();

        System.out.println("Informe os dados de p2: ");
        System.out.print("Nome: ");
        p2.nome = Console.lerString();
        System.out.print("Idade: ");
        p2.idade = Console.lerInt();

        System.out.println("Dados da pessoa p2:");
        System.out.println("Nome: " + p2.nome + "\nIdade: " + p2.idade);

        // Jeito errado de se copiar um objeto
        Pessoa p3 = new Pessoa();
        p3 = p2; //p3 aponta para o mesmo lugar de p2 - na prática são o mesmo objeto

        p3.idade = 25;

        System.out.println("Idade de p2: " + p2.idade);

        // Jeito certo de se copiar um objeto
        Pessoa p4 = new Pessoa();
        p4.nome = p1.nome;
        p4.idade = p1.idade;

        System.out.println("\nDados de p4: ");
        System.out.println(p4.toString());

        p4.nome = "Beltrano";
        System.out.println("Nome de p1: " + p1.nome);
        System.out.println("Nome de p4: " + p4.nome);

    }

    public static void exemploCarro() {

        Carro c1 = new Carro();
        
        System.out.println("Cadastro do c1: ");
        System.out.print("Modelo: ");
        c1.modelo = Console.lerString();
        System.out.print("Ano: ");
        c1.ano = Console.lerInt();
        System.out.print("Cor: ");
        c1.cor = Console.lerString();
        
        System.out.println(c1.toString());

        c1.ligar();

        Carro c2 = new Carro();
        System.out.println(c2.toString());

        c2.desligar();

        Carro c3 = new Carro("Chevette", 1987, "Cinza");

        System.out.println("\nDados c3: ");
        System.out.println(c3.toString());

        System.out.println("\nCadastro do c4: ");
        System.out.print("Modelo: ");
        String modelo = Console.lerString();
        System.out.print("Ano: ");
        int ano = Console.lerInt();
        System.out.print("Cor: ");
        String cor = Console.lerString();

        Carro c4 = new Carro(modelo, ano, cor);
        
        System.out.println("\nDados c4: ");
        System.out.println(c4.toString());

        int valor = Console.lerInt();
        

    }
}
