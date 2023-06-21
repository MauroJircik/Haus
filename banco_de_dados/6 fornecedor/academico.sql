/* laboratório 3*/

create database if not exists academico_2023;
use academico_2023;

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
values ('ADS', 'Analise de Sistemas','Antonio'),
       ('MSI','Informatica','Rubens');

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

# 1. Listar todos os alunos cadastrados na tabel ALUNO
select * from ALUNO;

#2. Listar da tabela CURSO, o idCurso e o nome
select idCurso,nome from CURSO;

#3. Selecionar todos os alunos com prontuário diferente de 12345678.
select * from aluno where prontuario!=12345678;

#4. Selecionar todos os alunos com nota>6 da disciplina banco de dados.
select * from BOLETIM where nota>6;

#5. Verificar o que acontece se tentar inserir um aluno com os seguintes dados.
# O que deve ser feito para efetivar esta inclusão. 
# Prontuario = 232323 Nome= Marcos Santos RG=66666 Endereço =null 
#fazer uma alteração na tabela
#alter table ALUNO modify column endereco 
#insert into ALUNO (endereco) VALUES (NULL);
insert into ALUNO
values ('232323','Marcos Santos','NULL','66666','ADS');
select * from ALUNO;

#6. Selecionar os alunos cujo nomes comecem com “M”.
select * from ALUNO where nome like'M%';

#7. Inserir dados no boletim para o aluno Marcos Santos sendo: 
# Para a disciplina banco de dados = 8.5
# Para a disciplina lógica =7.3 
insert into BOLETIM
values (1,'232323',8.5),
       (2,'232323',7.3);
select * from BOLETIM;

#8. Mostrar os alunos cujas notas sejam maiores que 4 e menores que 6.
select * from BOLETIM where nota between '4' and '6';

#9. Selecionar os alunos cujos nomes não comecem com M
select * from ALUNO where nome not like'M%';

#10. Exibir os alunos com endereço nulo.
select * from ALUNO where endereco is null;

#11. Calcular a média das notas de todos os alunos que frequentaram a disciplina de
#Lógica. Exibir o título da coluna como ‘média notas’ e usar a nota com 1 casa
#decimal.
select format(avg(nota),1) as 'media notas'
from BOLETIM
where idDisciplina=2;

#12. Contar quantos alunos estão cadastrados
select count(*) from ALUNO;

#13. Exibir a nota média por disciplina;
select idDisciplina, format(avg(nota),1) as 'nota media'
from BOLETIM
group by idDisciplina;

#14. Exibir a nota média por prontuário de aluno;
select prontuario, format(avg(nota),1) as 'nota media'
from BOLETIM
group by prontuario;

#15. Mostrar quantos alunos tem nota maior que 6.
select count(*)
from BOLETIM
where (nota)>6;

#16. Mostrar por disciplina cuja média seja maior que 6 ( Visualizar iddisciplina, média da nota).
select idDisciplina, format(avg(nota),1) as 'nota media'
from BOLETIM
group by idDisciplina
having avg(nota)>6
order by 1;

#17. Para cada prontuário mostrar somente os dados cujas médias sejam maiores que 7
#(Exibir prontuário, média da nota). Exibir por ordem decrescente de nota.
select prontuario, format(avg(nota),1) as 'nota media'
from BOLETIM
group by prontuario
having avg(nota)>7
order by 2 desc;

#18. Exibir a maior nota registrada no boletim.
select max(nota) from BOLETIM;

#19. Exibir o prontuário, a identificação da disciplina e a nota para a menor nota
#registrada no boletim.
select prontuario, idDisciplina, nota
from BOLETIM
order by 3
limit 1;

#20. Exibir o prontuário, a identificação da disciplina e a nota das 2 maiores notas
#registradas no boletim.
select iddisciplina, prontuario, nota
from BOLETIM
order by 3 desc
limit 2;

#21. Analisar o erro da inserção do seguinte registro na tabela aluno. O que deveria ser
#feito para corrigir (erro no nome do curso Matemática)
insert into aluno values
(234, "Ana Maria Braga", "Av das Nações Unidas,100", 121212, "Matemática"),
(12345678, "Carolina", "Rua D. Aguirre,300", 123456, "ADS");

alter table curso modify coordenador Varchar(20) null;	# permitir que o coordenador do curso ser NULL

insert into curso values
("MAT", "Matemática", NULL);
insert into aluno values
(234, "Ana Maria Braga", "Av das Nações Unidas,100", 121212, "MAT"),
(12345674, "Carolina", "Rua D. Aguirre,300", 123456, "MAT"); 
