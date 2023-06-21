class Usuarios:

    import sqlite3

    def __init__(self, conn):
        self.nomeCompleto = ""
        self.conn = conn
        self.cursor = self.conn.cursor()

    def inserir_user(self, usuarios, usuario):
        self.cursor.execute("INSERT INTO usuarios (nomeCompleto) VALUES (?);", usuario)
        self.conn.commit()
        return "Usuário inserido com sucesso!"

    def atualizar_user(self, usuario, atual_nome, idAtual_nome):
        self.cursor.execute("UPDATE usuarios SET nomeCompleto = ? where idUsuarios = ?;", (atual_nome, idAtual_nome))
        self.conn.commit()
        return "Usuário inserido com sucesso!"

    def consultar_user(self):
        self.cursor.execute("SELECT * FROM usuarios;")
        resultado = self.cursor.fetchall()
        if resultado:
            print("ID |\tNome Completo |")
            for item in range(len(resultado)):
                print(resultado[item][0],'\t',resultado[item][1])

        input("\nPressione <ENTER> para continuar...")
        return "Consulta realizada"


    def excluir_user(self, usuarios, exclui):
        self.cursor.execute("DELETE from usuarios where idUsuarios = ?;", exclui)
        self.conn.commit()
        return "Usuário excluído com sucesso!"



