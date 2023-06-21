#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include "funcoesAereas.h"
#define COL 6
#define LIN 25
// Função que lê o arquivo com a situação inicial do avião
void leArquivo(assento aviao[][COL]){
  int i, j;
  FILE *arq;
  arq = fopen("situacaoInicial.log", "r");
  for(i = 0; i < LIN; i++){
    for(j = 0; j < COL; j++){
      fgets(aviao[i][j].cod, sizeof(aviao[i][j].cod), arq);
      fscanf(arq, "%d\n", &aviao[i][j].estado);
      fscanf(arq, "%f\n", &aviao[i][j].valor);
    }
  }
  fclose(arq);
}

float ocupacao(assento aviao[][COL]){
	int i,j,qntdOcupados=0,qntdLivres=0;
	float ocupacao;
	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
			if(aviao[i][j].estado==1 || aviao[i][j].estado==-1) qntdOcupados++;
			else qntdLivres++;
		}
	}
	ocupacao=qntdOcupados/(qntdOcupados+qntdLivres+0.0); // 0.0 para manter em float
	return ocupacao;
}

int reservaLugar(assento aviao[][COL], char cod[4]){
	int i,j,reserva=1;
	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
			if(strcmp(aviao[i][j].cod,cod)==0){
				if(aviao[i][j].estado==0){
					reserva=0;
					break;
				}
			}
		}
		if(j!=COL) break;
	}
	return reserva;
}

void sequenciaLugares(assento aviao[][COL], int qtdade){
	int i,j,k,contagemLivres=0,situacao=1;
	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
			if(aviao[i][j].estado==0) contagemLivres++;
			else contagemLivres=0;
			if(contagemLivres==qtdade){
				situacao=0;
				for(k=j-qtdade+1;k<=j;k++){
					printf("%s ",aviao[i][k].cod);
				}
				contagemLivres=0;
				printf("\n");
			}
			if(j==COL-1) contagemLivres=0;
		}
	}
	if(situacao==1) printf("Nao ha %d lugares livres em sequencia.\n",qtdade);
	printf("\n");
}

void ajustaPreco(assento aviao[][COL]){
	int i,j;
	float valor=ocupacao(aviao);
	if(valor>=0.85){
		for(i=0;i<LIN;i++){
			for(j=0;j<COL;j++){
				if(aviao[i][j].estado==0) aviao[i][j].valor=aviao[i][j].valor*1.3;
			}
		}
		printf("O preco dos assentos restantes aumentou em 30%%.\n\n");
	}else if(valor<=0.25){
		for(i=0;i<LIN;i++){
			for(j=0;j<COL;j++){
				if(aviao[i][j].estado==0) aviao[i][j].valor=aviao[i][j].valor*0.95;
			}
		}
		printf("O preco dos assentos restantes diminuiu em 5%%.\n\n");
	}
}

int vendeAssento(assento aviao[][COL], char cod[4]){
	int i,j,condicao=-1;
	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
			if(strcmp(aviao[i][j].cod,cod)==0){
				if(aviao[i][j].estado==0 || aviao[i][j].estado==-1){
					aviao[i][j].estado=1;
					condicao=0;
					break;
				}
			}
		}
		if(j!=COL) break;
	}
	return condicao; 
}

void reservaNoFundo(assento aviao[][COL]){
	int i,j,condicao=1;
	for(i=19;i<LIN;i++){
		for(j=0;j<COL;j++){
			if(aviao[i][j].estado==0){
				aviao[i][j].estado=-1;
				condicao=0;
				printf("%s: Assento reservado.\n",aviao[i][j].cod);
				break;
			}
		}
		if(j!=COL) break;
	}
	if(condicao==1) printf("Nao ha posicoes livres no fundo.\n");
}

void reservaNoMeio(assento aviao[][COL]){
	int i,j,condicao=1;
	for(i=6;i<20;i++){
		for(j=0;j<COL;j++){
			if(aviao[i][j].estado==0){
				aviao[i][j].estado=-1;
				condicao=0;
				printf("%s: Assento reservado.\n",aviao[i][j].cod);
				break;
			}
		}
		if(j!=COL) break;
	}
	if(condicao==1) printf("Nao ha posicoes livres no fundo.\n");
}

void reservaNaFrente(assento aviao[][COL]){
	int i,j,condicao=1;
	for(i=0;i<7;i++){
		for(j=0;j<COL;j++){
			if(aviao[i][j].estado==0){
				aviao[i][j].estado=-1;
				condicao=0;
				printf("%s: Assento reservado.\n",aviao[i][j].cod);
				break;
			}
		}
		if(j!=COL) break;
	}
	if(condicao==1) printf("Nao ha posicoes livres no fundo.\n");
}

int cancelaReserva(assento aviao[][COL], char cod[4]){
	int i,j,condicao=-1;
	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
			if(strcmp(aviao[i][j].cod,cod)==0){
				if(aviao[i][j].estado==-1){
					aviao[i][j].estado=0;
					condicao=0;
					printf("Reserva cancelada.\n");
					break;
				}else if(aviao[i][j].estado==0){
					printf("Assento ja se encontra livre.\n");
					condicao=0;
					break;
				}
			}
		}
		if(j!=COL) break;
	}
	if(condicao==-1) printf("Assento ja foi vendido! Nao e possivel retornar para livre.\n");
	return condicao;
}

int registraAviao(assento aviao[][COL]){
	int i,j,k,contagem=0,retorno;
	FILE *arq2;
	arq2=fopen("aviao.log","w");
	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
			printf("Insira o codigo, estado e valor do assento %d-%d (faltam %d assentos):\n",i,j,LIN*COL-contagem);
			fflush(stdin);
			fgets(aviao[i][j].cod,sizeof(aviao[i][j].cod),stdin);
			for(k=0;k<4;k++) if(aviao[i][j].cod[k]=='\n') aviao[i][j].cod[k]='\0';
			fputs(aviao[i][j].cod,arq2);
			fflush(stdin);
			scanf("%d",&aviao[i][j].estado);
			fprintf(arq2,"\n%d\n",aviao[i][j].estado);
			scanf("%f",&aviao[i][j].valor);
			fprintf(arq2,"%.2f\n",aviao[i][j].valor);
			contagem++;
		}
	}
	if(arq2==NULL) retorno=-1;
	else retorno=0;
	return retorno;
}


