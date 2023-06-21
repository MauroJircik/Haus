//Dados:
//-entrada: v (2a9)
//-saida: tabuada vxi=(v.i);i=0a10
/*#include<stdio.h>
int main(){
  //processo
  int v,i,m;
  //exibicao
  printf("Digite o numero da tabuada que deseja: ");
  //entrada
  scanf("%d",&v);
  //decisao
  if(v>=2&&v<=9){
    //sim_laco
    for(i=0;i<=10;i=i+1){
    //processo
    m=v*i;
    //exibicao
    printf("\n%d x %d = %d",v,i,m);
    }
  //nao_exibicao
  }else{
    printf("Somente valores entre 2 e 9.");
  }
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  int v,i;
  printf("Digite o numero da tabuada que deseja: ");
  scanf("%d",&v);
  if(v>=2&&v<=9){
    for(i=0;i<=10;i=i+1){
    printf("\n%d x %d = %d",v,i,(v*i));
    }
  }else{
    printf("Somente valores entre 2 e 9.");
  }
  return 0;
}