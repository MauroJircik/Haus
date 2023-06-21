import sqlite3
from sqlite3 import Error

def criar_banco(banco):
    conn = sqlite3.connect(banco)                        
    c = conn.cursor()
    try:
        c.execute("""
            PRAGMA foreign_keys = ON;
        """)               
        c.execute("""
            CREATE TABLE IF NOT EXISTS "curso" (
                "id_curso"      INTEGER NOT NULL,
                "nome_curso"    TEXT NOT NULL,
                "coordenador"   TEXT NOT NULL,
                PRIMARY KEY     ("id_curso" AUTOINCREMENT)
            );
        """)  
        c.execute("""
            CREATE TABLE IF NOT EXISTS "disciplina" (
                "id_disciplina"     INTEGER NOT NULL,
                "nome_disciplina"   TEXT NOT NULL,
                "num_creditos"      INTEGER NOT NULL,
                "id_curso"          INTEGER NOT NULL,
                PRIMARY KEY         ("id_disciplina" AUTOINCREMENT),
                FOREIGN KEY         ("id_curso") REFERENCES "curso" ("id_curso")
            );
        """)
        c.execute("""
            CREATE TABLE IF NOT EXISTS "aluno" (
                "prontuario"        INTEGER NOT NULL,
                "nome_aluno"        TEXT NOT NULL,
                "endereco_aluno"    TEXT NOT NULL,
                "rg_aluno"          TEXT NOT NULL,
                PRIMARY KEY         ("prontuario" AUTOINCREMENT)
            );
        """)
        c.execute("""
            CREATE TABLE IF NOT EXISTS "boletim" (
                "prontuario"       INTEGER NOT NULL,
                "id_disciplina"    INTEGER NOT NULL,
                "nota_aluno"       REAL NOT NULL,
                PRIMARY KEY        ("prontuario", "id_disciplina"),
                FOREIGN KEY        ("prontuario") REFERENCES "aluno" ("prontuario"),
                FOREIGN KEY        ("id_disciplina") REFERENCES "disciplina" ("id_disciplina")
            );
        """)

        # O comando abaixo mostra o nome de todas as colunas que foram criadas
        #
        #c.execute("""
        #    SELECT name FROM "sqlite_schema"
        #    WHERE type = 'table'
        #    ORDER BY name;
        #""")
        #resultado = c.fetchall()
        #for i in resultado:
        #    print(i, end=" ")
        print("Tabelas criadas com sucesso!")
        return conn

    except sqlite3.IntegrityError as e:
        print("Erro. Houve restrição de CHAVE-ESTRANGEIRA.")
    except Error as e:
        print(e)

    #finally:
    #    if conn:
    #        conn.close()
    #        print("Conexão com SQLite encerrada.")