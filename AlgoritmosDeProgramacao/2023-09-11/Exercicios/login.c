#include <stdio.h>

int main() {

    int login_validado = 0, user = 123, pwd = 321;

    do {
        printf("Entre com o usuário: ");
        scanf("%i", &user);
        
        printf("Entre com a senha: ");
        scanf("%i", &pwd);

        if (user == 123 && pwd == 123) {
            login_validado = 1;
        } else {
            printf("Usuário ou senha inválidos! Tente novamente!\n");
        }
    } while (login_validado == 0);

    printf("Seja bem vindo ao sistema %i \n", user);

    return 0;
}