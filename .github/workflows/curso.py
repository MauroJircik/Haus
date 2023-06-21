class Curso:

    def __init__(self, conn):
        self.conn = conn
        self.cursor = self.conn.cursor()
        self.id_curso = 0
        self.nome_curso = ""
        self.coordenador = ""

    def inserir_curso(self, tupla):
        self.cursor.execute("INSERT INTO curso (nome_curso, coordenador) VALUES (?, ?);", tupla)
        self.conn.commit()
        print(f"Curso inserido com sucesso!")

    def atualizar_curso(self, nomeCurso_coordenador):
        if nomeCurso_coordenador[0] == 1:
            self.cursor.execute("UPDATE curso SET nome_curso = ? WHERE id_curso = ?;", (nomeCurso_coordenador[1], nomeCurso_coordenador[2]))
            self.conn.commit()
            print("Nome do curso atualizado com sucesso!")
            input("Pressione <ENTER> para continuar...")
        elif nomeCurso_coordenador[0] == 2:
            self.cursor.execute("UPDATE curso SET coordenador = ? WHERE id_curso = ?;", (nomeCurso_coordenador[1], nomeCurso_coordenador[2]))
            self.conn.commit()
            print("Coordenador do curso atualizado com sucesso!")
            input("Pressione <ENTER> para continuar...")
        else:
            print("Desculpe. A opção escolhida não é válida.")

    def consultar_curso(self):
        self.cursor.execute("SELECT * FROM curso;")
        resultado = self.cursor.fetchall()
        if resultado:
            print("{:<13} {:<57} {:<15}".format("id_curso", "nome_curso", "coordenador"))
            for item in range(len(resultado)):
                print("{:<13} {:<57} {:<15}".format(resultado[item][0], resultado[item][1], resultado[item][2]))
        input("Pressione <ENTER> para continuar...")

    def excluir_curso(self, tupla_id_curso):
        self.cursor.execute("DELETE FROM curso WHERE id_curso = ?;", tupla_id_curso)
        self.conn.commit()
        print(f"Curso de id {tupla_id_curso[0]} foi DELETADO.")
