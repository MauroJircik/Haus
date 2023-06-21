#include<stdio.h>
int main(){
	int i, q;
	float v, s, t, md;
	printf("Entre com o valor de n:");
	scanf("%d",&q);
	for(i=1;i<q+1;i=i+1){
		printf("Entre com o %d valor:", i);
		scanf("%f",&v);
		t = v + s;
		s = t;
	}
	md = (t / q);
	printf("\n A media dos valores eh: %.2f", md);
	return 0;
}
