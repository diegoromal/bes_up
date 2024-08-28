public class Principal {
    public static void main(String[] args) {
        
        Funcionario func1 = new Funcionario("João", 4322);
        Funcionario func2 = new Funcionario("José", 4323);
        
        Gerente ger1 = new Gerente("Carlos", 5432, "Gerenciador de Tarefas");

        Programador pro1 = new Programador("Bruno", 6543, "Senior");

        CadastroFuncionarios.cadastrar(func1);
        CadastroFuncionarios.cadastrar(func2);
        CadastroFuncionarios.cadastrar(ger1);
        CadastroFuncionarios.cadastrar(pro1);


        System.out.println("\nFuncionários cadastrados: ");
        for (Funcionario temp : CadastroFuncionarios.getListaFuncionarios()) {
            System.out.println(temp.toString());
        }

        System.out.println("\nApenas gerentes cadastrados: ");
        for (Funcionario temp : CadastroFuncionarios.getListaFuncionarios()) {
            if (temp instanceof Gerente) {
                System.out.println(temp.toString());
            }
        }

        System.out.println("\nApenas programadores cadastrados: ");
        for (Funcionario temp : CadastroFuncionarios.getListaFuncionarios()) {
            if (temp instanceof Programador) {
                System.out.println(temp.toString());
            }
        }
    }
    
}
