#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int vogal(char v){
  if(v=='a'||v=='e'||v=='i'||v=='o'||v=='u'){  
    return (1);
  }else{
    return (0);
  }
}

int main(){
  int i,t,sc=0,sct=0;
  char vetor[11];//vetor=t+\0
  printf("Digite 10 caracteres: ");
  fgets(vetor,11,stdin);
  t=strlen(vetor);//qvetor=t+\0
  printf("As consoantes lidas foram: ");
  for(i=0;i<=t-1;i++){//t-1=>\0
    if(vogal(vetor[i])!=1){
      printf("%c ",vetor[i]);
      sct=sc+1;
      sc=sct;
    }
  }
  printf("\nO total de consoantes lidas eh: %d",sc);
  return 0;
}