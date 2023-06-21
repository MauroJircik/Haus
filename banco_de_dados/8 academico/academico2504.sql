#script ativiade aula 5 a ser executado para deenvolvimento da atividade 5
create database if not exists academico5;
use ACADEMICO5;

create table if not exists curso
(idCurso        char(3)      not null,
 nome           varchar(30)  not null,
 coordenador    Varchar(20)  not null,
 primary key(idCurso));


create table if not exists aluno
(prontuario     char(8)      not null,
 nome           varchar(30)  not null,
 endereco       Varchar(30)  not null,
 RG             char(11)     not null,
 idCurso        char(3)      not null,
 primary key(prontuario),
 foreign key (idCurso) references curso(idCurso));


create table if not exists disciplina
(idDisciplina   integer      not null,
 idCurso        char(3)      not null,
 nomeDis        varchar(30)  not null,
 numCreditos    integer      not null,
 primary key(idDisciplina),
 foreign key (idCurso) references curso(idCurso));

create table if not exists boletim
(idDisciplina   integer      not null,
 prontuario     char(8)      not null,
 nota           decimal(4,2)  not null,
 primary key (idDisciplina,prontuario),
 foreign key(idDisciplina) references disciplina(idDisciplina),
 foreign key(prontuario) references aluno(prontuario));
 
insert into CURSO
values ('ADS', 'Analise de Sistemas','João'),
       ('MSI','Informatica','Joana'),
	   ('ECA','Engenharia','Carlos'),
       ('GET','Especialização','Benedita');

/* inserir dados na tabela aluno*/
insert into ALUNO
values ('12345678','Maria das Dores','Rua das Flores,100','010101','ADS'),
       ('12345677','Joao do Pulo','Rua das Flores,200','02020202','MSI'),
       ('12345688','Almerinda de Jesus','Rua das Orquideas,500','303030','ADS');

/* inserir dados na tabela disciplina*/
insert into DISCIPLINA
values (1,'ADS','Banco de Dados',5),
       (2,'ADS','Lógica de Programação',5),
       (3,'ADS','Informática',3),
       (4,'ADS','Engenharia de Software',5);

/* inserir dados na tabela boletim*/
insert into BOLETIM
values (1,'12345678',6.0),
       (1,'12345677',8.0),
       (1,'12345688',2.3),
       (2,'12345678',5.0),
       (2,'12345677',10.0),
       (3,'12345688',2.3);

select * from curso;
select * from aluno;
select * from disciplina;
select * from boletim;
       
#1. Alterar a estrutura da tabela CURSO para incluir o atributo dataCurso tipo date.
alter table curso
add column dataCurso date;
select * from curso;

#2. Alterar os dados para atualizar as respectivas datas. 
update curso set dataCurso='2008-02-01' where idCurso='ADS';
update curso set dataCurso='2019-03-20' where idCurso='ECA';
update curso set dataCurso='2017-08-01' where idCurso='GET';
update curso set dataCurso='2015-12-10' where idCurso='MSI';
select * from curso;

#3. Alterar a estrutura da tabela ALUNO para incluir o atributo dataNasc tipo date e 
#atualizar os dados conforme imagem.
alter table aluno
add column dataNasc date;
select * from aluno;
update aluno set dataNasc='1960-10-10' where prontuario='12345677';
update aluno set dataNasc='1991-05-22' where prontuario='12345678';
update aluno set dataNasc='1977-04-27' where prontuario='12345688';
select * from aluno;

#4. Exibir os alunos que nasceram no ano de 1991.
select nome, dataNasc from aluno
where year(dataNasc)='1991';

#5. Exibir o nome do aluno, a data nascimento e idade de cada aluno, conforme imagem
select protuario, nome, dataNasc 
truncate(datediff(curdate(),datanasc)/365,0) as 'idade'
from aluno
group by prontuario;

#6. Exibir os dados do curso mais antigo.
select idCurso, nome, dataCurso
from curso
order by dataCurso asc
limit 1;

#7. Exibir os dados do aluno indicando o dia e mês 
#por extenso do aniversario conforme print a seguir. 
select a.prontuario, a.nome, date_format(a.dataNasc,'%d/%M/%y') as 'aniversario', c.nome
from aluno a inner join curso c
on a.idCurso = c.idCurso
order by 4;

#8. Repetir a query anterior e mostrar também os cursos q ainda não tem aluno
#cadastrado
select a.prontuario, a.nome, date_format(a.dataNasc,'%d/%M/%y') as 'aniversario', c.nome
from aluno a right join curso c
on a.idCurso = c.idCurso
order by 4;

#9. Repetir a query anterior e mostrar apenas os alunos cujos nomes iniciem com J
select a.prontuario, a.nome, date_format(a.dataNasc,'%d/%M/%y') as 'curso', c.nome
from aluno a right join curso c
on a.idCurso = c.idCurso
where a.nome like 'J%';

#10. Há quantos dias os cursos estão em funcionamento.
select idCurso, nome, datediff(curdate(),dataCurso)
from curso;

#11. Exibir por nome da disciplina e a média das notas obtidas 
select d.idDisciplina, d.nomeDis, format(avg(b.nota),1) as 'media'
from disciplina d inner join boletim b
on d.idDisciplina=b.idDisciplina
group by d.idDisciplina;



 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 