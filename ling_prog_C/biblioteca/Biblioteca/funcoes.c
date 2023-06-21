#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

void exibirMenu()
{
	printf("\n1 - Exibir Livro");
	printf("\n2 - Encontrar Livro com maior numero de paginas");
	printf("\n3 - Buscar Livro por autor\n");
}
void recebeAcervo(Livro acervo[], int tam)
{
	int i;
	for(i=0; i < tam;i++){
		fflush(stdin);
		printf("Digite o titulo: ");
		fgets(acervo[i].titulo, sizeof(acervo[i].titulo) - 1, stdin);
		if(acervo[i].titulo[strlen(acervo[i].titulo)- 1] == '\n')
			acervo[i].titulo[strlen(acervo[i].titulo) - 1] = '\0';
		
		printf("Digite o autor: ");
		fgets(acervo[i].autor, sizeof(acervo[i].autor) - 1, stdin);
		if(acervo[i].autor[strlen(acervo[i].autor)-1] == '\n')
			acervo[i].autor[strlen(acervo[i].autor)-1] = '\0';
	
		printf("Digite a editora: ");
		fgets(acervo[i].editora, sizeof(acervo[i].editora) - 1, stdin);
		if(acervo[i].editora[strlen(acervo[i].editora)-1] == '\n')
			acervo[i].editora[strlen(acervo[i].editora)-1] = '\0';
			
		printf("Digite o numero de paginas: ");
		scanf("%d", &acervo[i].numPaginas);
	}
}

void exibirLivro(Livro l)
{
	printf("Dados do livro:\n");
	printf("TitulO: %s\n", l.titulo);
	printf("Autor: %s\n", l.autor);
	printf("Editora: %s\n", l.editora);
	printf("Numero de paginas: %d\n", l.numPaginas);
}
int encontrarLivroMaiorNumPaginas(Livro acervo[], int tam)
{
	int i, maiorNumeroPaginas=0, posicaoMaior=0;
	for(i=0; i < tam; i++){
		if(acervo[i].numPaginas >= maiorNumeroPaginas){
			maiorNumeroPaginas = acervo[i].numPaginas;
			posicaoMaior = i;
		}
	}
	return posicaoMaior;
}

int encontrarLivroPorAutor(Livro acervo[],int tam, char autor[])
{	
	int i, temLivro=0;
	for(i = 0; i < tam; i++){
		if(strcmp(acervo[i].autor, autor) == 0){
			exibirLivro(acervo[i]);
			temLivro=1;
		}
	}
	return temLivro;
}








