#include <stdio.h>
#include <stdlib.h>

// define a struct 
typedef struct {
  char placa[9];
  char modelo[30];
  int ano;
  float motor;
} veiculo;

// recebe por parâmetro o vetor de registros completo
// e a quantidade de registros (posições) do vetor
void cadastra(veiculo veic[], int qtd) {

  int ch;
    
  // usa repetição para percorrer o vetor de registros
  printf("\n--- Veiculos em cadastro ---\n");
  for (int i = 0; i < qtd; i++) {
    printf("\n- Veiculo % i -\n", i);
    printf("Digite a placa: ");
    ch = getchar();
    //fgets(veic[i].placa, 9, stdin);
    scanf("%[^\n]s", veic[i].placa);
    printf("Digite o modelo: ");
    ch = getchar();
    scanf("%[^\n]s", veic[i].modelo);
    printf("Digite o ano: ");
    scanf("%i", &veic[i].ano);
    printf("Digite o motor: ");
    scanf("%f", &veic[i].motor);
  }
}

// recebe por parâmetro o vetor de registros completo
// e a quantidade de registros (posições) do vetor
void imprime(veiculo veic[], int qtd) {
  // usa repetição para percorrer o vetor de registros
  printf("\n--- Veiculos cadastrados ---\n");
  for (int i = 0; i < qtd; i++) {
    printf("\n- Veiculo % i -\n", i);
    printf("Placa: %s\n", veic[i].placa);
    printf("Modelo: %s\n", veic[i].modelo);
    printf("Ano: %i\n", veic[i].ano);
    printf("Motor: %.1f\n", veic[i].motor);
  }
}

// recebe por referência somente um registro
// (uma posição do vetor) para ser alterado
void alteraVeiculo(veiculo *veic) {
  int opcao, ch;

  // repete enquanto o usuário não digitar uma opção válida
  do {
    // lê do teclado qual campo o usuário deseja editar
    printf("Qual dado você deseja alterar? \n");
    printf("1 - Placa \n2 - Modelo \n3 - Ano\n4 - Motor\n");
    scanf("%i", &opcao);

    // usa (*veic) nos scanf porque o registro foi passado por referência
    switch(opcao) {
      case 1: 
        printf("Digite uma nova placa para o veiculo: ");
        ch = getchar();
        scanf("%[^\n]s", (*veic).placa);
        break;
      case 2: 
        printf("Digite um novo modelo para o veiculo: ");
        ch = getchar();
        scanf("%[^\n]s", (*veic).modelo);
        break;
      case 3: 
        printf("Digite um novo ano para o veiculo: ");
        scanf("%i", &(*veic).ano);
        break;
      case 4: 
        printf("Digite um novo motor para o veiculo: ");
        scanf("%f", &(*veic).motor);
        break;
      default:
        printf("Opcao invalida");
    }
  } while (opcao < 1 || opcao > 4);
}

int main(void) {

  int qtd, altera;

  printf("Qual a quantidade de veiculos a serem cadastrados? ");
  scanf("%i", &qtd);

  // declara vetor de registros do tamanho desejado pelo usuário
  veiculo veic[qtd];

  // passa o vetor de registros completo e a variável qtd por
  // parâmetro, dando permissão de leitura e edição dos valores
  cadastra(veic, qtd);

  // passa o vetor de registros completo e a variável qtd por
  // parâmetro, dando permissão de leitura e edição dos valores
  imprime(veic, qtd);

  printf("\nQual indice de veiculo voce quer alterar? ");
  scanf("%i", &altera);

  // passa por referência (permissão de edição) somente o 
  // registro da posição que o usuário escolheu alterar
  alteraVeiculo(&veic[altera]);

  // passa o vetor de registros inteiro e a variável qtd por
  // parâmetro, dando permissão de leitura e edição dos valores
  imprime(veic, qtd);

  return 0;
}
