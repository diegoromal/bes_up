# Introdução à C

### Declaração de constante

    ```c
    #define <nome_da_constante> <valor_da_constante>
    #define VALOR_FRETE 10.50
    ```

### Atrubuição de conteúdo

    ```c
    x = 4;
    val = 2.5;
    y = x + 2;
    y = y + 4;
    tamanho = 'M';
    altura = ALTURA_MAXIMA;
    ```

### Saída de dados - printf

    ```c
    printf("<string_de_controle>", <expressoes>);
    ```

### Imprimir conteúdo de variável

    ```c
    int %d ou %i
    float %f
    double %lf (long float)
    char %c
    // Exemplo:
    printf("%d", <nome_da_variavel_do_mesmo_tipo>);
    printf("%f %d", <nome_variavel_float>,<nome_variavel_int>);
    printf("Comi %d sanduiches de %f quilos", <nome_variavel_int>, <nome_variavel_float);
    ```

### Biblioteca para entrada e saída de dados

-   Inserir na primeira linha do código:
    ```c
    #include <stdio.h>
    ```

### Estrutura padrão do programa

    ```c
    #include <stdio.h>

    int main() {

        return 0;
    }
    ```

### Ler conteúdo no teclado

    ```c
    int %d ou %i
    float %f
    double %lf (long float)
    char %c
    // Exemplo:
    scanf("%d", &<nome_variavel_int>); // (O & faz parte da leitura da variável)

    ```
