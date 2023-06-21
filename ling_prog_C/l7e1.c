#include <stdio.h>
int main() {
  float matriz[3][3];
  int l,c;
  for(l=0;l<3;l=l+1){
    for(c=0;c<3;c=c+1){
      printf("Digite o elemento a%d,%d: ",l+1,c+1);
      scanf("%f",&matriz[l][c]);
    }
  }
  printf("\nMatriz 3x3:\n");
  for(l=0;l<3;l=l+1){
    for(c=0;c<3;c=c+1){
      printf("%.2f ",matriz[l][c]);
    }
    printf("\n");
  }
  return 0;
}