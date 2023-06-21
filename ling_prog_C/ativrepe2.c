//Dados:
//-entrada: v
//-saida: resultado de 3.v
//        novo calc (s/n)
/*#include<stdio.h>
int main(){
	int i, v, r, ac, l, aq, b, h, at,d;
  char op;
	for(i=1;i<2;i=i+1){
    printf("Digite um valor:");
    scanf("%d",&v);
    printf("O resultado da mltiplicacao por 3 eh %d",3*v);
  	printf("\nDeseja realizar mais um calculo (s/n):");
    scanf("%c",&op);
    if(op=='s'){
      i=0;
    }else if(op=='n'){
		i=3;
    }
	}
	return 0;
}*/
#include<stdio.h>
int main(){
	int i, v, r, ac, l, aq, b, h, at,d;
  char op;
	for(i=1;i<2;i=i+1){
    printf("Digite um valor:");
    scanf("%d",&v);
    printf("O resultado da mltiplicacao por 3 eh %d",3*v);
  	printf("\nDeseja realizar mais um calculo (s/n):");
    scanf("%c",&op);
    if(op=='s'){
      i=0;
    }else if(op=='n'){
		i=3;
    }
	}
	return 0;
}
