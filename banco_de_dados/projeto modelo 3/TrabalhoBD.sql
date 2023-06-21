CREATE DATABASE IF NOT EXISTS TrabalhoBD;
USE TrabalhoBD;
CREATE TABLE IF NOT EXISTS cliente
(idcliente INT AUTO_INCREMENT,
 cpf CHAR(11),
 nome VARCHAR(45),
 dataNascimento DATE,
 endereco VARCHAR(100),
 PRIMARY KEY (idcliente)
);

CREATE TABLE IF NOT EXISTS contaBancaria
(numeroConta INT AUTO_INCREMENT,
 saldo DECIMAL,
 tipoConta VARCHAR(45),
 idcliente INT,
 PRIMARY KEY (numeroConta),
 FOREIGN KEY (idcliente) REFERENCES cliente (idcliente)
);

CREATE TABLE IF NOT EXISTS transacao 
(idtransacao INT AUTO_INCREMENT, 
 dataHora TIMESTAMP,
 tipoTransacao VARCHAR(45),
 valor DECIMAL,
 descricao VARCHAR(80),
 numeroConta INT,
 PRIMARY KEY (idtransacao),
 FOREIGN KEY (numeroConta) REFERENCES contaBancaria (numeroConta)
);

CREATE TABLE IF NOT EXISTS transferencia
(idtransferencia INT AUTO_INCREMENT,
 contaOrigem INT,
 contaDestino INT, 
 idtransacao INT,
 PRIMARY KEY (idtransferencia),
 FOREIGN KEY (idtransacao) REFERENCES transacao (idtransacao)
);

INSERT INTO cliente(cpf, nome, dataNascimento, endereco) VALUES
('47833210899','Larissa Gomes', '1998-01-20', 'Rua das Aves, 71'),
('79841120354', 'Murilo Lopes', '1992-05-12', 'Rua das Magnolias, 171'),
('44491520366', 'Laura da Silva Benicio', '1983-09-17','Rua dos Manacas, 87'),
('12045689721','Giovani Alves', '1978-04-30', 'Rua Rio Tamisa, 45'),
('64597812358', 'Camila Oliveira', '1995-03-16', 'Avenida Ayrton Sena, 749'),
('79844456122', 'Lucas Gabriel da Silva', '1990-10-11', 'Rua Tamandare, 763'),
('46947988721','Joana da Silva Moraes','1999-01-03', 'Rua das Oliveiras, 123');

INSERT INTO contaBancaria(saldo, tipoConta, idcliente) VALUES
('1500', 'Salario', '1'),
('42000', 'Corrente', '2'),
('3500', 'Salario', '3'),
('5000', 'Poupanca', '4'),
('2100', 'Salario', '5'),
('4000', 'Salario', '6'), 
('7000', 'Corrente', '7'),
('2800', 'Corrente', '1'),
('10000', 'Poupança', '2'),
('7500', 'Poupança', '3'),
('3500', 'Corrente', '4'),
('500', 'Corrente', '5'),
('6000', 'Poupanca', '6'), 
('6500', 'Salario', '7');

INSERT INTO transacao(dataHora, tipoTransacao, valor, numeroConta) VALUES
('2023-05-10 12:35:00', 'Pix', '12500', '6'),
('2023-06-10 16:07:00', 'Deposito', '3500', '2'),
('2023-05-23 09:35:00', 'Pix', '150', '4'),
('2023-06-11 20:42:00', 'Deposito', '10000', '3'),
('2023-06-07 12:35:00', 'Saque', '2500', '1');

INSERT INTO transferencia(contaOrigem, contaDestino, idtransacao) VALUES
('6', '3', '1'),
('2', '7', '2'),
('7', '4', '3'),
('3', '1', '4'),
('1', '5', '5');

#Mostrar o saldo de cada cliente que seja maior que 1000.
SELECT c.nome, cc.saldo
FROM cliente c INNER JOIN contaBancaria cc
WHERE c.idcliente = cc.idcliente AND cc.saldo > 1000
ORDER BY cc.saldo ASC;

#Mostrar a quantidade de transações do tipo 'PIX'
SELECT count(t.tipoTransacao) AS 'Quantidade de pix'
FROM transacao t
WHERE tipoTransacao ='PIX';

#Mostrar nome e data dos clientes que nasceram antes de 1985.
SELECT c.nome, c.dataNascimento
FROM cliente c
WHERE year(dataNascimento)<1985
ORDER BY 2 ASC;

#Mostrar os clientes que tem o saldo em sua conta maior que 3000.
SELECT idcliente, nome
FROM cliente
WHERE idcliente IN
(SELECT idcliente
FROM contaBancaria
WHERE saldo > 3000);

#Mostrar a soma total dos valores em cada tipo de transação que seja menor que 10000.
SELECT t.tipoTransacao, sum(t.valor) AS 'Valor Somado'
FROM transacao t
GROUP BY 1
HAVING sum(t.valor)<10000
ORDER BY 2 DESC;

#Alterar o saldo do cliente '1' para 8000.
UPDATE contaBancaria
SET saldo = 8000
WHERE idcliente = 1;

#Adicionar a tabela 'cliente' a coluna telefone.
ALTER TABLE cliente ADD telefone INT;

#Mostrar a soma total de cada tipo de conta.
SELECT tipoConta, sum(saldo) AS "Saldo total por tipo de conta"
FROM contaBancaria
GROUP BY tipoConta;

#Mostrar a soma total de cada tipo de transação.
SELECT tipoTransacao, sum(valor) AS 'Valor somado'
FROM transacao
GROUP BY tipoTransacao
ORDER BY 2 ASC;

#Alterar o endereço do cliente '4'.
UPDATE cliente
SET endereco = 'Rua Francisco Lagos, 21'
WHERE idcliente = 4;

#Mostrar a média de saldo de todas contas bancárias.
SELECT FORMAT(AVG(saldo), 1) AS "Media saldo nas conta bancarias" 
FROM contaBancaria;

#Mostrar quantos clientes nasceram após 1990.
SELECT count(idcliente) AS 'Quant. de clientes nascidos depois de 1990'
FROM cliente 
WHERE YEAR(dataNascimento)>'1990';






