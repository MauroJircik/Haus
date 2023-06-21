#include<stdio.h>
int main(){
	int i, o, r, ac, l, aq, b, h, at,d;
	for(i=1;i<2;i=i+1){
	printf("\nOpcoes:");
	printf("\n1 - Calcular a area de um circulo;");
	printf("\n2 - Calcular a area de um quadrado;");
	printf("\n3 - Calcular a area de um trangulo;");
	printf("\nOpcao (1-3):");
	scanf("%d",&o);
	if(o==1){
		printf("Qual o raio do circulo:");
		scanf("%d",&r);
		ac = 3.14*r*r;
		printf("A area do circulo eh: %d \n",ac);
	}else if(o==2){
		printf("Qual o lado do quadrado:");
		scanf("%d",&l);
		aq = l*l;
		printf("A area do quadrado eh: %d \n",aq);
	}else if(o==3){
		printf("Qual a base do triangulo:");
		scanf("%d",&b);
		printf("Qual a altura do triangulo:");
		scanf("%d",&h);
		at = b*h;
		printf("A area do triangulo eh: %d \n",at);
	}else{
		printf("Opco Invalida!");
		i=1;
	}
	printf("Deseja repetir (1-2):");
	scanf("%d",&d);
	if(d==1){
		i=0;
	}else if(d==2){
		i=3;
	}
	}
	return 0;
}
