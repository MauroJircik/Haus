//Dados:
//calculo do ano bissexto
//-entrada: a ano
//-saida: a e bissexto/nao e bissexto
/*#include<stdio.h>
int main(){
  //processo
  int a;
  //exibicao
  printf("Digite o ano: ");
  ///entrada
  scanf("%d",&a);
  //decisao
  if((a%4==0)&&(a%100!=0)){
  //sim_exibicao
    printf("Bissexto!");
  //nao_decisao
  }else if((a%4==0)&&(a%100==0)&&(a%400==0)){
  //sim_exibicao
    printf("Bissexto!");
  //nao_exibicao
  }else{
    printf("Nao eh bissexto!");
  }
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  int a;
  printf("Digite o ano: ");
  scanf("%d",&a);
  if((a%4==0)&&(a%100!=0)){
    printf("Bissexto!");
  }else if((a%4==0)&&(a%100==0)&&(a%400==0)){
    printf("Bissexto!");
  }else{
    printf("Nao eh bissexto!");
  }
  return 0;
}