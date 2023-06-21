//Dados:
//-entrada: n1,n2
//-saida: soma,subtracao,multiplicacao e divisao
/*#include<stdio.h>
int main(){
  //processo
  float n1,n2;
  //exibicao
  printf("Digite o 1o valor: ");
  //entrada
  scanf("%f",&n1);
  //exibicao
  printf("Digite o 2o valor: ");
  //entrada
  scanf("%f",&n2);
  //processo + exibicao
  printf("\nSoma: %f",n1+n2);
  printf("\nSubtracao: %f",n1-n2);
  printf(" ou %f",n2-n1);
  printf("\nMultiplicacao: %f",n1*n2);
  printf("\nDivisao: %f",n1/n2);
  printf(" ou %f",n2/n1);
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  float n1,n2;
  printf("Digite o 1o valor: ");
  scanf("%f",&n1);
  printf("Digite o 2o valor: ");
  scanf("%f",&n2);
  printf("\nSoma: %f",n1+n2);
  printf("\nSubtracao: %f",n1-n2);
  printf(" ou %f",n2-n1);
  printf("\nMultiplicacao: %f",n1*n2);
  printf("\nDivisao: %f",n1/n2);
  printf(" ou %f",n2/n1);
  return 0;
}