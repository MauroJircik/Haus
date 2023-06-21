//Dados:
//p=R$7,00/m2
//areapeca=0,25m2
//-entrada: a area m2
//-saida: q pecas
//        v valor R$
/*#include<stdio.h>
int main(){
  //processo
  int q; 
  float a,v;
  //exibicao
  printf("Digite a area -m2- a ser coberta: ");
  //entrada
  scanf("%f",&a);
  //processo
  q=a/0.25;
  v=7*a;
  //exibicao
  printf("A quantidade de pisos eh: %d pecas.\nO valor total eh: R$%.2f.",q,v);
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  float a;
  printf("Digite a area -m2- a ser coberta: ");
  scanf("%f",&a);
  printf("A quantidade de pisos eh: %.0f pecas.\nO valor total eh: R$%.2f.",a/0.25,7*a);
  //fim
  return 0;
}