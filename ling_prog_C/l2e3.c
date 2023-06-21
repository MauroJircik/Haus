//Dados: decrescente
//-entrada: n1,n2,n3
//-saida: n1>n2>n3
//        n1>n3>n2 ...
/*#include<stdio.h>
int main(){
  //processo
  int n1,n2,n3;
  //exibicao
  printf("Entre com o prmeiro numero: ");
  //entrada
  scanf("%d",&n1);
  //exibicao
  printf("Entre com o segundo numero: ");
  //entrada
  scanf("%d",&n2);
  //exibicao
  printf("Entre com o terceiro numero: ");
  //entrada
  scanf("%d",&n3);
  //decisao
  if(n1>n2&&n2>n3){
  //sim_exibicao
    printf("%d, %d, %d",n1,n2,n3);
  //nao-decisao
  }else if(n1>n3&&n3>n2){
  //sim_exibicao
    printf("%d, %d, %d", n1,n3,n2);
  //nao-decisao
  }else if(n2>n1&&n1>n3){
  //sim_exibicao
    printf("%d, %d, %d",n2,n1,n3);
  //nao-decisao
  }else if(n2>n3&&n3>n1){
  //sim_exibicao
    printf("%d, %d, %d",n2,n3,n1);
  //nao-decisao
  }else if(n3>n2&&n2>n1){
  //sim_exibicao
    printf("%d, %d, %d",n3,n2,n1);
  //nao-decisao
  }else{
    printf("%d, %d, %d",n3,n1,n2);  
  }
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  int n1,n2,n3;
  printf("Entre com o prmeiro numero: ");
  scanf("%d",&n1);
  printf("Entre com o segundo numero: ");
  scanf("%d",&n2);
  printf("Entre com o terceiro numero: ");
  scanf("%d",&n3);
  if(n1>n2&&n2>n3){
    printf("%d, %d, %d",n1,n2,n3);
  }else if(n1>n3&&n3>n2){
    printf("%d, %d, %d", n1,n3,n2);
  }else if(n2>n1&&n1>n3){
    printf("%d, %d, %d",n2,n1,n3);
  }else if(n2>n3&&n3>n1){
    printf("%d, %d, %d",n2,n3,n1);
  }else if(n3>n2&&n2>n1){
    printf("%d, %d, %d",n3,n2,n1);
  }else{
    printf("%d, %d, %d",n3,n1,n2);  
  }
  return 0;
}