#scrip ativiade aula 4 a ser executado para deenvolvimento da ativiade 4
create database if not exists academico;
use ACADEMICO;

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
values ('ADS', 'Analise de Sistemas','Clara'),
       ('MSI','Informatica','Maria'),
	   ('ECA','Engenharia','Moises'),
       ('GET','Especializacao','Joana');

/* inserir dados na tabela aluno*/
insert into ALUNO
values ('12345678','Maria das Dores','Rua das Flores,100','010101','ADS'),
       ('12345677','Joao do Pulo','Rua das Flores,200','02020202','MSI'),
       ('12345688','Almerinda de Jesus','Rua das Orquideas,500','303030','ADS');

/* inserir dados na tabela disciplina*/
insert into DISCIPLINA
values (1,'ADS','Banco de Dados',5),
       (2,'ADS','Logica de Programacao',5),
       (3,'ADS','Informatica',3),
       (4,'ADS','Engenharia de Software',5);

/* inserir dados na tabela boletim*/
insert into BOLETIM
values (1,'12345678',6.0),
       (1,'12345677',8.0),
       (1,'12345688',2.3),
       (2,'12345678',5.0),
       (2,'12345677',10.0),
       (3,'12345688',2.3);
       
select * from CURSO;
select * from ALUNO;
select * from DISCIPLINA;
select * from BOLETIM;

#1. Exibir os dados dos alunos e o nome do respectivo curso que está matriculado. 
select aluno.*, curso.nome
from aluno inner join curso
on aluno.idCurso=curso.idCurso;

#2. Listar da tabela ALUNO, o prontuário e o nome e da tabela DISCIPLINA o nome da 
#disciplina que cursa atualmente. 
select aluno.prontuario, aluno.nome, disciplina.nomeDis
from aluno inner join disciplina
on aluno.idCurso=disciplina.idCurso;

#3. Alterar o script anterior para ordenar por disciplina. 
select aluno.prontuario, aluno.nome, disciplina.nomeDis
from aluno inner join disciplina
on aluno.idCurso=disciplina.idCurso
order by 3;

#4. Exibir os cursos existentes e as disciplinas já cadastradas no sistema. 
select curso.nome, disciplina.nomeDis
from disciplina left join curso
on disciplina.idCurso=curso.idCurso;

#5. Exibir todos os cursos existentes e suas respectivas disciplinas (caso o curso não 
#tenha disciplina cadastrada tb exibir) 
select curso.nome, disciplina.nomeDis
from disciplina right join curso
on disciplina.idCurso=curso.idCurso;

#6. Listar da tabela ALUNO, o prontuário e o nome e da tabela BOLETIM a identificação 
#da disciplina que cursa e a nota obtida.
select aluno.prontuario, aluno.nome, boletim.idDisciplina, boletim.nota
from aluno inner join boletim
on aluno.prontuario=boletim.prontuario;

#7. Listar da tabela ALUNO, o prontuário e o nome e da tabela BOLETIM a identificação 
#da disciplina que cursa e cujas notas maior que 6 
select aluno.prontuario, aluno.nome, boletim.idDisciplina, boletim.nota
from aluno inner join boletim
on aluno.prontuario=boletim.prontuario
where boletim.nota>6;

#8. Listar da tabela ALUNO, o prontuário e o nome e da tabela BOLETIM a identificação 
#da disciplina que cursa e a nota obtida para os alunos cujos nomes iniciem com M. 
select aluno.prontuario, aluno.nome, boletim.idDisciplina, boletim.nota
from aluno inner join boletim
on aluno.prontuario=boletim.prontuario
where aluno.nome like'M%';

#9. Exibir a nota média por disciplina. (Visualizar idDisciplina, nomeDisciplina e média 
#das notas). 
select disciplina.idDisciplina, disciplina.nomeDis, avg(boletim.nota) as media
from disciplina inner join boletim
on disciplina.idDisciplina=boletim.idDisciplina
group by disciplina.iddisciplina;

#10. Exibir o nome, o prontuário do aluno com a maior nota. (Visualizar nome, prontuário 
#e nota)
select aluno.nome, aluno.prontuario, boletim.nota
from aluno inner join boletim
on aluno.prontuario=boletim.prontuario
order by 3 limit 1;

#11. Exibir o nome da disciplina com as duas menores notas. (Visualizar, nome disciplina e 
#nota) ???
select disciplina.nomeDis, boletim.nota
from disciplina inner join boletim
on disciplina.idDisciplina=boletim.idDisciplina
order by 2 limit 2;

#12. Criar uma consulta de modo que selecione dados de duas tabelas.
select aluno.nome, aluno.prontuario, boletim.nota
from aluno inner join boletim
on aluno.prontuario=boletim.prontuario
order by 3 desc;
      
      