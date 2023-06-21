#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define TAM 8

void preencherVetor(float v[]){
  int i;
  for(i=0;i<TAM;i=i+1){
    printf("Digite o %do valor: ",i+1);
    scanf("%f",&v[i]);
  }
}

void exibirVetor(float v[]){
  int i;
  printf("\nvetor resultante:\n");
  for(i=(TAM)/2;i<(TAM);i=i+1){
    printf("%.2f ", v[i]);
  }
  for(i=0;i<(TAM)/2;i=i+1){
    printf("%.2f ", v[i]);
  }
}

int main(){
  float vetor[TAM];
  int i;
  preencherVetor(vetor);
  exibirVetor(vetor);
  return 0;
}