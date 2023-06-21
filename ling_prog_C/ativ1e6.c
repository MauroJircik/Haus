//Dados:
//-entrada: v valores (neg/posit) 15x
//-saida: q quant de valores positivos
/*#include<stdio.h>
int main(){
  //processo
  int a,i,q=0;
  //decisao
  for(i=1;i<=15;i=i+1){
  //sim_exibicao
    printf("Digite o %do valor: ",i);
    //entrada
    scanf("%d",&a);
    //decisao
    if(a>0){
    //sim-processo
    q=q+1;  
    }
  //nao
  }
  //exibicao
  printf("\nA quantidade de valores positivos digitados: %d",q);
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  int a,i,q=0;
  for(i=1;i<=15;i=i+1){
    printf("Digite o %do valor: ",i);
    scanf("%d",&a);
    if(a>0){
    q=q+1;  
    } 
  }
  printf("\nA quantidade de valores positivos digitados: %d",q);
  return 0;
}