class Tarefas:

    def __init__(self, conn):
        self.descricao = ""
        self.dataInclusao = 20230426
        self.usuarioid = 1
        self.conn = conn
        self.cursor = self.conn.cursor()
    
    def inserir_task(self, taref):
        self.cursor.execute("""INSERT INTO tarefas(descricao, dataInclusao, idUsuarios) VALUES (?,?,?);""", taref)
        self.conn.commit()
        return "Tarefa inserida com sucesso!"

    def atualizar_task(self, tarefas, optab, atual_tab, idAtual_tab):
        if optab == 1:
            self.cursor.execute("UPDATE tarefas SET descricao = ? where idTarefa = ?;", (atual_tab, idAtual_tab))
            self.conn.commit()
        elif optab == 2:
            self.cursor.execute("UPDATE tarefas SET dataInclusao = ? where idTarefa = ?;", (atual_tab, idAtual_tab))    
            self.conn.commit()
        elif optab == 3:
            self.cursor.execute("UPDATE tarefas SET idUsuarios = ? where idTarefa = ?;", (atual_tab, idAtual_tab))    
            self.conn.commit()
        return "Tarefa inserida com sucesso!"

    def consultar_task(self):
        self.cursor.execute("SELECT * FROM tarefas;")
        resultado = self.cursor.fetchall()
        if resultado:
            print("ID - Descricao - Data Inclusao - ID Usuario")
            for item in range(len(resultado)):
                print(resultado[item][0],'-',resultado[item][1],'-',resultado[item][2],'-',resultado[item][3])
        
        input("\nPressione <ENTER>...")
        return "Consulta realizada"

    def excluir_task(self, tarefas, excltar):
        self.cursor.execute("DELETE from tarefas where idTarefa = ?;", excltar)
        self.conn.commit()
        return "Tarefa excluída com sucesso!"


    
    '''def inserir_task(self, tarefa):
        pass

    def atualizar_task(self, tarefa):
        pass
    
    def consultar_task(self, tarefa):
        pass

    def atualizar_task(self, tarefa):
        pass
    '''
