import sqlite3
class Disciplina:

    def __init__(self, conn):
        self.conn = conn
        self.cursor = self.conn.cursor()
        self.id_disciplina = 0
        self.nome_disciplina = ""
        self.num_creditos = ""
        self.id_curso = 0

    def inserir_disciplina(self, tupla):
        try:
            self.cursor.execute("INSERT INTO disciplina (nome_disciplina, num_creditos, id_curso) VALUES (?, ?, ?);", tupla)
            self.conn.commit()
            print(f"Disciplina inserida com sucesso!")
        except sqlite3.IntegrityError:
            print(f"Erro. O ID de curso {tupla[2]} não existe.")
            input("Pressione <ENTER> para continuar...")

    def atualizar_disciplina(self, nomeDisciplina_numCreditos_IDcurso):
        try:
            if nomeDisciplina_numCreditos_IDcurso[0] == 1:
                self.cursor.execute("UPDATE disciplina SET nome_disciplina = ? WHERE id_disciplina = ?;", (nomeDisciplina_numCreditos_IDcurso[1], nomeDisciplina_numCreditos_IDcurso[2]))
                self.conn.commit()
                print("Nome da disciplina atualizada com sucesso!")
                input("Pressione <ENTER> para continuar...")
            elif nomeDisciplina_numCreditos_IDcurso[0] == 2:
                self.cursor.execute("UPDATE disciplina SET num_creditos = ? WHERE id_disciplina = ?;", (nomeDisciplina_numCreditos_IDcurso[1], nomeDisciplina_numCreditos_IDcurso[2]))
                self.conn.commit()
                print("Número de créditos atualizado com sucesso!")
                input("Pressione <ENTER> para continuar...")
            elif nomeDisciplina_numCreditos_IDcurso[0] == 3:
                self.cursor.execute("UPDATE disciplina SET id_curso = ? WHERE id_disciplina = ?;", (nomeDisciplina_numCreditos_IDcurso[1], nomeDisciplina_numCreditos_IDcurso[2]))
                self.conn.commit()
                print("ID do curso atualizado com sucesso!")
                input("Pressione <ENTER> para continuar...")
            else:
                print("Desculpe. A opção escolhida não é válida.")
        except sqlite3.IntegrityError:
            print(f"Erro. O ID de curso {nomeDisciplina_numCreditos_IDcurso[1]} não existe.")
            input("Pressione <ENTER> para continuar...")

    def consultar_disciplina(self):
        self.cursor.execute("SELECT * FROM disciplina;")
        resultado = self.cursor.fetchall()
        if resultado:
            print("{:<15} {:<45} {:<14} {:<15}".format("id_disciplina", "nome_disciplina", "num_creditos", "id_curso"))
            for item in range(len(resultado)):
                print("{:<15} {:<45} {:<14} {:<15}".format(resultado[item][0], resultado[item][1], resultado[item][2], resultado[item][3]))
        input("Pressione <ENTER> para continuar...")

    def excluir_disciplina(self, tupla_id_disciplina):
        self.cursor.execute("DELETE FROM disciplina WHERE id_disciplina = ?;", tupla_id_disciplina)
        self.conn.commit()
        print(f"Disciplina de id {tupla_id_disciplina[0]} foi DELETADA.")
