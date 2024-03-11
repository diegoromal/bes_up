const saida = document.getElementById("saida");

let frutas = ["Maça", "Banana", "Laranja", "Abacaxi", "Morango"];

saida.innerText += "\n";
frutas.forEach((elemento, chave) => {
    saida.innerText += "\n Chave:  " + chave + " Valor: " + elemento;
});

frutas.push("Melancia");
saida.innerText += "\n\n Adicionando no final do vetor: " + frutas;

frutas.pop();
saida.innerText += "\n\n Removendo ultimo elemento: " + frutas;

frutas.unshift("Melancia");
saida.innerText += "\n\n Adicionando no inicio do vetor: " + frutas;

frutas.shift();
saida.innerText += "\n\n Removendo primeiro elemento: " + frutas;

let novoVetor = frutas.slice(1, 4);
saida.innerText += "\n\n Novo vetor: " + novoVetor;

frutas.splice(1, 1);
saida.innerText += "\n\n Removendo um item: " + frutas;

frutas.splice(1, 0, "Banana");
saida.innerText += "\n\n Adicionando um item: " + frutas;

let key = frutas.indexOf("Maça");
saida.innerText += "\n\n Index da maça: " + key;
