#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define TAM 30

void resposta(int s){
  if(s==0){
    printf("A palavra eh palindromo.");
  }else{
    printf("A palavra nao eh palindromo.");
  }
}

int main(){
  char vetor[TAM];
  int i,t,s=0;
  printf("Digite uma palavra: ");
  fgets(vetor,TAM,stdin);
  t=strlen(vetor);
  t=t-2;//vetor-2 =>(\0+\n)
  for(i=0;i<t-1;i=i+1){
    if(vetor[i]!=vetor[t]){
      s=s+1;
    }
    t=t-1;
  }
  resposta(s);
  return 0;
}