#include <stdio.h>
int main(void) {
  float ordem[10],v;
  int i;
  for(i=1;i<11;i=i+1){
    printf("Digite o %do valor: ",i);
    scanf("%f",&ordem[i]);
  }
  for(i=1;i<11;i=i+1){
    printf(" %.2f", ordem[i]);
  }
  printf("\n");
  for(i=10;i>0;i=i-1){
    printf(" %.2f", ordem[i]);
  }
  v = ordem[3];
  printf("\n%.2f", v);
  return 0;
}