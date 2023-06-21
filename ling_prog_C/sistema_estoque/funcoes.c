#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

#define LIN 5
#define COL 5

void exibirMenu() {
	printf("\n---- SISTEMA DE ESTOQUE ----\n\n");
	printf("Escolha a opcao desejada: \n");
	printf("1 - Exibir todo o estoque \n");
	printf("2 - Verificar produtos em baixo estoque \n");
	printf("3 - Realizar entrada de produto \n");
	printf("4 - Realizar saida de produto \n");
	printf("5 - Exibir localizacao de produto \n");
	printf("9 - Encerrar o sistema \n");
}

void entradaEstoqueEmLote(Produto estoque[][COL]) {
	int i, j;
	FILE *arq;
	arq = fopen("entradaInicial.txt", "r");
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			fscanf(arq, "%d\n", &estoque[i][j].identificacao);
			fscanf(arq, "%d\n", &estoque[i][j].entrada);
			fscanf(arq, "%d\n", &estoque[i][j].saida);
		}
	}
	fclose(arq);
}

void exibirTodoEstoque(Produto estoque[][COL]) {
	int i, j;

	for (i = 0; i < LIN; i++) {
    	for (j = 0; j < COL; j++) {
			printf("Localizacao [%d][%d]- Produto %d: ",i,j, estoque[i][j].identificacao);
			printf(" entrada: %d", estoque[i][j].entrada);
			printf(" saida: %d\n", estoque[i][j].saida);
    }
  }
}
//2 - Verificar produtos em baixo estoque
void verificarProdutosEmBaixoEstoque(Produto estoque[][COL], int valorMinimo){
	int i, j;

	for (i = 0; i < LIN; i++) {
    	for (j = 0; j < COL; j++) {
    		if((estoque[i][j].entrada)<=valorMinimo){
				printf("Localizacao [%d][%d]- Produto %d: ",i,j, estoque[i][j].identificacao);
				printf(" Estoque: %d \n", estoque[i][j].entrada);
    		}
  		}
	}
}
//3 - Realizar entrada de  produto
int realizarEntradaProduto(Produto estoque[][COL], int codigo, int quantidade){
	int i, j;
		
	for (i = 0; i < LIN; i++) {
    	for (j = 0; j < COL; j++) {
    		if((estoque[i][j].identificacao)==codigo){
				printf("Localizacao [%d][%d]- Produto %d: ",i,j, estoque[i][j].identificacao);
				printf(" Estoque inicial: %d", estoque[i][j].entrada);
				estoque[i][j].entrada=(estoque[i][j].entrada)+(quantidade);
				printf(" Estoque final: %d\n", estoque[i][j].entrada);
    		}
    	}
  	}
}
//4 - Realizar saida de produto
int realizarSaidaProduto(Produto estoque[][COL], int codigo, int quantidade){
	int i, j;
		
	for (i = 0; i < LIN; i++) {
    	for (j = 0; j < COL; j++) {
    		if((estoque[i][j].identificacao)==codigo){
    			if((estoque[i][j].entrada)<quantidade){
    				printf("Localizacao [%d][%d]- Produto %d: ",i,j, estoque[i][j].identificacao);
					printf(" Estoque: %d", estoque[i][j].entrada);
    				printf(" - estoque insuficiente!\n");
				}else{
				printf("Localizacao [%d][%d]- Produto %d: ",i,j, estoque[i][j].identificacao);
				printf(" Estoque inicial: %d", estoque[i][j].entrada);
				estoque[i][j].saida=(estoque[i][j].entrada)-(quantidade);
				printf(" Estoque final: %d\n", estoque[i][j].saida);
				}
    		}
    	}
  	}
}
//5 - Exibir localizacao de produto
void exibirLocalizacaoProduto(Produto estoque[][COL], int codigo){
	int i,j;
	
	for (i = 0; i < LIN; i++) {
    	for (j = 0; j < COL; j++) {
    		if((estoque[i][j].identificacao)==codigo){
				printf("Localizacao [%d][%d]- Produto %d: ",i,j, estoque[i][j].identificacao);
				printf(" Estoque: %d \n", estoque[i][j].entrada);
    		}
  		}	
	}
}

