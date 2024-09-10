using System.Text.Json;
using api.Entities;
using Microsoft.AspNetCore.Http.HttpResults;

var builder = WebApplication.CreateBuilder(args);
var app = builder.Build();

List<Produto> produtos =
[
    new Produto(){Nome = "Notebook", Preco = 5000, Quantidade = 42},
    new Produto(){Nome = "Mouse", Preco = 25, Quantidade = 32},
    new Produto(){Nome = "Teclado", Preco = 50, Quantidade = 22},
    new Produto(){Nome = "Monitor", Preco = 500, Quantidade = 12},
    new Produto(){Nome = "Gabinete", Preco = 100, Quantidade = 2},
];

app.MapGet("/", () => "API de Produtos!");

app.MapGet("/produto/listar", () => {
    return Results.Ok(produtos);
});

app.MapPost("/produto/cadastrar/{nome}/{preco}/{quantidade}", (string nome, float preco, int quantidade) => {
    Produto produto = new Produto(){Nome = nome, Preco = preco, Quantidade = quantidade};
    produtos.Add(produto);

    return Results.Ok(produto);
});

app.MapPost("/produto/cadastrar", async (HttpRequest request) =>
{
    var produto = await request.ReadFromJsonAsync<Produto>();

    if (produto == null) {
        return Results.BadRequest("Dados do produto inválidos");
    }

    produtos.Add(produto);

    return Results.Ok(produto);
});

app.Run();