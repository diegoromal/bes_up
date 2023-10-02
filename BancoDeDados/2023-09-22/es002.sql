CREATE SCHEMA produtos_alimenticios;

CREATE TABLE produtos (
    id_produto INT PRIMARY KEY,
    nome_produto VARCHAR(255),
    categoria VARCHAR(255),
    preco VARCHAR(255)
);

CREATE TABLE clientes (
    id_cliente INT PRIMARY KEY,
    nome VARCHAR(255),
    logradouro VARCHAR(255),
    cep INT(8),
    cidade VARCHAR(255),
    estado VARCHAR(255),
    cpf VARCHAR(255),
    cnpj VARCHAR(255),
    telefone_celular INT(11),
    status VARCHAR(255),
    limite_credito VARCHAR(255)
);

CREATE TABLE pedidos (
    id_pedido INT PRIMARY KEY,
    data_pedido DATE NOT NULL,
    cliente_id INT,
    FOREIGN KEY (cliente_id) REFERENCES pedidos(id_cliente),
);