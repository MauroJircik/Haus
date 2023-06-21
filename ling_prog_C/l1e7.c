//Dados:
//-entrada: la quant de latao kg
//-saida: co quant de cobre kg
//        zi quant de zinco kg
/*#include<stdio.h>
int main(){
  //processo
  float la,co,zi;
  //exibicao
  printf("Digite a qunatidade de latao a ser produzido: ");
  //entrada
  scanf("%f",&la);
  //processo
  co=0.7*la;
  zi=0.3*la;
  //exibicao
  printf("Para a quantidade de %.2f kg de latao sao necessarios %.2f kg de cobre e %.2f kg de zinco,",la,co,zi);
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  float la;
  printf("Digite a qunatidade de latao a ser produzido: ");
  scanf("%f",&la);
  printf("Para a quantidade de %.2f kg de latao sao necessarios %.2f kg de cobre e %.2f kg de zinco,",la,0.7*la,0.3*la);
  return 0;
}