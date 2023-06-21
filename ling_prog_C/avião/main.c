#include <stdio.h>
#include <string.h>
#include "funcoesAereas.h"

int main(void){
	assento aviao[LIN][COL],aviaoUsuario[LIN][COL];
	int op=0;
	char codigo[4],N;
	leArquivo(aviao);    // inicializando o avião
	do{ 				// continue seu código a partir desta linha
		printf("Opcoes\n");
		printf("1 - Apresenta a ocupacao do aviao;\n");
    	printf("2 - Reserva lugar por codigo;\n");
    	printf("3 - Procura sequencia de N lugares livres;\n");
    	printf("4 - Ajusta preco;\n");
    	printf("5 - Vende assento pelo codigo;\n");
    	printf("6 - Reserva no fundo;\n");
		printf("7 - Reserva no meio;\n");
    	printf("8 - Reserva na frente;\n");
		printf("9 - Cancela reserva por codigo;\n");
		printf("10 - Finaliza;\n");
		printf("Entre com sua opcao: ");
		scanf("%d", &op);
		switch(op){
			case 1:
				printf("Ocupacao: %.3f\n\n",ocupacao(aviao));
				break;
			case 2:
				printf("Digite o codigo do assento:\n");
				fflush(stdin);
				fgets(codigo,sizeof(codigo),stdin);
				if(codigo[sizeof(codigo)-1]=='\n') codigo[sizeof(codigo)-1]='\0';
				if(reservaLugar(aviao,codigo)==0) printf("Reservado com sucesso.\n\n");
				else printf("A reserva nao foi feita.\n\n");
				break;
			case 3:
				printf("Insira um valor N (entre 2 e 6, inclusive):\n");
				scanf("%d",&N);
				if(N>=2 && N<=6) sequenciaLugares(aviao,N);
				else printf("O valor para N esta fora do intervalo permitido (2-6).\n\n");
				break;
			case 4:
				ajustaPreco(aviao);
				break;
			case 5:
				printf("Digite o codigo do assento:\n");
				fflush(stdin);
				fgets(codigo,sizeof(codigo),stdin);
				if(codigo[sizeof(codigo)-1]=='\n') codigo[sizeof(codigo)-1]='\0';
				printf("Retorno: %d\n",vendeAssento(aviao,codigo));
				break;
			case 6:
      			reservaNoFundo(aviao);
				break;
			case 7:
				reservaNoMeio(aviao);
				break;
			case 8:
        		reservaNaFrente(aviao);
				break;
			case 9:
				printf("Digite o codigo do assento:\n");
				fflush(stdin);
				fgets(codigo,sizeof(codigo),stdin);
				if(codigo[sizeof(codigo)-1]=='\n') codigo[sizeof(codigo)-1]='\0';
        		cancelaReserva(aviao,codigo);
				break;
			case 10:
				printf("Retorno: %d\n",registraAviao(aviaoUsuario));
				printf("Finalizando...\n\n");
				// aqui deve ser chamada a funÃ§Ã£o registraAviao.
				// nessa função, o usuario vai DIGITAR o aviao completo, e isso vai ser salvo no arquivo .log indicado
				break;
			default:
				printf("\n\nOpcao invalida.\n\n");
		}
	}while(op != 10);
	return 0;
}
