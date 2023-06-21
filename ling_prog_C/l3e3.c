//Dados:
//-entrada: v valor positivo
//-saida: v deva0
/*#include<stdio.h>
int main(){
  //processo
  int v,i;
  //exibicao
  printf("Digite o valor: ");
  //entrada
  scanf("%d",&v);
  //decisao
  if(v>=0){
  //sim_laco
      for(i=v;i>=0;i=i-1){
      //exibicao
      printf("\n%d",i);
    }
  //nao_exibicao
  }else{
    printf("Invalido - valor negativo.");
  }
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  int v,i;
  printf("Digite o valor: ");
  scanf("%d",&v);
  if(v>=0){
    for(i=v;i>=0;i=i-1){
      printf("\n%d",i);
    }
  }else{
    printf("Invalido - valor negativo.");
  }
  return 0;
}