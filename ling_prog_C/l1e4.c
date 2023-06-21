//Dados:
//-entrada: c centimetros
//-saida: m metros
/*#include<stdio.h>
int main(){
  //processo
  float c,m;
  //exibicao
  printf("Digite a medida em centimetros: ");
  //entrada
  scanf("%f", &c);
  //prcesso + exibicao
  printf("A quantidade de %.2f centimetros eh %.2f metros.",c,m);
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  float c,m;
  printf("Digite a medida em centimetros: ");
  scanf("%f", &c);
  m=c/100;
  printf("A quantidade de %.2f centimetros eh %.2f metros.",c,m);
  return 0;
}