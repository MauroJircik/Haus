#include <stdio.h>
float calcularMedia (float v){
  float med;
  med=v/7;
  return med;
}

int main(void) {
  int i;
  float valor[7],ma=0,me=100000,med=0,s=0,v=0;
  float calcularMedia (float v);
  for(i=1;i<8;i=i+1){
    printf("Digite o %do valor: ",i);
    scanf("%f",&valor[i]);
    s = valor[i]+v;
    v=s;
    if(ma<valor[i]){
      ma=valor[i];
    }
    if(me>valor[i]){
      me=valor[i];
    }
    }
  med = calcularMedia (v);
  printf("A media: %.2f", med);
  printf("\nO maior valor: %.2f", ma);
  printf("\nO menor valor: %.2f", me);
  return 0;
}