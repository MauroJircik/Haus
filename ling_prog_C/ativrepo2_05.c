#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define TAM 5

void imprimirZeros(int m[][TAM], int tam){
  int i,j;
  printf("\nA matriz com zeros eh:");
  for(i=0;i<tam;i=i+1){
    printf("\n");
    for(j=0;j<tam;j=j+1){
      printf("0 ",m[i][j]);
      }
    }
  }

void imprimirUm(int m[][TAM], int tam){
  int i,j;
  printf("\nA matriz com um eh:");
  for(i=0;i<tam;i=i+1){
    printf("\n");
    for(j=0;j<tam;j=j+1){
      if(i>0 && i<tam-1 && j>0 && j<tam-1){
        printf("  ");
      }else{
      printf("1 ",m[i][j]);
      }
    }
  }
}

void imprimirResult(m[][TAM], int tam){
  int i,j;
 printf("\nA matriz resultado eh:");
  for(i=0;i<tam;i=i+1){
    printf("\n");
    for(j=0;j<tam;j=j+1){
      if(i>0 && i<tam-1 && j>0 && j<tam-1){
        printf("0 ");
      }else{
      printf("1 ",m[i][j]);
      }
    }
  }
} 

int main(){
  int matriz[TAM][TAM];
  int i,j;
  imprimirZeros(matriz, TAM);
  imprimirUm(matriz, TAM);
  imprimirResult(matriz, TAM);
  return 0;
}