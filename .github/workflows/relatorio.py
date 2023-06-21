class Relatorio:

    def __init__(self, conn):
        self.conn = conn
        self.cursor = self.conn.cursor()
        self.id_disciplina = 0
        self.nome_disciplina = ""
        self.prontuario = 0
        self.nota_aluno = 0

    '''
    #Lista dos valores a serem incluídos no gráfico:
    def gerar_grafico(self, prontuario_graf):
        #self.cursor.execute("SELECT prontuario, id_disciplina, nota_aluno FROM boletim WHERE prontuario = ?;", prontuario_graf)
        self.cursor.execute("SELECT prontuario, nome_disciplina, nota_aluno FROM boletim INNER JOIN disciplina on boletim.id_disciplina = disciplina.id_disciplina WHERE prontuario = ?;", prontuario_graf)
        self.conn.commit()
        resultado = self.cursor.fetchall()
        if resultado:
            print("{:<13} {:<15} {:<15}".format("prontuario", "id_disciplina","nota_aluno"))
            for item in range(len(resultado)):
                print("{:<13} {:<15} {:<15}".format(resultado[item][0], resultado[item][1], resultado[item][2]))
        input("Pressione <ENTER> para continuar...")
    '''

    #Grafico 1: Dispersão
    def gerar_grafico(self, prontuario_graf):
        self.cursor.execute("SELECT nome_disciplina, nota_aluno FROM boletim INNER JOIN disciplina on boletim.id_disciplina = disciplina.id_disciplina WHERE prontuario = ?;", prontuario_graf)
        resultado = self.cursor.fetchall()
        if resultado:
            import matplotlib.pyplot as plt
            #Compreensão de listas
            #for item in range(len(resultado)):
            #    x.append (resultado[item][0])
            #    y.append (resultado[item][1])
            x= [resultado[item][0] for item in range(len(resultado))]
            y= [resultado[item][1] for item in range(len(resultado))]
            # Criando o gráfico
            plt.figure(figsize=(8, 5))
            plt.scatter(x, y, label='Notas')
            plt.ylim(0,10)
            plt.xlabel('Disciplinas')
            plt.ylabel('Notas')
            plt.title('Gráfico de Notas por Disciplina')
            plt.legend()
            plt.xticks(rotation=45,ha='right')
            plt.grid(True)
            plt.show()

    #Grafico 2: Barras
    #def gerar_grafico(self, prontuario_graf):
        self.cursor.execute("SELECT nome_disciplina, nota_aluno FROM boletim INNER JOIN disciplina on boletim.id_disciplina = disciplina.id_disciplina WHERE prontuario = ?;", prontuario_graf)
        resultado = self.cursor.fetchall()
        if resultado:
            import matplotlib.pyplot as plt
            x= [resultado[item][0] for item in range(len(resultado))]
            y= [resultado[item][1] for item in range(len(resultado))]
            # Criando o gráfico
            plt.figure(figsize=(10, 5))
            plt.bar(x, y, label='Notas',color='green', width=0.4)
            plt.ylim(0,10)
            plt.xlabel('Disciplinas')
            plt.ylabel('Notas')
            plt.title('Gráfico de Notas por Disciplina')
            for i, v in enumerate(y):
                plt.text(i-.05,
                        v/y[i],
                        y[i],
                        fontsize=12,
                        color="white")
            plt.xticks(rotation=45, ha='right')
            plt.grid(True)
            plt.show()

    #Grafico 3: Barras Horizontal
    #def gerar_grafico(self, prontuario_graf):
        self.cursor.execute("SELECT nome_disciplina, nota_aluno FROM boletim INNER JOIN disciplina on boletim.id_disciplina = disciplina.id_disciplina WHERE prontuario = ?;", prontuario_graf)
        resultado = self.cursor.fetchall()
        if resultado:
            import matplotlib.pyplot as plt
            y= [resultado[item][0] for item in range(len(resultado))]
            x= [resultado[item][1] for item in range(len(resultado))]
            # Criando o gráfico
            plt.figure(figsize=(10, 7))
            plt.barh(y, x, align='center', height=0.4)
            plt.xlim(0,10)
            plt.xlabel('Notas')
            plt.ylabel('Disciplinas', fontdict={'fontsize':5})
            plt.title('Gráfico de Notas por Disciplina')
            for i, v in enumerate(x):
                plt.text(v - 0.5, i, str(v))
            plt.show()

    #Grafico 4: Pizza
    #def gerar_grafico(self):
        self.cursor.execute("SELECT nome_disciplina, nota_aluno FROM boletim INNER JOIN disciplina on boletim.id_disciplina = disciplina.id_disciplina WHERE prontuario = ?;", prontuario_graf)
        resultado = self.cursor.fetchall()
        if resultado:
            import matplotlib.pyplot as plt
            x= [resultado[item][0] for item in range(len(resultado))]
            y= [resultado[item][1] for item in range(len(resultado))]
            # Criando o gráfico
            plt.pie(y, labels=x, autopct='%1.1f%%')
            #plt.figure(figsize=(15, 7))
            plt.title('Gráfico de Notas por Disciplina')
            #plt.legend()
            plt.grid(True)
            plt.show()

    #Grafico 1: Barras Média
    def gerar_media(self):
        self.cursor.execute("SELECT nome_aluno, round(avg(nota_aluno),2) FROM aluno INNER JOIN boletim ON aluno.prontuario = boletim.prontuario group by aluno.prontuario;")
        #self.cursor.execute("SELECT prontuario, round(avg(nota_aluno),2) FROM boletim group by prontuario;")
        resultado = self.cursor.fetchall()
        if resultado:
            import matplotlib.pyplot as plt
            x= [resultado[item][0] for item in range(len(resultado))]
            y= [resultado[item][1] for item in range(len(resultado))]
            # Criando o gráfico
            plt.figure(figsize=(10, 5))
            plt.ylim(0,10)
            plt.xlabel('Alunos', fontsize=10)
            plt.ylabel('Notas', fontsize=12)
            plt.bar(x, y, color='orange', width=0.5)
            plt.title('Gráfico de Média das Notas por Aluno')
            for i, v in enumerate(y):
                plt.text(i-0.05,
                        v/y[i],
                        y[i],
                        fontsize=12,
                        color="black")
            plt.show()

    #GrAfico 2:   
    #def gerar_media(self):
        self.cursor.execute("SELECT nome_aluno, round(avg(nota_aluno),2) FROM aluno INNER JOIN boletim ON aluno.prontuario = boletim.prontuario group by aluno.prontuario;")
        resultado = self.cursor.fetchall()
        if resultado:
            import matplotlib.pyplot as plt
            x= [resultado[item][0] for item in range(len(resultado))]
            y= [resultado[item][1] for item in range(len(resultado))]
            # Criando o gráfico de dispersão
            plt.figure(figsize=(10, 5))
            plt.ylim(0, 10)
            plt.xlabel('Alunos', fontsize=10)
            plt.ylabel('Notas', fontsize=12)
            plt.scatter(x, y, color='orange')
            plt.title('Gráfico de Média das Notas por Aluno')
            for i, v in enumerate(y):
                plt.text(i - 0.05, v/y[i], y[i], fontsize=12, color="black")
            plt.grid(True)
            plt.show()
