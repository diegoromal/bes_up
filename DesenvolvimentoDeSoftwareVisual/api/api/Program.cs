using api.Entities;
using Microsoft.AspNetCore.Mvc;

var builder = WebApplication.CreateBuilder(args);
var app = builder.Build();

// List<Produto> produtos =
// [
//     new Produto(){Nome = "Notebook", Preco = 5000, Quantidade = 42},
//     new Produto(){Nome = "Mouse", Preco = 25, Quantidade = 32},
//     new Produto(){Nome = "Teclado", Preco = 50, Quantidade = 22},
//     new Produto(){Nome = "Monitor", Preco = 500, Quantidade = 12},
//     new Produto(){Nome = "Gabinete", Preco = 100, Quantidade = 2},
// ];

List<Produto> produtos = new List<Produto>();

app.MapGet("/", () => "API de Produtos!");

app.MapGet("/produto/listar", () => {
    if (produtos.Count() > 0) {
        return Results.Ok(produtos);
    }

    return Results.NotFound();    
});

app.MapGet("/produto/buscar/{nome}", (string nome) => {
    foreach (Produto produtoCadastrado in produtos) {
        if (produtoCadastrado.Nome == nome) {
            return Results.Ok(produtoCadastrado);
        }
    }

    return Results.NoContent();
});

app.MapPost("/produto/cadastrar", ([FromBody] Produto produto) => {
    produtos.Add(produto);

    return Results.Created("", produto);
});
// TODO: Ajustar método deletar
app.MapDelete("/produto/deletar", ([FromBody] Produto produto) => {
    produtos.Remove(produto);

    return Results.Ok();  

});
// TODO: Ajustar método atualizar
app.MapPut("/produto/atualizar", ([FromBody] Produto produto) => {
    produtos.Add(produto);

    return Results.Ok(produto);
});

app.Run();