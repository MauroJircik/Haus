//Dados: A - f(x,y)=(3x)2+y2
//       B - f(x,y)=2(x)2+(5y)2
//       C - f(x,y)=-100x+y3 
//-entrada: x,y [1,50]
//-saida: A,B,C a maior resposta
/*#include<stdio.h>
int main(){
  //processo
  float x=-1,y,a=0,b=0,c=0;
  //decisao
  do{
    //exibicao
    printf("Entre com o valor para x (1-50):");
    //entada
    scanf("%f", &x);
    }while(x<1||x>50);
  do{
    printf("Entre com o valor para y (1-50):");
    scanf("%f",&y);
  }while(y<1||y>50);
  //processo
  a=(9*x*x)+(y*y);
  b=(2*x*x)+(25*y*y);
  c=(-100*x)+(y*y*y);
  //exibicao
  printf("\nA: %.2f, B: %.2f, C: %.2f",a,b,c); //verificacao
  //decisao
  if(a>b&&b>c){
  //sim_exibicao
    printf("\n\nSaida: Para x = %.2f e y = %.2f, o maior resultado eh o da funcao A.",x,y);
  //nao_decisao
  }else if(a>c&&c>b){
    printf("\n\nSaida: Para x = %.2f e y = %.2f, o maior resultado eh o da funcao A.",x,y);
  }else if(b>a&&a>c){
    printf("\n\nSaida: Para x = %.2f e y = %.2f, o maior resultado eh o da funcao B.",x,y);
  }else if(b>c&&c>a){
    printf("\n\nSaida: Para x = %.2f e y = %.2f, o maior resultado eh o da funcao B.",x,y);
  }else if(c>b&&b>a){
    printf("\n\nSaida: Para x = %.2f e y = %.2f, o maior resultado eh o da funcao C.",x,y);
  }else{
    printf("\n\nSaida: Para x = %.2f e y = %.2f, o maior resultado eh o da funcao C.",x,y);
  }
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  float x=-1,y,a=0,b=0,c=0;
  do{
    printf("Entre com o valor para x (1-50):");
    scanf("%f", &x);
    }while(x<1||x>50);
  do{
    printf("Entre com o valor para y (1-50):");
    scanf("%f",&y);
  }while(y<1||y>50);
  a=(9*x*x)+(y*y);
  b=(2*x*x)+(25*y*y);
  c=(-100*x)+(y*y*y);
  printf("\nA: %.2f, B: %.2f, C: %.2f",a,b,c);
  if(a>b&&b>c){
    printf("\n\nSaida: Para x = %.2f e y = %.2f, o maior resultado eh o da funcao A.",x,y);
  }else if(a>c&&c>b){
    printf("\n\nSaida: Para x = %.2f e y = %.2f, o maior resultado eh o da funcao A.",x,y);
  }else if(b>a&&a>c){
    printf("\n\nSaida: Para x = %.2f e y = %.2f, o maior resultado eh o da funcao B.",x,y);
  }else if(b>c&&c>a){
    printf("\n\nSaida: Para x = %.2f e y = %.2f, o maior resultado eh o da funcao B.",x,y);
  }else if(c>b&&b>a){
    printf("\n\nSaida: Para x = %.2f e y = %.2f, o maior resultado eh o da funcao C.",x,y);
  }else{
    printf("\n\nSaida: Para x = %.2f e y = %.2f, o maior resultado eh o da funcao C.",x,y);
  }
  return 0;
}