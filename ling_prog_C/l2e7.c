//Dados:
// n1>n2, n3>n3, (n3+n4)<(n1+n2)
//-entrada: n1,n2,n3,n4
//-saida: Atende/Nao atende
/*#include<stdio.h>
int main(){
  //processo
  float n1,n2,n3,n4,na,nb;
  //exibicao
  printf("Digite o 1o valor: ");
  //entrada
  scanf("%f",&n1);
  //exibicao
  printf("Digite o 2o valor: ");
  //entrada
  scanf("%f",&n2);
  //exibicao
  printf("Digite o 3o valor: ");
  //entrada
  scanf("%f",&n3);
  //exibicao
  printf("Digite o 4o valor: ");
  //entrada
  scanf("%f",&n4);
  //processo
  na=n3+n4;
  nb=n1+n2;
  //decisao
  if(n1>n2&&n3>n4&&na<nb){
  //sim_exibicao
    printf("Atendidos!");
  //nao_exibicao
  }else{
    printf("Nao atendidos!");
  }
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  float n1,n2,n3,n4,na,nb;
  printf("Digite o 1o valor: ");
  scanf("%f",&n1);
  printf("Digite o 2o valor: ");
  scanf("%f",&n2);
  printf("Digite o 3o valor: ");
  scanf("%f",&n3);
  printf("Digite o 4o valor: ");
  scanf("%f",&n4);
  na=n3+n4;
  nb=n1+n2;
  if(n1>n2&&n3>n4&&na<nb){
    printf("Atendidos!");
  }else{
    printf("Nao atendidos!");
  }
  return 0;
}