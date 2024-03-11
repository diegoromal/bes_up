CREATE TABLE `cliente` (
	`id` INT NOT NULL AUTO_INCREMENT,
	`nome` varchar NOT NULL,
	`telefone` varchar NOT NULL,
	`sexo` varchar NOT NULL,
	`endereco` varchar NOT NULL,
	`data_de_nascimento` DATE NOT NULL,
	`cpf` varchar NOT NULL UNIQUE,
	`num_passaporte` varchar NOT NULL UNIQUE,
	`id_servico` INT NOT NULL,
	`id_reserva` INT NOT NULL,
	`id_pagamento` INT NOT NULL,
	PRIMARY KEY (`id`)
);

CREATE TABLE `quarto` (
	`id` INT NOT NULL AUTO_INCREMENT,
	`numero` INT NOT NULL,
	`andar` INT NOT NULL,
	`tipo` varchar NOT NULL,
	`descriçao` varchar NOT NULL,
	`valor_da_diaria` FLOAT NOT NULL,
	`id_servico` INT NOT NULL,
	PRIMARY KEY (`id`)
);

CREATE TABLE `reserva` (
	`id` INT NOT NULL AUTO_INCREMENT,
	`data_da_reserva` DATE NOT NULL,
	`data_de_entrada` DATE NOT NULL,
	`data_de_saida` DATE NOT NULL,
	`status` varchar NOT NULL,
	`id_quarto` INT NOT NULL,
	`id_pagamento` INT NOT NULL,
	PRIMARY KEY (`id`)
);

CREATE TABLE `servico` (
	`id` INT NOT NULL AUTO_INCREMENT,
	`tipo_de_servico` varchar NOT NULL,
	PRIMARY KEY (`id`)
);

CREATE TABLE `restaurante` (
	`id` INT NOT NULL AUTO_INCREMENT,
	`prato_solicitado` varchar NOT NULL,
	`quantidade` INT NOT NULL,
	`preco` FLOAT NOT NULL,
	`id_servico` INT NOT NULL,
	PRIMARY KEY (`id`)
);

CREATE TABLE `massagem` (
	`id` INT NOT NULL AUTO_INCREMENT,
	`data_e_hora_da_sessao` DATETIME NOT NULL,
	`tipo_da_massagem` varchar NOT NULL,
	`preco` FLOAT NOT NULL,
	`descricao_dos_produtos_utilizados` INT NOT NULL,
	`id_servico` INT NOT NULL,
	PRIMARY KEY (`id`)
);

CREATE TABLE `frigobar` (
	`id` INT NOT NULL AUTO_INCREMENT,
	`item_consumido` varchar NOT NULL,
	`quantidade` INT NOT NULL,
	`preco` FLOAT NOT NULL,
	`id_servico` INT NOT NULL,
	PRIMARY KEY (`id`)
);

CREATE TABLE `pagamento` (
	`id` INT NOT NULL AUTO_INCREMENT,
	`tipo_de_pagamento` varchar NOT NULL,
	`valor_pago` FLOAT NOT NULL,
	`data_do_pagamento` DATE NOT NULL,
	PRIMARY KEY (`id`)
);

CREATE TABLE `funcionario` (
	`id` INT NOT NULL AUTO_INCREMENT,
	`nome` varchar NOT NULL,
	`cargo` varchar NOT NULL,
	`id_permissao` INT NOT NULL,
	PRIMARY KEY (`id`)
);

CREATE TABLE `permissao` (
	`id` INT NOT NULL AUTO_INCREMENT,
	`permissao` varchar NOT NULL,
	PRIMARY KEY (`id`)
);

ALTER TABLE `cliente` ADD CONSTRAINT `cliente_fk0` FOREIGN KEY (`id_servico`) REFERENCES `servico`(`id`);

ALTER TABLE `cliente` ADD CONSTRAINT `cliente_fk1` FOREIGN KEY (`id_reserva`) REFERENCES `reserva`(`id`);

ALTER TABLE `cliente` ADD CONSTRAINT `cliente_fk2` FOREIGN KEY (`id_pagamento`) REFERENCES `pagamento`(`id`);

ALTER TABLE `quarto` ADD CONSTRAINT `quarto_fk0` FOREIGN KEY (`id_servico`) REFERENCES `servico`(`id`);

ALTER TABLE `reserva` ADD CONSTRAINT `reserva_fk0` FOREIGN KEY (`id_quarto`) REFERENCES `quarto`(`id`);

ALTER TABLE `reserva` ADD CONSTRAINT `reserva_fk1` FOREIGN KEY (`id_pagamento`) REFERENCES `pagamento`(`id`);

ALTER TABLE `restaurante` ADD CONSTRAINT `restaurante_fk0` FOREIGN KEY (`id_servico`) REFERENCES `servico`(`id`);

ALTER TABLE `massagem` ADD CONSTRAINT `massagem_fk0` FOREIGN KEY (`id_servico`) REFERENCES `servico`(`id`);

ALTER TABLE `frigobar` ADD CONSTRAINT `frigobar_fk0` FOREIGN KEY (`id_servico`) REFERENCES `servico`(`id`);

ALTER TABLE `funcionario` ADD CONSTRAINT `funcionario_fk0` FOREIGN KEY (`id_permissao`) REFERENCES `permissao`(`id`);











