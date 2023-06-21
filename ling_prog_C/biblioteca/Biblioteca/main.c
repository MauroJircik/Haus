#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

#define TAM 2

int main(int argc, char *argv[]) {
	Livro acervo[TAM];
	char autor[30];
	int op, indice, livroMaiorNumPaginas;
	recebeAcervo(acervo, TAM);
	do{
		exibirMenu();
		printf("Digite a opcao desejada: ");
		scanf("%d", &op);
		switch(op){
			case 1:
				printf("Digite o indice do acervo: ");
				scanf("%d", &indice);
				exibirLivro(acervo[indice]);
			break;
			case 2:
				livroMaiorNumPaginas = encontrarLivroMaiorNumPaginas(acervo, TAM);
				printf("\nLivro com maior numero de paginas: \n");
				exibirLivro(acervo[livroMaiorNumPaginas]);	
			break;
			case 3:
				fflush(stdin);
				printf("Digite o autor desejado: ");
				fgets(autor, sizeof(autor)-1, stdin);
				if(autor[strlen(autor)-1]=='\n')
					autor[strlen(autor)-1] = '\0';
				if(encontrarLivroPorAutor(acervo, TAM, autor) == 0)
					printf("\nNenhum livro encontrado\n");
			break;
			default:
				printf("Opcao invalida\n");
		}
	}while(op!=0);
	return 0;
}
