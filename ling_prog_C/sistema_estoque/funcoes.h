#define LIN 5
#define COL 5

typedef struct {
  int identificacao;
  int entrada;
  int saida;
} Produto;

void exibirMenu();
void entradaEstoqueEmLote(Produto estoque[][COL]);
void exibirTodoEstoque(Produto estoque[][COL]);
int verificarEstoqueDeProduto(Produto produto);
void verificarProdutosEmBaixoEstoque(Produto estoque[][COL], int valorMinimo);
int realizarEntradaProduto(Produto estoque[][COL], int codigo, int quantidade);
int realizarSaidaProduto(Produto estoque[][COL], int codigo, int quantidade);
void exibirLocalizacaoProduto(Produto estoque[][COL], int codigo);
