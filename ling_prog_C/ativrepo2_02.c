#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define TAM 30

int main(){
  char palavra[TAM],letra;
  int i,t,p=0;
  printf("Entre com a palavra: ");
  fgets(palavra,TAM,stdin);
  t=strlen(palavra);
  printf("Entre com o caracter: ");
  scanf("%c", &letra);
  for(i=0;i<t-1;i=i+1){
    if(letra==palavra[i]){
      p=i;
      i=t;
    }else{
      p=-1;
    }
  }
  if(p>=0){
    printf("Resultado: posicao %d",p+1);  
  }else{
    printf("Resultado: nao existe");
    }
  return 0;
}