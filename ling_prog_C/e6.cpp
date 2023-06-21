#include<stdio.h>
int main(){
	int x, y, i, s, t;
	printf("Entradas:");
	printf("\nEntre com x:");
	scanf("%d",&x);
	printf("Entre com y:");
	scanf("%d",&y);
	if(x<y){
		for(i=x;i<y;i=i+1){
			if(i%2==0){
				t = i + s;
				s = t;
				printf("%d ",i);
			}
		}
	}else{
		for(i=y;i<=x;i=i+1){
			if(i%2==0){
				t = i + s;
				s = t;
				printf("%d ",i);
			}
		}
	}
	printf("\n A soma dos numeros pares entre eles eh %d", t-1);
	return 0;
}
