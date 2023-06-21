//Dados:
//Seq. Fibonacci: an=an-1+an-2
//-entrada: n elemento
//-saida: 1,1,2,3,5,8,13,21,...
/*#include<stdio.h>
int main(){
  //processo
  int n,i,a1=1,a2=1,a3=1;
  //exibicao
  printf("Digite quantos elementos deseja: ");
  //entrada
  scanf("%d",&n);
  //decisao_laco
  for(i=0;i<=n;i=i+1){
    //exibicao
    printf("\n%d",a3);
    //processo
    a3=a2+a1;
    a1=a2;
    a2=a3;
  }
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  int n,i,a1=1,a2=1,a3=1;
  printf("Digite quantos elementos deseja: ");
  scanf("%d",&n);
  for(i=0;i<=n;i=i+1){
    printf("\n%d",a3);
    a3=a2+a1;
    a1=a2;
    a2=a3;
  }
  return 0;
}