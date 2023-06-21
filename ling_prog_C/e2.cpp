// com "4" funciona!
#include<stdio.h>
int main(){
	int i, q, s, st, d, p;
	scanf("%d",&q);
	printf("Os divisores sao: ");
	for(i=2;i<q+1;i=i+1){
		if(q%i == 0){
		s = (q/i);
		printf("%d ", s);
		st = s + d;
		d = st;	
		}
	}
	printf("\nA soma dos divisores eh: %d",st);
	p = (q/st);
	if(p == 1){
		printf("\nOs numeros perfeitos sao: %d",q);
	}
	return 0;
}
