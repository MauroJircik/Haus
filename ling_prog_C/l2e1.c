//Dados:
//-entrada: n1,n2
//-saida: n1 eh maior que n2
//        n2 eh maior que n1
/*#include<stdio.h>
int main(){
  //processo
  float n1,n2;
  //exibicao
  printf("Entre com o primeiro valor: ");
  //entrada
  scanf("%f",&n1);
  //exibicao
  printf("entre com o segundo valor: ");
  //entrada
  scanf("%f",&n2);
  //decisao
  if(n1>n2){
  //sim_exibicao
    printf("%.2f e maior que %.2f",n1,n2);
  }else{
  //nao_exibicao
  printf("%.2f eh maior que %.2f",n2,n1);
  }
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  float n1,n2;
  printf("Entre com o primeiro valor: ");
  scanf("%f",&n1);
  printf("entre com o segundo valor: ");
  scanf("%f",&n2);
  if(n1>n2){
    printf("%.2f e maior que %.2f",n1,n2);
  }else{
    printf("%.2f eh maior que %.2f",n2,n1);
  }
  return 0;
}