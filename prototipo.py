import matplotlib.pyplot as plt
from getpass import getpass

# Definir mensagem de boas-vindas
print("Bem-vindo ao Gerenciador de Despesas!\n")

# Definir função para autenticar usuário


def autenticar_usuario():
    while True:
        usuario = input("Digite o nome de usuário: ")
        senha = getpass("Digite a senha: ")
        if usuario == "admin" or "usuário.teste" and senha == "12345":
            print("\nUsuário autenticado com sucesso.\n")
            return True
        else:
            print("\nNome de usuário ou senha incorretos. Tente novamente.\n")

    """_summary_
    """


# Autenticar usuário antes de mostrar o menu
if autenticar_usuario():
    # Inicializar as listas de despesas e categorias
    despesas = []
    categorias = []

    # Definir função para adicionar nova despesa
    def adicionar_despesa():
        categoria = input("Digite a categoria da despesa: ")
        valor = float(input("Digite o valor da despesa: "))
        despesas.append(valor)
        categorias.append(categoria)
        print("\nDespesa adicionada com sucesso!\n")

    # Definir função para exibir gráfico de despesas por categoria
    def mostrar_grafico():
        categorias_unicas = set(categorias)
        valores_por_categoria = [sum(despesas[i] for i in range(
            len(despesas)) if categorias[i] == categoria) for categoria in categorias_unicas]
        plt.pie(valores_por_categoria, labels=categorias_unicas)
        plt.title("Despesas por categoria")
        plt.show()

    # Definir função para exibir relatório de despesas por categoria
    def mostrar_relatorio():
        categorias_unicas = set(categorias)
        print("Relatório de despesas por categoria:")
        for categoria in categorias_unicas:
            valores_categoria = [despesas[i] for i in range(
                len(despesas)) if categorias[i] == categoria]
            total_categoria = sum(valores_categoria)
            print(f"{categoria}: R${total_categoria:.2f}")
        print()

    # Definir função para remover uma despesa


def remover_despesa():
    while True:
        # Apresentar as despesas adicionadas
        print("\nDespesas adicionadas:\n")
        for i in range(len(despesas)):
            print(
                f"{i+1}. Categoria: {categorias[i]}, Valor: R${despesas[i]:.2f}")
        print()

        # Permitir que o usuário selecione a despesa a ser removida
        opcao = input(
            "Digite o número da despesa que deseja remover (ou '0' para cancelar): ")
        if opcao == "0":
            break
        try:
            opcao = int(opcao)
            if opcao < 1 or opcao > len(despesas):
                print("\nOpção inválida. Por favor, tente novamente.\n")
            else:
                # Remover a despesa selecionada
                del despesas[opcao-1]
                del categorias[opcao-1]
                print("\nDespesa removida com sucesso!\n")
                break
        except ValueError:
            print("\nOpção inválida. Por favor, tente novamente.\n")
    # Definir função para editar uma despesa


def editar_despesa():
    while True:
        # Apresentar as despesas adicionadas
        print("\nDespesas adicionadas:\n")
        for i in range(len(despesas)):
            print(
                f"{i+1}. Categoria: {categorias[i]}, Valor: R${despesas[i]:.2f}")
        print()

        # Permitir que o usuário selecione a despesa a ser editada
        opcao = input(
            "Digite o número da despesa que deseja editar (ou '0' para cancelar): ")
        if opcao == "0":
            break
        try:
            opcao = int(opcao)
            if opcao < 1 or opcao > len(despesas):
                print("\nOpção inválida. Por favor, tente novamente.\n")
            else:
                # Permitir editar categoria e/ou valor da despesa
                nova_categoria = input(
                    "Digite a nova categoria da despesa (ou deixe em branco para manter a mesma): ")
                novo_valor = input(
                    "Digite o novo valor da despesa (ou deixe em branco para manter o mesmo): ")
                if nova_categoria != "":
                    categorias[opcao-1] = nova_categoria
                if novo_valor != "":
                    despesas[opcao-1] = float(novo_valor)
                print("\nDespesa editada com sucesso!\n")
                break
        except ValueError:
            print("\nOpção inválida. Por favor, tente novamente.\n")

    # Definir função para exibir o menu


def mostrar_menu():
    while True:
        print("\n======== GERENCIADOR DE DESPESAS =======\n")
        print("Selecione uma opção:\n")
        print("1. Adicionar uma nova despesa")
        print("2. Remover uma despesa")
        print("3. Editar uma despesa")
        print("4. Exibir relatório de despesas por categoria")
        print("5. Exibir gráfico de despesas por categoria")
        print("6. Sair\n")
        opcao = input("Digite o número da opção desejada: ")
        if opcao == "1":
            adicionar_despesa()
        elif opcao == "2":
            remover_despesa()
        elif opcao == "3":
            editar_despesa()
        elif opcao == "4":
            mostrar_relatorio()
        elif opcao == "5":
            mostrar_grafico()
        elif opcao == "6":
            print("\nObrigado por usar o gerenciador de despesas!\n")
            break
        else:
            print("\nOpção inválida. Por favor, tente novamente.\n")


# Mostrar menu após autenticação bem-sucedida do usuário
mostrar_menu()
