import sqlite3
from sqlite3 import Error

def criar_banco(banco):
    #Definindo variavel com a conexao com o banco
    connect = sqlite3.connect(banco)
    
    #definindo cursor para manipular dados do banco de dados, atualizar tem que ter self.conn.commit()
    cursor = connect.cursor()
    try:
        cursor.execute("""
            create table if not exists "usuarios"(
                "idUsuarios"      integer     not null,
                "nomeCompleto"  varchar(45)   not null unique,
                primary key("idUsuarios" autoincrement));
        """)

        cursor.execute("""
            create table if not exists "tarefas"(
                "idTarefa"        integer     not null,
                "descricao"     varchar(45)   not null,
                "dataInclusao"  varchar(45)   not null,
                "idUsuarios"       int,
                primary key("idTarefa" autoincrement),
                foreign key("idUsuarios") references "usuarios"("idUsuarios"));
        """)
        print("\n\033[4;34;44m# Criacao das Tabelas:\033[m")
        print("\033[1;32m   Tabela usuarios:\033[m")
        print("       ID | NomeCompleto      |")
        print("\033[1;32m   Tabela tarefas:\033[m")
        print("       ID | Descricao         | DataInclusao | ID Usuarios |")
        print("\n\033[1;34mOK!! - tabelas criadas com sucesso!\033[m")
        input("\nPressione <ENTER>...")
                 
        return connect

    except Error as e:
        print(e)

