//Dados:
//-entrada: metros
//-saida: centimetros
//inicio
/*#include <stdio.h>
int main(){
  //processo
  float m,c;
  //exibicao
  printf("Digite a medida - metros: ");
  //entrada
  scanf("%f", &m);
  //processo
  c=100*m;
  //exibicao
  printf("A medida de %.2f metros em cetímetros eh %.2f",m,c);
  //fim
  return 0;
}*/
#include <stdio.h>
int main(){
  float m,c;
  printf("Digite a medida - metros: ");
  scanf("%f", &m);
  c=100*m;
  printf("A medida de %.2f metros em cetímetros eh %.2f",m,c);
  return 0;
}