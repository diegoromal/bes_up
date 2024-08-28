public class Sistema {
    
    private static void exibirMenu() {
        System.out.println("Cadastro de Funcionário: ");
        System.out.println("[1] - Cadastrar Gerente");
        System.out.println("[2] - Cadastrar Programador");
        System.out.println("[3] - Listar todo os funcionários");
        System.out.println("[4] - Listar todo os gerentes");
        System.out.println("[5] - Listar todo os programadores");
        System.out.println("[0] - Sair");
        System.out.print("Informe uma opção: ");
    }

    public static void executar() {

        int option;

        do {

            exibirMenu();
            option = Console.lerInt();


        } while (option != 0);

        switch (option) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 0:
                System.out.println("O sistema foi finalizado");
                break;
            default:
                break;
        }

    }

}
