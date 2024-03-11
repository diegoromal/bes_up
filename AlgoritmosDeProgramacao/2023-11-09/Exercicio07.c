/*
7. Você foi encarregado de desenvolver um programa que gere
senhas seguras de acordo com critérios específicos. O programa deve ser
capaz de gerar senhas com um comprimento definido e que atendam a
requisitos de complexidade.
Os requisitos do programa são:
a. Crie uma função chamada “gerarSenha” que recebe dois parâmetros: o
comprimento desejado da senha e um valor indicando se a senha deve
incluir caracteres especiais (como !, @, #, $, etc.). A função deve
retornar a senha gerada.
b. A senha gerada deve conter uma combinação de letras maiúsculas e
minúsculas, números e, se especificado, caracteres especiais.
c. Certifique-se de que a senha gerada atenda ao comprimento desejado e
aos critérios de complexidade.
d. No programa principal, permita que o usuário insira o comprimento
desejado da senha e escolha se deseja incluir caracteres especiais.
e. Apresente a senha gerada ao usuário.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para gerar senhas seguras
char* gerarSenha(int comprimento, int incluirEspeciais) {
    const char caracteresLetras[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char caracteresNumeros[] = "0123456789";
    const char caracteresEspeciais[] = "!@#$%^&*()_+-=[]{}|;:,.<>?";

    // Determina a pool de caracteres a serem usados
    const char* caracteresPool = caracteresLetras;
    if (incluirEspeciais) {
        // Se incluirEspeciais for diferente de zero, inclui caracteres especiais
        caracteresPool = strcat(strcat(caracteresLetras, caracteresNumeros), caracteresEspeciais);
    } else {
        // Se incluirEspeciais for zero, inclui apenas letras e números
        caracteresPool = strcat(caracteresLetras, caracteresNumeros);
    }

    int tamanhoPool = strlen(caracteresPool);

    // Aloca espaço para a senha
    char* senha = (char*)malloc((comprimento + 1) * sizeof(char)); // +1 para o caractere nulo de terminação

    // Gera a senha
    for (int i = 0; i < comprimento; ++i) {
        int indice = rand() % tamanhoPool;
        senha[i] = caracteresPool[indice];
    }

    senha[comprimento] = '\0'; // Adiciona o caractere nulo de terminação

    return senha;
}

int main() {
    // Inicializa a semente para geração de números aleatórios
    srand(time(NULL));

    int comprimento;
    int incluirEspeciais;

    // Solicita ao usuário informações sobre a senha
    printf("Digite o comprimento desejado da senha: ");
    scanf("%d", &comprimento);

    printf("Deseja incluir caracteres especiais? (1 para Sim, 0 para Não): ");
    scanf("%d", &incluirEspeciais);

    // Chama a função para gerar a senha
    char* senhaGerada = gerarSenha(comprimento, incluirEspeciais);

    // Exibe a senha gerada
    printf("\nSenha Gerada: %s\n", senhaGerada);

    // Libera a memória alocada para a senha
    free(senhaGerada);

    return 0;
}
