//Dados:
//-entrada: v valor positivo
//-saida: v  de v a -v
/*#include<stdio.h>
int main(){
  //processo
  int v,i;
  //exibicao
  printf("Digite o valor: ");
  //entrada
  scanf("%d",&v);
  //decisao
  while(v<0){
  //nao_exibicao
    printf("O valor deve ser positivo.");
    printf("\nDigite o valor: ");
    //entrada
    scanf("%d",&v);
  }
  //sim_decisao
    for(i=v;i>=-v;i=i-1){
      //exibicao
      printf("\n%d",i);
    }
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  int v,i;
  printf("Digite o valor: ");
  scanf("%d",&v);
  while(v<0){
    printf("O valor deve ser positivo.");
    printf("\nDigite o valor: ");
    scanf("%d",&v);
  }
    for(i=v;i>=-v;i=i-1){
      printf("\n%d",i);
    }
  return 0;
}