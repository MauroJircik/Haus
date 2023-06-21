# SQL_Imobiliaria_AULA
create database if not exists Imobiliaria;
use Imobiliaria;
show databases;
#criar tabela
create table if not exists PROPRIETARIO (
idCPF int not null,
nomeProp varchar (45) not null,
enderecoProp varchar (45),
cidadeProp varchar (45),
estadoProp varchar (45),
CEPProp int,
teleProp int,
primary key (idCPF)
);
show tables;
desc PROPRIETARIO;

insert into proprietario values
(1234566,'Carlos Papel','Rua Brasil, 1000','Braganca Paulista','Sao Paulo',09080230,44345566);

select * from proprietario;


