#script para Laboratório 2
drop database if exists Atividade2;
CREATE DATABASE Atividade2;
use Atividade2;

CREATE TABLE IF NOT EXISTS FORNECEDOR (
IDFORNECEDOR INT  auto_increment NOT NULL,
NOME VARCHAR(45),
ENDERECO VARCHAR(45),
TELEFONE INT,
CIDADE VARCHAR(20) DEFAULT 'SÃO PAULO',
EMAIL VARCHAR(25) UNIQUE,
PRIMARY KEY (IDFORNECEDOR)
);

CREATE TABLE IF NOT EXISTS PRODUTO (
IDPRODUTO INT NOT NULL,
DESCRICAO VARCHAR(45),
PRECO DECIMAL(7,2),
UNIDADE VARCHAR(10),
IDFORNECEDOR INT NOT NULL,
PRIMARY KEY (IDPRODUTO),
foreign key (IDFORNECEDOR) references FORNECEDOR(IDFORNECEDOR)
);
INSERT INTO FORNECEDOR VALUES 
(1,'PAPEL RECICLADO','RUA BRASIL,1000',4441212,'BRAGANÇA PAULISTA',
'RECI@GMAIL.COM');

INSERT INTO FORNECEDOR VALUES
(IDFORNECEDOR, 'CASA BAHIA','RUA DO MERCADO,200',40338787,'BRAGANÇA PAULISTA',
'CASABAHIA@GMAIL.COM'),
(IDFORNECEDOR,'LOJA CEM','RUA DO COMERCIO,9000',40334455,'BRAGANÇA PAULISTA',
'LOJACEM@GMAIL.COM'),
(IDFORNECEDOR,'MAGAZINE LUIZA','RUA PIRES PIMENTEL,500',40331212, 'BRAGANÇA PAULISTA',
'LUIZA@GMAIL.COM');
SELECT * FROM FORNECEDOR;

INSERT INTO produto VALUES 
(100,'FOGAO',800.50,'PC',2),
(110,'GELADEIRA',2000.70,'PC',2),
(150,'FOGAO COOKTOP',1330.40,'PC',3),
(160,'AR CONDICIONADO',1800,'PC',4);

#item3
select * from fornecedor;
select * from produto;
 
#item 4 
insert into produto values
(161,'NOTEBOOK',3400.00,'PC',2),
(170,'IMPRESSORA',2800.00,'PC',2),
(180,'ASPIRADOR DE PO',256.00,'PC',1),
(181,'TV',3800.00,'PC',1),
(190,'TV',3900.00,'PC',2);

select * from produto;

#item 5
create table if not exists FAMILIA (
IDFAMILIA INT NOT NULL,
DESCRICAO VARCHAR(45),
PRIMARY KEY (IDFAMILIA)
);

insert into familia values
(1,'Linha Branca'),
(2,'Informatica');

select * from familia;

#item 6
alter table produto add column idFamilia int not null;
alter table produto add column qtde int;

select * from produto;

#item 7
update produto set idfamilia=1 where idproduto in (100,110,150);
update produto set idfamilia=2 where idproduto in (160,161,170,180,181,190);

update produto set qtde=8 where idproduto=100;
update produto set qtde=17 where idproduto=110;
update produto set qtde=10 where idproduto=150;
update produto set qtde=12 where idproduto in (160,161,170,180,181,190);

alter table produto
add foreign key (idfamilia)  references familia(idfamilia)
on delete cascade on update cascade;
select * from produto;

#mostrar todos os produtos da familia =2
select * from produto where idfamilia=2;
select * from produto where idfamilia=2 order by 2;
select * from produto where idfamilia=2 and preco>1800;
