# PROJETO SEMESTRAL - LOGICA DE PROGRAMAÇÃO II
#
# TEMA: UNIVERSIDADE
#
# INTEGRANTES
#   	Mauro Sérgio Jircik A. M. R. L. Pereira    BP3032116
#		Victor Gomes da Cruz					   BP303285X

import schema
from curso import Curso
from disciplina import Disciplina
from aluno import Aluno
from boletim import Boletim
from relatorio import Relatorio
from colorama import init, Fore, Back, Style


def exibir_menu():
    print(Fore.CYAN + "0============================================0")
    print(Fore.CYAN + "|" + Fore.WHITE + "              MENU DE OPÇÕES                " + Fore.CYAN + "|")
    print(Fore.CYAN + "0============================================0")
    print(Fore.CYAN + "|" + Fore.WHITE + "     1. Realizar manutenção em Curso        " + Fore.CYAN + "|")
    print(Fore.CYAN + "|" + Fore.WHITE + "     2. Realizar manutenção em Disciplina   " + Fore.CYAN + "|")
    print(Fore.CYAN + "|" + Fore.WHITE + "     3. Realizar manutenção em Aluno        " + Fore.CYAN + "|")
    print(Fore.CYAN + "|" + Fore.WHITE + "     4. Realizar manutenção em Boletim      " + Fore.CYAN + "|")
    print(Fore.CYAN + "|" + Fore.WHITE + "     5. Gerar relatórios gráficos           " + Fore.CYAN + "|")
    print(Fore.CYAN + "|" + Fore.WHITE + "     6. Sair                                " + Fore.CYAN + "|")
    print(Fore.CYAN + "0============================================0" + Style.RESET_ALL)


def exibir_submenu(texto_no_menu):
    if texto_no_menu == "Curso":
        print(Fore.MAGENTA + "0============================================0")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "              MENU DE CURSO                 " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "0============================================0")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     0. Retornar ao menu principal          " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     1. Inserir dados em Curso              " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     2. Atualizar dados de Curso            " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     3. Consultar Cursos                    " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     4. Excluir dados de Curso              " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "0============================================0" + Style.RESET_ALL)
    elif texto_no_menu == "Disciplina":
        print(Fore.MAGENTA + "0============================================0")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "             MENU DE DISCIPLINA             " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "0============================================0")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     0. Retornar ao menu principal          " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     1. Inserir dados em Disciplina         " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     2. Atualizar dados de Disciplina       " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     3. Consultar Disciplinas               " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     4. Excluir dados de Disciplina         " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "0============================================0" + Style.RESET_ALL)
    elif texto_no_menu == "Aluno":
        print(Fore.MAGENTA + "0============================================0")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "              MENU DE ALUNO                 " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "0============================================0")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     0. Retornar ao menu principal          " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     1. Inserir dados em Aluno              " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     2. Atualizar dados de Aluno            " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     3. Consultar Alunos                    " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     4. Excluir dados de Aluno              " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "0============================================0" + Style.RESET_ALL)
    elif texto_no_menu == "Boletim":
        print(Fore.MAGENTA + "0============================================0")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "             MENU DE BOLETIM                " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "0============================================0")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     0. Retornar ao menu principal          " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     1. Inserir dados em Boletim            " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     2. Atualizar dados de Boletim          " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     3. Consultar Boletins                  " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     4. Excluir dados de Boletim            " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "0============================================0" + Style.RESET_ALL)
    elif texto_no_menu == "Relatorio":
        print(Fore.MAGENTA + "0============================================0") 
        print(Fore.MAGENTA + "|" + Fore.WHITE + "             MENU DE RELATORIOS             " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "0============================================0")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     0. Retornar ao menu principal          " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     1. Notas do aluno por disciplina       " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "|" + Fore.WHITE + "     2. Média das notas dos alunos          " + Fore.MAGENTA + "|")
        print(Fore.MAGENTA + "0============================================0" + Style.RESET_ALL)


def ler_opcao_usuario():
    escolha_do_usuario = int(input("Entre com a opção desejada: "))
    return escolha_do_usuario


def limpar_tela():
    import os
    from time import sleep

    def screen_clear():
        if os.name == "posix":
            _ = os.system("clear")
        else:
            _ = os.system("cls")

    sleep(1)
    screen_clear()


if __name__ == "__main__":
    init(convert=True) # habilitando COLORAMA
    print("Iniciando a função main...")
    banco = input("Entre com o nome do banco: ")
    conn = schema.criar_banco(banco)
    tabela_curso = Curso(conn)
    tabela_disciplina = Disciplina(conn)
    tabela_aluno = Aluno(conn)
    tabela_boletim = Boletim(conn)
    tabela_relatorio = Relatorio(conn)
    limpar_tela()
    exibir_menu()
    opcao_escolhida = ler_opcao_usuario()
    while opcao_escolhida != 6:
        if opcao_escolhida == 1:
            # manutenção em CURSO
            limpar_tela()
            opcao_menu_secundário = -1
            while opcao_menu_secundário != 0:
                exibir_submenu("Curso")
                opcao_menu_secundário = ler_opcao_usuario()
                limpar_tela()
                if opcao_menu_secundário == 0:
                    # retorna ao menu anterior
                    limpar_tela()
                    break
                elif opcao_menu_secundário == 1:
                    # método de inserir dados em CURSO
                    nome_curso = input("Insira o nome do curso: ")
                    coordenador_curso = input("Insira o nome do coordenador do curso: ")
                    tupla = (nome_curso, coordenador_curso)
                    tabela_curso.inserir_curso(tupla)
                    limpar_tela()
                elif opcao_menu_secundário == 2:
                    # método de atualizar dados em CURSO
                    tabela_curso.consultar_curso()
                    print("Escolha qual informação deseja atualizar:\n1. Nome do curso\n2. Coordenador do curso")
                    escolha_usuario = int(input("Opção escolhida: "))
                    if escolha_usuario == 1:
                        # atualizar "nome do curso" em CURSO
                        id_curso= int(input("Entre com o ID do curso: "))
                        novo_nome = input("Entre com o novo nome do curso: ")
                        tupla = (escolha_usuario, novo_nome, id_curso)
                        tabela_curso.atualizar_curso(tupla)
                        limpar_tela()
                    elif escolha_usuario == 2:
                        # atualizar "coordenador do curso" em CURSO
                        id_curso= int(input("Entre com o ID do curso: "))
                        novo_nome_coordenador = input("Entre com o novo nome do coordenador: ")
                        limpar_tela()
                        tupla = (escolha_usuario, novo_nome_coordenador, id_curso)
                        tabela_curso.atualizar_curso(tupla)
                        limpar_tela()
                elif opcao_menu_secundário == 3:
                    # método de consultar dados em CURSO
                    tabela_curso.consultar_curso()
                    limpar_tela()
                elif opcao_menu_secundário == 4:
                    # método de deletar os dados em CURSO
                    tabela_curso.consultar_curso()
                    id_curso = tuple(input("Insira o id do curso a ser DELETADO: ").split())
                    tabela_curso.excluir_curso(id_curso)
                    limpar_tela()
                else:
                    # escolha inválida
                    print("Desculpe. A opção escolhida não é válida.")
                    limpar_tela()
        elif opcao_escolhida == 2:
            # manutenção em DISCIPLINA
            limpar_tela()
            opcao_menu_secundário = -1
            while opcao_menu_secundário != 0:
                exibir_submenu("Disciplina")
                opcao_menu_secundário = ler_opcao_usuario()
                limpar_tela()
                if opcao_menu_secundário == 0:
                    # retorna ao menu anterior
                    limpar_tela()
                    break
                elif opcao_menu_secundário == 1:
                    # método de inserir dados em DISCIPLINA
                    nome_disciplina = input("Insira o nome da disciplina: ")
                    numero_creditos = int(input("Insira o número de créditos: "))
                    id_curso_disciplina = int(input("Insira o ID do curso da disciplina: "))
                    tupla2 = (nome_disciplina, numero_creditos, id_curso_disciplina)
                    tabela_disciplina.inserir_disciplina(tupla2)
                    limpar_tela()
                elif opcao_menu_secundário == 2:
                    # método de atualizar dados em DISCIPLINA
                    tabela_disciplina.consultar_disciplina()
                    print("Escolha qual informação deseja atualizar:\n1. Nome da disciplina\n2. Número de créditos\n3. ID do curso da disciplina")
                    escolha_usuario = int(input("Opção escolhida: "))
                    if escolha_usuario == 1:
                        # atualizar "nome da disciplina" em DISCIPLINA
                        id_disciplina = int(input("Entre com o ID da disciplina: "))
                        novo_nome_disciplina = input("Entre com o novo nome da disciplina: ")
                        tupla = (escolha_usuario, novo_nome_disciplina, id_disciplina)
                        tabela_disciplina.atualizar_disciplina(tupla)
                        limpar_tela()
                    elif escolha_usuario == 2:
                        # atualizar "número de créditos" em DISCIPLINA
                        id_disciplina = int(input("Entre com o ID da disciplina: "))
                        novo_num_creditos = int(input("Entre com o novo número de créditos: "))
                        tupla = (escolha_usuario, novo_num_creditos, id_disciplina)
                        tabela_disciplina.atualizar_disciplina(tupla)
                        limpar_tela()
                    elif escolha_usuario == 3:
                        # atualizar "id do curso" em DISCIPLINA
                        id_disciplina = int(input("Entre com o ID da disciplina: "))
                        novo_id_curso = int(input("Entre com o novo ID do curso: "))
                        tupla2 = (escolha_usuario, novo_id_curso, id_disciplina)
                        tabela_disciplina.atualizar_disciplina(tupla2)          
                        limpar_tela()
                    else:
                        print("Desculpe. A opção escolhida não é válida.")
                        limpar_tela()
                elif opcao_menu_secundário == 3:
                    # método de consultar dados em DISCIPLINA
                    tabela_disciplina.consultar_disciplina()
                    limpar_tela()
                elif opcao_menu_secundário == 4:
                    # método de deletar os dados em DISCIPLINA
                    tabela_disciplina.consultar_disciplina()
                    id_disciplina = tuple(input("Insira o id da disciplina a ser DELETADA: ").split())
                    tabela_disciplina.excluir_disciplina(id_disciplina)
                    limpar_tela()
                else:
                    # escolha inválida
                    print("Desculpe. A opção escolhida não é válida.")
                    limpar_tela()
        elif opcao_escolhida == 3:
            # manutenção em ALUNO
            limpar_tela()
            opcao_menu_secundário = -1
            while opcao_menu_secundário != 0:
                exibir_submenu("Aluno")
                opcao_menu_secundário = ler_opcao_usuario()
                limpar_tela()
                if opcao_menu_secundário == 0:
                    # retorna ao menu anterior
                    limpar_tela()
                    break
                elif opcao_menu_secundário == 1:
                    # método de inserir dados em ALUNO
                    nome_aluno = input("Insira o nome do aluno: ")
                    endereco_aluno = input("Insira o endereço do aluno: ")
                    rg_aluno = input("Insira o rg do aluno: ")
                    tupla = (nome_aluno, endereco_aluno, rg_aluno)
                    tabela_aluno.inserir_aluno(tupla)
                    limpar_tela()
                elif opcao_menu_secundário == 2:
                    # método de atualizar dados em ALUNO
                    tabela_aluno.consultar_aluno()
                    print("Escolha qual informação deseja atualizar:\n1. Nome do aluno\n2. Endereço do aluno\n3. RG do aluno")
                    escolha_usuario = int(input("Opção escolhida: "))
                    if escolha_usuario == 1:
                        # atualizar "nome do aluno" em ALUNO
                        prontuario = int(input("Entre com o prontuário do aluno: "))
                        novo_aluno = input("Entre com o novo nome do aluno: ")
                        tupla = (escolha_usuario, novo_aluno, prontuario)
                        tabela_aluno.atualizar_aluno(tupla)
                        limpar_tela()
                    elif escolha_usuario == 2:
                        # atualizar "endereço do aluno" em ALUNO
                        prontuario = int(input("Entre com o prontuário do aluno: "))
                        novo_endereco = input("Entre com o novo endereço do aluno: ")
                        tupla = (escolha_usuario, novo_endereco, prontuario)
                        tabela_aluno.atualizar_aluno(tupla)
                        limpar_tela()
                    elif escolha_usuario == 3:
                        # atualizar "rg do aluno" em ALUNO
                        prontuario = int(input("Entre com o prontuario do aluno: "))
                        novo_rg = input("Entre com o novo rg do aluno: ")
                        tupla = (escolha_usuario, novo_rg, prontuario)
                        tabela_aluno.atualizar_aluno(tupla)
                        limpar_tela()
                elif opcao_menu_secundário == 3:
                    # método de consultar dados em ALUNO
                    tabela_aluno.consultar_aluno()
                    limpar_tela()
                elif opcao_menu_secundário == 4:
                    # método de deletar os dados em ALUNO
                    tabela_aluno.consultar_aluno()
                    prontuario = tuple(input("Insira o prontuario do aluno a ser DELETADO: ").split())
                    tabela_aluno.excluir_aluno(prontuario)
                    limpar_tela()
                else:
                    # escolha inválida
                    print("Desculpe. A opção escolhida não é válida.")
        elif opcao_escolhida == 4:
            # manutenção em BOLETIM
            limpar_tela()
            opcao_menu_secundário = -1
            while opcao_menu_secundário != 0:
                exibir_submenu("Boletim")
                opcao_menu_secundário = ler_opcao_usuario()
                limpar_tela()
                if opcao_menu_secundário == 0:
                    # retorna ao menu anterior
                    limpar_tela()
                    break
                elif opcao_menu_secundário == 1:
                    # método de inserir dados em BOLETIM
                    tabela_aluno.consultar_aluno()
                    prontuario = int(input("Insira o prontuário do aluno: "))
                    limpar_tela()
                    tabela_disciplina.consultar_disciplina()
                    id_disciplina_boletim = int(input("Insira o ID da disciplina: "))
                    nota_aluno = float(input("Insira a nota do aluno: "))
                    if 0 <= nota_aluno <= 10:
                        tupla = (prontuario, id_disciplina_boletim, nota_aluno)
                        tabela_boletim.inserir_boletim(tupla)
                        limpar_tela()
                    else:
                        print("Erro. A nota está fora do intervalo aceito [0, 10].")
                        input("Pressione <ENTER> para continuar...")
                        limpar_tela()
                elif opcao_menu_secundário == 2:
                    # método de atualizar dados em BOLETIM
                    tabela_aluno.consultar_aluno()
                    prontuario = int(input("Insira o prontuário do aluno: "))
                    limpar_tela()
                    tupla = (prontuario, )
                    tabela_boletim.atualizar_boletim(tupla)
                    limpar_tela()
                elif opcao_menu_secundário == 3:
                    # método de consultar dados em BOLETIM
                    tabela_aluno.consultar_aluno()
                    prontuario_bol = tuple(input("Insira o prontuario do aluno a ser pesquisado: ").split())
                    limpar_tela()
                    tabela_boletim.consultar_boletim(prontuario_bol)
                    limpar_tela()
                elif opcao_menu_secundário == 4:
                    # método de deletar os dados em BOLETIM
                    tabela_aluno.consultar_aluno()
                    prontuario = int(input("Insira o prontuário do aluno para exclusão do boletim: "))
                    limpar_tela()
                    tupla = (prontuario, )
                    tabela_boletim.excluir_boletim(tupla)
                    limpar_tela()
                else:
                    # escolha inválida
                    print("Desculpe. A opção escolhida não é válida.")
        elif opcao_escolhida == 5: 
            # relatórios gráficos
            limpar_tela()
            opcao_menu_secundário = -1
            while opcao_menu_secundário != 0:
                exibir_submenu("Relatorio")
                opcao_menu_secundário = ler_opcao_usuario()
                limpar_tela()
                if opcao_menu_secundário == 0:
                    # retorna ao menu anterior
                    limpar_tela()
                    break
                elif opcao_menu_secundário == 1:
                    # método de consultar notas por disciplina por aluno em BOLETIM
                    tabela_aluno.consultar_aluno()
                    prontuario_graf = tuple(input("Insira o prontuario do aluno a ser pesquisado: ").split())
                    tabela_relatorio.gerar_grafico(prontuario_graf)
                    limpar_tela()
                elif opcao_menu_secundário == 2:
                    # método de consultar media das notas por aluno em BOLETIM 
                    tabela_relatorio.gerar_media()
                    limpar_tela()
                else:
                    # escolha inválida
                    print("Desculpe. A opção escolhida não é válida.")
                    limpar_tela()
        else:
            # escolha inválida
            print("Desculpe. A opção escolhida não é válida.")
            limpar_tela()
        exibir_menu()
        opcao_escolhida = ler_opcao_usuario()
    print("Finalizando o programa...")
