#include<stdio.h>
int main(){
	int i, q, s;
	printf("Entre com um numero:");
	scanf("%d",&q);
	printf("\nSeus divisores sao: ");
	for(i=2;i<q+1;i=i+1){
		if(q%i == 0){
		s = (q/i);
		printf("%d ", s);
		}
	}
	return 0;
}
