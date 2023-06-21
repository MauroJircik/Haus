import sqlite3
class Boletim:

    def __init__(self, conn):
        self.conn = conn
        self.cursor = self.conn.cursor()
        self.prontuario = 0
        self.nota_aluno = 0
        self.id_disciplina = ""
        self.nome_disciplina = ""

    def inserir_boletim(self, tupla):
        try:
            self.cursor.execute("INSERT INTO boletim (prontuario, id_disciplina, nota_aluno) VALUES (?, ?, ?);", tupla)
            self.conn.commit()
            print(f"Nota inserida com sucesso!")
        except sqlite3.IntegrityError:
            # ver se prontuário existe
            self.cursor.execute("SELECT prontuario FROM aluno;")
            resultado = self.cursor.fetchall()
            tupla2 = (tupla[0], )
            if tupla2 not in resultado:
                print(f"Erro. O prontuário {tupla[0]} não existe.")
            # ver se id_disciplina existe
            self.cursor.execute("SELECT id_disciplina FROM disciplina;")
            resultado = self.cursor.fetchall()
            tupla2 = (tupla[1], )
            if tupla2 not in resultado:
                print(f"Erro. O ID de disciplina {tupla[1]} não existe.")
            # ver se o boletim já foi inserido antes no sistema
            self.cursor.execute("SELECT prontuario, id_disciplina FROM boletim;")
            resultado = self.cursor.fetchall()
            tupla2 = (tupla[0], tupla[1])
            if tupla2 in resultado:
                print(f"Erro. Já existe o cadastro dessa entrada no sistema.")
                print("Caso queira atualizar a nota do aluno nessa disciplina, selecione \"Atualizar dados de Boletim\" no menu.")
            input("Pressione <ENTER> para continuar...")

    def atualizar_boletim(self, tuplaProntuario):
        self.cursor.execute("SELECT prontuario, nome_aluno FROM aluno WHERE prontuario = ?;", tuplaProntuario)
        self.conn.commit()
        resultado = self.cursor.fetchall()
        if resultado:
            print("{:<13} {:<30}".format("prontuario", "nome_aluno"))
            for item in range(len(resultado)):
                print("{:<13} {:<30}".format(resultado[item][0], resultado[item][1]))
        try:
            self.cursor.execute("SELECT prontuario FROM boletim;")
            resultado = self.cursor.fetchall()
            if tuplaProntuario not in resultado:
                print(f"Erro. Não há notas associadas ao aluno de prontuário {tuplaProntuario[0]}.")
                input("Pressione <ENTER> para continuar...")
            else:
                self.cursor.execute("SELECT d.id_disciplina, d.nome_disciplina, b.nota_aluno FROM boletim b INNER JOIN disciplina d ON b.id_disciplina = d.id_disciplina WHERE prontuario = ?;", tuplaProntuario)
                resultado = self.cursor.fetchall()
                self.conn.commit()
                print("{:<15} {:<45} {:<14}".format("id_disciplina", "nome_disciplina", "nota_aluno"))
                for item in range(len(resultado)):
                    print("{:<15} {:<45} {:<14}".format(resultado[item][0], resultado[item][1], resultado[item][2]))
                id_disciplina_alterar = int(input("Insira o ID da disciplina: "))
                id_disciplina_tupla = (id_disciplina_alterar, )
                self.cursor.execute("SELECT id_disciplina FROM boletim WHERE prontuario = ?;", tuplaProntuario)
                resultado2 = self.cursor.fetchall()
                if id_disciplina_tupla not in resultado2:
                    print(f"Erro. Este aluno não possui nota no ID de disciplina {id_disciplina_tupla[0]}.")
                    input("Pressione <ENTER> para continuar...")
                else:
                    nova_nota = float(input("Insira a nova nota do aluno: "))
                    nota_nota_tupla = (nova_nota, )
                    if 0 <= nova_nota <= 10:
                        self.cursor.execute("UPDATE boletim SET nota_aluno = ? WHERE prontuario = ? AND id_disciplina = ?;", (nota_nota_tupla[0], tuplaProntuario[0], id_disciplina_tupla[0]))
                        self.conn.commit()
                        print("Nota do aluno atualizada com sucesso!")
                        input("Pressione <ENTER> para continuar...")
                    else:
                        print("Erro. A nota está fora do intervalo aceito [0, 10].")
                        input("Pressione <ENTER> para continuar...")
        except sqlite3.IntegrityError:
            print("Erro. Foi constatado um erro de integridade.")

    def consultar_boletim(self, prontuario_bol):
        self.cursor.execute("SELECT prontuario, nome_aluno FROM aluno WHERE prontuario = ?;", prontuario_bol)
        self.conn.commit()
        resultado = self.cursor.fetchall()
        if resultado:
            print("{:<13} {:<30}".format("prontuario", "nome_aluno"))
            for item in range(len(resultado)):
                print("{:<13} {:<30}".format(resultado[item][0], resultado[item][1]))
        self.cursor.execute("SELECT d.id_disciplina, d.nome_disciplina, b.nota_aluno FROM boletim b INNER JOIN disciplina d ON b.id_disciplina = d.id_disciplina WHERE prontuario = ?;", prontuario_bol)
        resultado = self.cursor.fetchall()
        self.conn.commit()
        print("{:<15} {:<45} {:<14}".format("id_disciplina", "nome_disciplina", "nota_aluno"))
        for item in range(len(resultado)):
            print("{:<15} {:<45} {:<14}".format(resultado[item][0], resultado[item][1], resultado[item][2]))
        input("Pressione <ENTER> para continuar...")

    def excluir_boletim(self, tuplaProntuario):
        try:
            self.cursor.execute("SELECT prontuario FROM boletim;")
            resultado = self.cursor.fetchall()
            if tuplaProntuario not in resultado:
                print(f"Erro. Não há notas associadas ao aluno de prontuário {tuplaProntuario[0]}.")
                input("Pressione <ENTER> para continuar...")
            else:
                self.cursor.execute("SELECT prontuario, nome_aluno FROM aluno WHERE prontuario = ?;", tuplaProntuario)
                self.conn.commit()
                resultado = self.cursor.fetchall()
                if resultado:
                    print("{:<13} {:<30}".format("prontuario", "nome_aluno"))
                    for item in range(len(resultado)):
                        print("{:<13} {:<30}".format(resultado[item][0], resultado[item][1])) 
                self.cursor.execute("SELECT d.id_disciplina, d.nome_disciplina, b.nota_aluno FROM boletim b INNER JOIN disciplina d ON b.id_disciplina = d.id_disciplina WHERE prontuario = ?;", tuplaProntuario)
                resultado = self.cursor.fetchall()
                self.conn.commit()
                print("{:<15} {:<45} {:<14}".format("id_disciplina", "nome_disciplina", "nota_aluno"))
                for item in range(len(resultado)):
                    print("{:<15} {:<45} {:<14}".format(resultado[item][0], resultado[item][1], resultado[item][2]))
                input("Pressione <ENTER> para continuar...")

                id_disciplina_alterar = int(input("Insira o ID da disciplina cuja nota será DELETADA: "))
                id_disciplina_tupla = (id_disciplina_alterar, )
                self.cursor.execute("SELECT id_disciplina FROM boletim WHERE prontuario = ?;", tuplaProntuario)
                resultado2 = self.cursor.fetchall()
                if id_disciplina_tupla not in resultado2:
                    print(f"Erro. Este aluno não possui nota no ID de disciplina {id_disciplina_tupla[0]}.")
                    input("Pressione <ENTER> para continuar...")
                else:
                    tupla = (tuplaProntuario[0], id_disciplina_tupla[0])
                    self.cursor.execute("DELETE FROM boletim WHERE prontuario = ? AND id_disciplina = ?;", tupla)
                    self.conn.commit()
                    print(f"Nota deste aluno na disciplina de ID {id_disciplina_tupla[0]} foi DELETADA.")
                    input("Pressione <ENTER> para continuar...")
        except sqlite3.IntegrityError:
            print("Erro. Foi constatado um erro de integridade.")
