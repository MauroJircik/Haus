//Dados: n%2 int
//-entrada: n numero
//-saida: n par/impar
/*#include<stdio.h>
int main(){
  //processo
  int n;
  //exibicao
  printf("Digite um numero: ");
  //entrada
  scanf("%d",&n);
  //decisao
  if(n%2==0){
  //sim_exibicao
    printf("Par!");
  //nao_exibicao
  }else{
    printf("Impar!");
  }
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  int n;
  printf("Digite um numero: ");
  scanf("%d",&n);
  if(n%2==0){
    printf("Par!");
  }else{
    printf("Impar!");
  }
  return 0;
}