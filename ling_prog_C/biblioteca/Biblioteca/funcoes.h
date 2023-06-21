typedef struct{
	char titulo[50];
	char autor[30];
	char editora[10];
	int numPaginas;
}Livro;

void exibirMenu();
void recebeAcervo(Livro acervo[], int tam);
void exibirLivro(Livro l);
int encontrarLivroMaiorNumPaginas(Livro acervo[], int tam);
int encontrarLivroPorAutor(Livro acervo[],int tam, char autor[]);
