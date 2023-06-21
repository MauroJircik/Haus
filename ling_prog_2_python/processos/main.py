#tarefas: idtarefas autoincremental

import schema
import usuarios
import tarefas

#menu principal: opcao entre tabela usuarios, tabela tarefas
def menu():
    print(33*"{}*{}".format("\033[1;32m","\033[m"))
    print("***     ","\033[1;32;40mMENU DE OPCOES\033[m","      ***")
    print(33*"{}*{}".format("\033[1;32m","\033[m"))
    print(f"1. Trabalhar com tabela usuarios\n2. Trabalhar com tabela tarefas\n3. Sair do banco de dados {banco}")
    selecao = int(input("\033[4;33mSelecione uma opcao:\033[m",))
    return selecao
    
#consultar
def submenu(tabela):
    print(30*"{}*{}".format("\033[1;34m","\033[m"))
    print(f"\33[1;34m** Menu da tabela {tabela} **\033[m")
    print(30*"{}*{}".format("\033[1;34m","\033[m"))
    print(f"1. Inserir {tabela}\n2. Atualizar {tabela}\n3. Exibir {tabela}\n4. Excluir {tabela}\n0. Retorna Menu Opcoes")
    selecaosub = int(input("\033[4;33mSelecione uma opcao:\033[m",))
    return selecaosub

#importar sistema operacional
def limpar():
    #importar o sisema operacional
    import os
    #importar um modulo para aguardar um tempo e msegundos
    from time import sleep

    def screen_clear():
        #Linux ou Mac
        if os.name == 'posix':
            _ = os.system('clear')
        else:
            #Windows
            _ = os.system('cls')

    sleep(1)
    screen_clear()


#main
if __name__ == '__main__':
    limpar()
    print("\33[1;32m*******   Criacao do Banco de Dados   *******\033[m")
    banco = input("\n\033[4;33m- Informe o nome do banco criado/existente:\033[m")
    conne = schema.criar_banco(banco)
    # estrutura de repeticao
    limpar()
    opcao = menu()
    limpar()
    while opcao != 3:
        if opcao == 1:
            tabela = "usuarios"
            user = usuarios.Usuarios(conne)
        elif opcao == 2:
            tabela = "tarefas" 
            user = tarefas.Tarefas(conne)
        else:
            print("Opcao invalida!")
            opcao = menu()
            limpar()
            continue
        
    # submenu
        opcaosub = submenu(tabela)
        limpar()
        while opcaosub != 0:
            if opcaosub == 1:
                print(f"1.Inserir dados na tabela {tabela}:")
                if tabela == "usuarios":
                    nome = input("\n- Informe o nome completo: ")
                    usuario = (nome,)
                    user.inserir_user(usuarios, usuario)
                    limpar()
                elif tabela == "tarefas":
                    descricao = input("\n- Descricao: ")
                    dataInclusao = input("- Data da Inclusao: ")
                    idUsuarios = input("- ID Usuario: ")
                    taref = (descricao, dataInclusao, idUsuarios)
                    user.inserir_task(taref)
                    limpar()
                else:
                    print("ok")

            elif opcaosub == 2:
                print(f"*****   Atualizacao de dados da tabela {tabela}   *****\n")
                if tabela == "usuarios":
                    user.consultar_user()
                    idAtual_nome = int(input("Indique o ID: "))
                    atual_nome = input("- Informe o nome completo: ")
                    user.atualizar_user(usuarios, atual_nome, idAtual_nome)
                    limpar()
                if tabela == "tarefas":
                    user.consultar_task()
                    idAtual_tab = int(input("A alteracao será feita no ID: "))
                    optab = int(input("Selecione uma opcao: 1.Desricao - 2.Data - 3.ID usuario: "))
                    while optab != 4:
                        if optab == 1:
                            atual_tab = input("- Informe o novo nome da tarefa: ")         
                            user.atualizar_task(tarefas, optab, atual_tab, idAtual_tab)
                        elif opcao == 2:
                            atual_tab = input("- Informe a nova data de inclusao da tarefa: ")         
                            user.atualizar_task(tarefas, optab, atual_tab, idAtual_tab)
                        elif opcao == 3:
                            atual_tab = input("- Informe o novo ID do usuario: ")         
                            user.atualizar_task(tarefas, optab, atual_tab, idAtual_tab)
                        else:
                            print("Opcao invalida!")
                            opcao = menu()
                            limpar()
                            continue

            elif opcaosub == 3:
                print(f"3.Exibir dados da tabela {tabela}:\n")
                if tabela == "usuarios":
                    user.consultar_user()
                    limpar()
                elif tabela == "tarefas":
                    user.consultar_task()
                    limpar()
                
            elif opcaosub == 4:
                print(f"4.Excluir dados da tabela {tabela}:\n")
                if tabela == "usuarios":
                    user.consultar_user()
                    idExclui = int(input("- Indique o ID: "))
                    exclui=(idExclui,)
                    user.excluir_user(usuarios, exclui)
                    limpar()
                if tabela == "tarefas":
                    user.consultar_task()
                    idExcltar = int(input("- Indique o ID: "))
                    excltar=(idExcltar,)
                    user.excluir_task(tarefas, excltar)
                    limpar()

            else:
                print("Opcao invalida!")
                opcaosub = submenu()
                limpar()

            #limpar()
            opcaosub = submenu(tabela)
            limpar()
        opcao = menu()
        limpar()
