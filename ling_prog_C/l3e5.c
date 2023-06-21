//Dados:
//-entrada: n1,n2  n1=0ou1
//-saida: n1=1 =>n2a0
//        n1=0 =>0an2
/*#include<stdio.h>
int main(){
  //processo
  int n1,n2,i;
  //exibicao
  printf("Digite o 1o valor-(0ou1): ");
  //entrada
  scanf("%d",&n1);
  //exibicao
  printf("Digite o 2o valor: ");
  //entrada
  scanf("%d",&n2);
  //decisao
  if(n1==1){
  //sim_laco
    for(i=n2;i>=0;i=i-1){
      //exibicao
      printf("\n%d",i);
    }
  //nao_decisao
  }else if(n1==0){
  //sim_laco
    for(i=0;i<=n2;i=i+1){
      //exibicao
      printf("\n%d",i);
    }
  //nao_exibicao
  }else{
    printf("Invalido - O 1o valor somente 0 ou 1.");
  }
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  int n1,n2,i;
  printf("Digite o 1o valor-(0ou1): ");
  scanf("%d",&n1);
  printf("Digite o 2o valor: ");
  scanf("%d",&n2);
  if(n1==1){
    for(i=n2;i>=0;i=i-1){
      printf("\n%d",i);
    }
  }else if(n1==0){
    for(i=0;i<=n2;i=i+1){
      printf("\n%d",i);
    }
  }else{
    printf("Invalido - O 1o valor somente 0 ou 1.");
  }
  return 0;
}