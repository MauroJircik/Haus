#include<stdio.h>
int main(){
	int i;
	for(i=2;i<=300;i=i+1){
		if(i%2!=0){
			printf("%d ",i);
		}
	}
	return 0;
}
