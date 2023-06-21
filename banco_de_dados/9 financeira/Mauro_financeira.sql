/*Script BD: Finacneira*/

create database if not exists Financeira;
use Financeira;
show databases;

#criar tabela cliente
create table if not exists cliente(
	CodCliente     int auto_increment not null,
	NomeCliente    varchar(30)        not null,
	RuaCliente     varchar(10)        not null,
	CidadeCliente  varchar(30)        not null,
	primary key(CodCliente)
);

#criar tabela agencia
create table if not exists agencia(
	CodAgencia     int          not null,
	NomAgencia     varchar(30)  not null,
	CidadeAgencia  varchar(30)  not null,
	primary key(CodAgencia)
);

#criar tabela emprestmo
create table if not exists emprestimo(
	NumEmprest      int           not null,
	Valor           decimal(15,2)  not null,
	primary key(NumEmprest)
);


#inserir dados na tabela cliente
insert into cliente values
	(1,'Luis Sampaio','Rua A','Rio de Janeiro'),
    (2,'Carlos Pereira','Rua B','Niteroi'),
    (3,'Jose Alves','Rua C','Rio de Janeiro'),
    (4,'Luis Paulo Souza','Rua B','Niteroi');

#inserir dados na tabela agencia
insert into agencia values
	(1,'Rio Branco','Rio de Janeiro'),
    (2,'Icarai','Niteroi'),
    (3,'Leblon','Rio de Janeiro'),
    (4,'Ipanema','Rio de Janeiro'),
    (5,'Copacabana','Rio de Janeiro');

#inserir dados na tabela emprestimo
insert into emprestimo values
	(902230,500.00),
    (902231,1500.00),
    (902240,1200.00),
    (902289,3000.00),
    (902255,850.00),
    (902299,700.00),
    (902212,400.00);

#relacionar tabela emprestimo-cliente
alter table emprestimo
add column CodCliente int,
add foreign key(CodCliente) references cliente(Codcliente);

#relacionar tabela emprestimo-agencia
alter table emprestimo
add column CodAgencia int,
add foreign key(CodAgencia) references agencia(CodAgencia);

#atualizar tabela emprestimo(cliente)
update emprestimo set CodCliente=1 where NumEmprest=902230;
update emprestimo set CodCliente=1 where NumEmprest=902231;
update emprestimo set CodCliente=2 where NumEmprest=902240;
update emprestimo set CodCliente=3 where NumEmprest=902289;
update emprestimo set CodCliente=1 where NumEmprest=902255;
update emprestimo set CodCliente=3 where NumEmprest=902299;
update emprestimo set CodCliente=3 where NumEmprest=902212;

#atualizar tabela emprestimo(agencia)
update emprestimo set CodAgencia=1 where NumEmprest=902230;
update emprestimo set CodAgencia=3 where NumEmprest=902231;
update emprestimo set CodAgencia=4 where NumEmprest=902240;
update emprestimo set CodAgencia=2 where NumEmprest=902289;
update emprestimo set CodAgencia=3 where NumEmprest=902255;
update emprestimo set CodAgencia=1 where NumEmprest=902299;
update emprestimo set CodAgencia=4 where NumEmprest=902212;

#criar tabela conta_corrente
create table if not exists bconta(
NumConta       int           not null,
CodAgencia     int           not null,
CodCliente     int           not null,
Saldo          decimal(15,2) not null,
primary key (NumConta,CodAgencia),
foreign key(CodCliente) references cliente(CodCliente),
foreign key(CodAgencia) references agencia(CodAgencia)
);

#inserir dentro da tabela boletim
insert into bconta values
	(256589,1,1,1200.00),
    (328941,3,1,845.00),
	(749621,4,3,512.00),
	(856200,2,2,2650.00),
	(454501,3,4,800.00),
	(468952,2,3,6920.00),
	(278156,4,1,10000.00);

select * from cliente;
select * from agencia;
select * from emprestimo;
select * from bconta;

#1. Exibir os dados da conta com os respectivos nomes de clientes.
select b.*,c.NomeCliente from bconta b inner join cliente c
on c.CodCliente=b.CodCliente
order by CodAgencia;

#2. Exibir a soma de todos os empréstimos por agência.
select a.CodAgencia, a. NomAgencia, sum(e.valor) as 'Total de Emprestimos' from agencia a inner join emprestimo e
on a.CodAgencia=e.CodAgencia
group by CodAgencia;

#3. Exibir o somatório de empréstimo por agência bancária apresentando o nome da agência e a cidade.
select a.CodAgencia, a.NomAgencia, a.CidadeAgencia, sum(e.valor) as 'Total de Emprestimos' from agencia a inner join emprestimo e
on a.CodAgencia=e.CodAgencia
group by CodAgencia;

#4. Mostrar o maior valor de empréstimo de cada cliente com o respectivo nome.
select c.CodCliente, c.NomeCliente, max(e.valor) from cliente c inner join emprestimo e
on c.CodCliente=e.CodCliente
group by CodCliente;

#5. Mostrar o cliente com o menor valor de empréstimo.
select c.CodCliente, c.NomeCliente, min(e.valor) from cliente c inner join emprestimo e
on c.CodCliente=e.CodCliente
group by CodCliente
order by 3
limit 1;

#6. Mostrar o valor médio dos empréstimos por agência.
select a.CodAgencia, a.NomAgencia, format(avg(e.valor),2) as 'Valor Medio Emprestimos' from agencia a inner join emprestimo e
on a.CodAgencia=e.CodAgencia
group by CodAgencia;

#7. Mostrar os dois menores valores médios dos empréstimos e as respectivas agencias.
select a.CodAgencia, a.NomAgencia, format(avg(e.valor),2) as 'Menor Valor Medio Emprestimos' from agencia a inner join emprestimo e
on a.CodAgencia=e.CodAgencia
group by CodAgencia
order by avg(e.valor) asc
limit 2;

#8. Exibir o saldo total por agência.
select b.CodAgencia, a.NomAgencia, sum(b.Saldo) as 'Saldo Total' from agencia a inner join bconta b
on a.CodAgencia=b.CodAgencia
group by CodAgencia;
#ou:
select CodAgencia, sum(Saldo) as 'Saldo Total' from bconta
group by CodAgencia;

#9. Quantos clientes estão com saldo inferior a R$1.000,00.
select count(*) as 'Qtde de clientes inferior a R$1.000' from bconta
group by CodCliente
having sum(saldo)<1000.00;
#ou:
select c.CodCliente, c.NomeCliente, count(*) as 'Qtde de clientes inferior a R$1.000' from cliente c inner join bconta b
on c.CodCliente=b.CodCliente
group by CodCliente
having sum(b.Saldo)<1000.00;

#10.Quais são os clientes cujo saldo é maior que R$ 2.500,00.
select CodCliente, sum(Saldo) from bconta
group by CodCliente
having sum(saldo)>2500.00;
#ou:
select c.CodCliente, c.NomeCliente, sum(b.saldo) as 'Saldo Maior R$2500.00' from cliente c inner join bconta b
on c.CodCliente=b.CodCliente
group by CodCliente
having sum(b.saldo)>2500.00
order by 3;

#11.Qual o saldo médio por cliente.
select CodCliente, format(avg(saldo),2) as 'Saldo Medio' from bconta
group by CodCliente;
#ou:
select c.CodCliente, c.NomeCliente, format(avg(b.saldo),2) as 'Saldo Medio' from cliente c inner join bconta b
on c.CodCliente=b.CodCliente
group by CodCliente;

#12.Qual o comando para alterar o saldo da conta corrente = 278156 para saldo=6500.
update bconta set saldo=6500.00 where Numconta=278156;
#verificacao, tem versao que precisa colocar as duas chaves uma and outra:
select * from bconta;

#13.Reduzir em 10% o saldo dos empréstimos da agência código=2.
update emprestimo set valor=valor-(valor*0.1) where CodAgencia=2;
#verificacao:
select CodAgencia, valor from emprestimo where CodAgencia=2;

#14.Corrigir o saldo das contas em 15% de acréscimo da agência =3.
update bconta set saldo=saldo+(saldo*0.15) where CodAgencia=3;
#verificacao:
select CodAgencia, saldo from bconta where CodAgencia=3;

#15.Qual cliente não possui empréstimo?
select c.CodCliente, c.NomeCliente, e.valor from cliente c left join emprestimo e
on c.CodCliente=e.CodCliente
order by 3 asc
limit 1;
#outra forma:
select CodCliente, NomeCliente from cliente
where CodCliente not in (select CodCliente from emprestimo where valor>0);

#16.Qual cliente tem empréstimo com valor de R$ 500?
select c.CodCliente, c.NomeCliente, e.valor from cliente c inner join emprestimo e
on c.CodCliente=e.CodCliente
having e.valor=500.00;
#ou:
select CodCliente, valor from emprestimo
having valor=500.00;

#17.Qual cliente tem saldo maior que R$ 6500?
select c.CodCliente, c.NomeCliente, sum(b.saldo) as 'Saldo Total' from cliente c inner join bconta b
on c.CodCliente=b.CodCliente
group by CodCliente
having sum(b.saldo)>6500.00;
#ou:
select CodCliente, sum(saldo) from bconta
group by CodCliente
having sum(saldo)>6500.00;
#outra forma:
select CodCliente, NomeCliente from cliente
where CodCliente in (select CodCliente from bconta where saldo>6500);

#18.Quais são os clientes que tem conta corrente na agência=2?
select c.CodCliente, c.NomeCliente, b.CodAgencia from cliente c inner join bconta b
on c.CodCliente=b.CodCliente
having b.CodAgencia=2;
#ou:
select CodCliente, CodAgencia from bconta
having CodAgencia=2;
#outra forma:
select CodCliente, NomeCliente from cliente
where CodCliente in (select CodCliente from bconta where CodAgencia=2);

#19.Quais são os clientes que tem conta corrente na agência=2 com saldo >3000?
select c.CodCliente, c.NomeCliente, b.Codagencia, b.saldo as 'Saldo Total' from cliente c inner join bconta b
on c.CodCliente=b.CodCliente
having b.CodAgencia=2 and b.saldo>3000;

#20.Qual agência não tem cliente cadastrado?
select a.CodAgencia, a.NomAgencia, b.CodCliente from agencia a left join bconta b
on a.CodAgencia=b.CodAgencia
order by 2
limit 1;

#21.Qual a agência não realizou empréstimo?
select a.CodAgencia, a.NomAgencia, e.NumEmprest from agencia a left join emprestimo e
on a.CodAgencia=e.CodAgencia
order by 2
limit 1;

