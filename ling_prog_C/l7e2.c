#include <stdio.h>
void calcMatriz(int linhas, int colunas) {
  int l,c;
  int identidade[linhas][colunas];
  printf("Matriz %dx%d:\n",linhas,linhas);
  for(l=0;l<linhas;l=l+1){
    for(c=0;c<colunas;c=c+1){
      if(l==c) identidade[l][c]=1;
      else identidade[l][c]=0;
      printf(" %d", identidade[l][c]);
      }
    printf("\n");
  }
  return 0;
}

int main(){
  int TAM,linhas,colunas;
  printf("Digite o tamanho da matriz identidade: ");
  scanf("%d", &TAM);
  linhas=TAM;
  colunas=linhas;
  calcMatriz(linhas, colunas);
  return 0;
}
