//Dados:
//-entrada: p preco da refeicao
//-saida: d desconto
/*#include<stdio.h>
int main(){
  //processo
  float p,d;
  //exibicao
  printf("Digite o preco da refeicao: ");
  //entrada
  scanf("%f",&p);
  //processo
  d=0.10*p;
  //exibicao
  printf("O valor dos 10 porcent da conta eh: %.2f",d);
  return 0;
}*/
#include<stdio.h>
int main(){
  float p;
  printf("Digite o preco da refeicao: ");
  scanf("%f",&p);
  printf("O valor dos 10 porcent da conta eh: %.2f",0.10*p);
  return 0;
}