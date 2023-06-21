#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "funcoes.h"

#define LIN 5
#define COL 5

int main(void) {
	Produto estoque[LIN][COL];
	int opcao, valorMinimo, codigo, quantidade;
	
	entradaEstoqueEmLote(estoque);
	
  	while(1){
  		
	  	
		exibirMenu();
		printf("Opcao:");
		scanf("%d", &opcao);
	
		switch (opcao) {
			case 1:	
	    		exibirTodoEstoque(estoque);
	    	break;
	    	
	    	case 2:
	    		printf("Qual valor de estoque minimo desejado: ");
	    		scanf("%d", &valorMinimo);
				verificarProdutosEmBaixoEstoque(estoque, valorMinimo);
			break;
			
			case 3:
	    		printf("Qual o codigo produto que deseja dar entrada [112-136]: ");
	    		scanf("%d", &codigo);
	    		printf("Qual a quantidade a ser dada entrada: ");
	    		scanf("%d", &quantidade);
				realizarEntradaProduto(estoque, codigo, quantidade);
			break;
			
			case 4:
	    		printf("Qual o codigo do produto que deseja dar saida [112-136]: ");
	    		scanf("%d", &codigo);
	    		printf("Qual a quantidade a ser saida: ");
	    		scanf("%d", &quantidade);
				realizarSaidaProduto(estoque, codigo, quantidade);
			break;
			
			case 5:
				printf("Qual o codigo do produto que deseja localizar [112-136]: ");
	    		scanf("%d", &codigo);
				exibirLocalizacaoProduto(estoque, codigo);
			break;
			
			case 9:
				printf("\nEncerrando o sistema ...");
				exit(0);
			break;
	  		default:
	    		printf("\nEscolha uma opcao valida! ");
	  	}
	}

  return 0;
}
