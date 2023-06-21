#include<stdio.h>
int main(){
	int n, i, t;
	printf("De qual numero deseja a tabuada (1-10): ");
	scanf("%d",&n);
	if(n>=1 && n<=10){
		printf("Tabuada do %d:",n);
		for(i=0;i<=10;i=i+1){
		t = i * n;
		printf("\n %d x %d = %d ",n, i, t);	
	}
	}else{
	printf("Opcao Invalida.");
	}
	return 0;
}
