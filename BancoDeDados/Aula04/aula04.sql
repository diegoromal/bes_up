CREATE TABLE `cliente` (
	`id_cliente` int NOT NULL AUTO_INCREMENT,
	`nome` varchar NOT NULL,
	`telefone` varchar NOT NULL,
	`sexo` varchar NOT NULL,
	`endereco` varchar NOT NULL,
	`data_de_nascimento` DATE NOT NULL,
	`cpf` varchar NOT NULL UNIQUE,
	`num_passaporte` varchar NOT NULL UNIQUE,
	`id_servico` int NOT NULL,
	`id_reserva` int NOT NULL,
	`id_pagamento` int NOT NULL,
	PRIMARY KEY (`id_cliente`)
);

CREATE TABLE `quarto` (
	`id_quarto` int NOT NULL AUTO_INCREMENT,
	`numero` int NOT NULL,
	`andar` int NOT NULL,
	`tipo` varchar NOT NULL,
	`descriao` varchar NOT NULL,
	`valor_da_diaria` FLOAT NOT NULL,
	`id_servico` int NOT NULL,
	PRIMARY KEY (`id_quarto`)
);

CREATE TABLE `reserva` (
	`id_reserva` int NOT NULL AUTO_INCREMENT,
	`data_da_reserva` DATE NOT NULL,
	`data_de_entrada` DATE NOT NULL,
	`data_de_saida` DATE NOT NULL,
	`status` varchar NOT NULL,
	`id_quarto` int NOT NULL,
	`id_pagamento` int NOT NULL,
	PRIMARY KEY (`id_reserva`)
);

CREATE TABLE `servico` (
	`id_servico` int NOT NULL AUTO_INCREMENT,
	`tipo_de_servico` varchar NOT NULL,
	PRIMARY KEY (`id_servico`)
);

CREATE TABLE `restaurante` (
	`id_restaurante` int NOT NULL AUTO_INCREMENT,
	`prato_solicitado` varchar NOT NULL,
	`quantidade` int NOT NULL,
	`preco` FLOAT NOT NULL,
	`id_servico` int NOT NULL,
	PRIMARY KEY (`id_restaurante`)
);

CREATE TABLE `massagem` (
	`id_massagem` int NOT NULL AUTO_INCREMENT,
	`data_e_hora_da_sessao` DATETIME NOT NULL,
	`tipo_da_massagem` varchar NOT NULL,
	`preco` FLOAT NOT NULL,
	`descricao_dos_produtos_utilizados` int NOT NULL,
	`id_servico` int NOT NULL,
	PRIMARY KEY (`id_massagem`)
);

CREATE TABLE `frigobar` (
	`id_frigobar` int NOT NULL AUTO_INCREMENT,
	`item_consumido` varchar NOT NULL,
	`quantidade` int NOT NULL,
	`preco` FLOAT NOT NULL,
	`id_servico` int NOT NULL,
	PRIMARY KEY (`id_frigobar`)
);

CREATE TABLE `pagamento` (
	`id_pagamento` int NOT NULL AUTO_INCREMENT,
	`tipo_de_pagamento` varchar NOT NULL,
	`valor_pago` FLOAT NOT NULL,
	`data_do_pagamento` DATE NOT NULL,
	PRIMARY KEY (`id_pagamento`)
);

CREATE TABLE `funcionario` (
	`id_funcionario` int NOT NULL AUTO_INCREMENT,
	`nome` varchar NOT NULL,
	`cargo` varchar NOT NULL,
	`id_permissao` int NOT NULL,
	PRIMARY KEY (`id_funcionario`)
);

CREATE TABLE `permissao` (
	`id_permissao` int NOT NULL AUTO_INCREMENT,
	`permissao` varchar NOT NULL,
	PRIMARY KEY (`id_permissao`)
);

ALTER TABLE `cliente` ADD CONSTRAINT `cliente_fk0` FOREIGN KEY (`id_servico`) REFERENCES `servico`(`id_servico`);

ALTER TABLE `cliente` ADD CONSTRAINT `cliente_fk1` FOREIGN KEY (`id_reserva`) REFERENCES `reserva`(`id_reserva`);

ALTER TABLE `cliente` ADD CONSTRAINT `cliente_fk2` FOREIGN KEY (`id_pagamento`) REFERENCES `pagamento`(`id_pagamento`);

ALTER TABLE `quarto` ADD CONSTRAINT `quarto_fk0` FOREIGN KEY (`id_servico`) REFERENCES `servico`(`id_servico`);

ALTER TABLE `reserva` ADD CONSTRAINT `reserva_fk0` FOREIGN KEY (`id_quarto`) REFERENCES `quarto`(`id_quarto`);

ALTER TABLE `reserva` ADD CONSTRAINT `reserva_fk1` FOREIGN KEY (`id_pagamento`) REFERENCES `pagamento`(`id_pagamento`);

ALTER TABLE `restaurante` ADD CONSTRAINT `restaurante_fk0` FOREIGN KEY (`id_servico`) REFERENCES `servico`(`id_servico`);

ALTER TABLE `massagem` ADD CONSTRAINT `massagem_fk0` FOREIGN KEY (`id_servico`) REFERENCES `servico`(`id_servico`);

ALTER TABLE `frigobar` ADD CONSTRAINT `frigobar_fk0` FOREIGN KEY (`id_servico`) REFERENCES `servico`(`id_servico`);

ALTER TABLE `funcionario` ADD CONSTRAINT `funcionario_fk0` FOREIGN KEY (`id_permissao`) REFERENCES `permissao`(`id_permissao`);











