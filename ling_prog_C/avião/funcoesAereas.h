#define COL 6
#define LIN 25

typedef struct{
	char cod[4];
	int estado; // 0 para livre, 1 para vendido e -1 para reservado
	float valor;
} assento;

void leArquivo(assento aviao[][COL]);
float ocupacao(assento aviao[][COL]);
int reservaLugar(assento aviao[][COL], char cod[4]);
void sequenciaLugares(assento aviao[][COL], int qtdade);
void ajustaPreco(assento aviao[][COL]);
int vendeAssento(assento aviao[][COL], char cod[4]);
void reservaNoFundo(assento aviao[][COL]);
void reservaNoMeio(assento aviao[][COL]);
void reservaNaFrente(assento aviao[][COL]);
int cancelaReserva(assento aviao[][COL], char cod[4]); 
int registraAviao(assento aviao[][COL]);



