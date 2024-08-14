// 1 - Definir a variavel com o vetor de inteiros
int tamanho = 100;

int[] vetor = new int[tamanho];

// 3 - Gerar os valores aleatorios com C#
Random random = new Random();

// 2 - Percorrer o vetor com um laço de repetição
for (int i = 0; i < vetor.Length; i++) {
    vetor[i] = random.Next(tamanho);
}

for (int i = 0; i < vetor.Length; i++) {
    Console.Write(vetor[i] + " ");
}

// 4 - Ordenar o vetor usando Bubble Sort
for (int i = 0; i < vetor.Length - 1; i++) {
    if (vetor[i] > vetor[i + 1]) {
        int atual = vetor[i];
        vetor[i] = vetor[i + 1];
        vetor[i + 1] = atual;
    }
}

Console.WriteLine("\n");
for (int i = 0; i < vetor.Length; i++) {
    Console.Write(vetor[i] + " ");
}