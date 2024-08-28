public abstract class Sistema {
    private static void exibirMenu() {
        System.out.println("\nSistema Folha de Pagamento");
        System.out.println("[1] - Cadastrar gerente");
        System.out.println("[2] - Listar gerentes cadastrados");
        System.out.println("[0] - Sair");
        System.out.print("Sua opção: ");
    }

    private static void cadastrar() {
        System.out.println("Novo gerente: ");
        System.out.print("Matrícula: ");
        int matricula = Console.lerInt();
        System.out.print("Projeto que gerencia: ");
        String nomeProjeto = Console.lerString();
        System.out.print("Bonus R$ ");
        float valorBonus = Console.lerFloat();
        System.out.print("Nome: ");
        String nome = Console.lerString();
        System.out.print("Horas trabalhadas: ");
        float horasrabalhadas = Console.lerFloat();
        System.out.print("Valor da hora de trabalho: R$ ");
        float valorHora = Console.lerFloat();

        Gerente gerente = new Gerente(matricula, nome, horasrabalhadas, valorHora, nomeProjeto, valorBonus);

        try {
            FolhaPagamento.cadastrar(gerente);
        } catch (NullPointerException e) {
            System.out.println(e.getMessage());
        }
    }

    private static void listarFuncionarios() {
        System.out.println("\nFolha de pagamento dos funcionários");

        try {
            for (Funcionario tempFuncionario : FolhaPagamento.getListaFuncionarios()){
                System.out.println(tempFuncionario.retornarDados());
            }
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }

    private static void verificarOpcao(int opcao){
        switch (opcao) {
            case 1:
                cadastrar();
                break;
            case 2:
                listarFuncionarios();
                break;
            case 0:
                System.out.println("\nO sistema foi finalizado...");
                break;
            default:
                System.out.println("\nOpção inválida, tente novamente!");
                break;
        }
    }

    public static void executar() {
        int opcao;
        do {
            exibirMenu();
            opcao = Console.lerInt();
            verificarOpcao(opcao);
            
        } while (opcao != 0);
    }
}
