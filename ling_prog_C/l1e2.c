//Dados:
//- entrada:a,h
//- saida:v
/*#include<stdio.h>
int main(){
  //processo
  float a,r,v;
  //exibicao
  printf("Digite a altura do cilindro: ");
  //entrada
  scanf("%f", &a);
  //exibicao
  printf("Digite o raio do cilindro: ");
  //entrada
  scanf("%f", &r);
  //processo
  v=3.141592*r*r*a;
  //exibicao
  printf("O volume do clindro eh: %f",v);
  return 0;
}*/
#include<stdio.h>
int main(){
  float a,r,v;
  printf("Digite a altura do cilindro: ");
  scanf("%f", &a);
  printf("Digite o raio do cilindro: ");
  scanf("%f", &r);
  printf("O volume do clindro eh: %f",3.141592*r*r*a);
  return 0;
}