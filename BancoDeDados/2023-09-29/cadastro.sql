CREATE DATABASE cadastro;
USE cadastro;

CREATE TABLE curso (
	id_curso INT PRIMARY KEY,
	nome_curso VARCHAR(255),
	descricao_curso VARCHAR(255),
	carga_horaria VARCHAR(255),
	total_aulas INT,
	ano_criacao INT
);

CREATE TABLE aluno (
	id_aluno INT PRIMARY KEY,
	nome_aluno VARCHAR(255),
	profissao VARCHAR(255),
	data_nascimento DATE,
	sexo VARCHAR(255),
	peso VARCHAR(255),
	altura VARCHAR(255),
	nacionalidade VARCHAR(255)
);

SELECT nome_aluno FROM aluno WHERE sexo = 'F';
SELECT * FROM aluno WHERE data_nascimento > '1990-01-01' AND data_nascimento < '2011-12-31' ORDER BY data_nascimento ASC;
SELECT * FROM aluno WHERE sexo = 'M' AND (profissao = 'Programador' OR profissao = 'Dentista') ORDER BY nome_aluno ASC;
SELECT * FROM aluno WHERE sexo = 'F' AND nacionalidade = 'Portugal' AND nome_aluno LIKE 'T%';
SELECT nome, nacionalidade FROM aluno WHERE sexo = 'M' AND nome_aluno LIKE '%Silva%' AND data_nascimento >= '1990-01-01' AND peso > '100';
SELECT * FROM curso WHERE carga_horaria > '30' AND carga_horario <= '60';
SELECT * FROM curso WHERE carga_horaria BETWEEN '30' AND '60';

SELECT SUM (peso / (altura * altura)) FROM alunos;

SELECT (peso / (altura * altura)) AS imc FROM aluno;

