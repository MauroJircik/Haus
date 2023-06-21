class Aluno:

    def __init__(self, conn):
        self.conn = conn
        self.cursor = self.conn.cursor()
        self.prontuario = 0
        self.nome_aluno = ""
        self.endereco_aluno = ""
        self.rg_aluno = ""

    def inserir_aluno(self, tupla):
        self.cursor.execute("INSERT INTO aluno (nome_aluno, endereco_aluno, rg_aluno) VALUES (?, ?, ?);", tupla)
        self.conn.commit()
        print(f"Aluno inserido com sucesso!")

    def atualizar_aluno(self, nomeAluno_coordenador):
        if nomeAluno_coordenador[0] == 1:
            self.cursor.execute("UPDATE aluno SET nome_aluno = ? WHERE prontuario = ?;", (nomeAluno_coordenador[1], nomeAluno_coordenador[2]))
            self.conn.commit()
            print("Nome do aluno atualizado com sucesso!")
            input("Pressione <ENTER> para continuar...")
        elif nomeAluno_coordenador[0] == 2:
            self.cursor.execute("UPDATE aluno SET endereco_aluno = ? WHERE prontuario = ?;", (nomeAluno_coordenador[1], nomeAluno_coordenador[2]))
            self.conn.commit()
            print("Endereço do aluno atualizado com sucesso!")
            input("Pressione <ENTER> para continuar...")
        elif nomeAluno_coordenador[0] == 3:
            self.cursor.execute("UPDATE aluno SET rg_aluno = ? WHERE prontuario = ?;", (nomeAluno_coordenador[1], nomeAluno_coordenador[2]))
            self.conn.commit()
            print("RG do aluno atualizado com sucesso!")
            input("Pressione <ENTER> para continuar...")
        else:
            print("Desculpe. A opção escolhida não é válida.")

    def consultar_aluno(self):
        self.cursor.execute("SELECT * FROM aluno;")
        resultado = self.cursor.fetchall()
        if resultado:
            print("{:<13} {:<30} {:<60} {:<15}".format("prontuario", "nome_aluno", "endereco_aluno", "rg_aluno"))
            for item in range(len(resultado)):
                print("{:<13} {:<30} {:<60} {:<15}".format(resultado[item][0], resultado[item][1], resultado[item][2], resultado[item][3]))
        input("Pressione <ENTER> para continuar...")

    def excluir_aluno(self, tupla_prontuario):
        self.cursor.execute("DELETE FROM aluno WHERE prontuario = ?;", tupla_prontuario)
        self.conn.commit()
        print(f"Aluno com prontuario {tupla_prontuario[0]} foi DELETADO.")
