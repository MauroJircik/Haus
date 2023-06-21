//Dados: menu
//-entrada: cod codigo(1-5), q quantidade
//-saida: v conta R$
/*#include<stdio.h>
int main(){
  int cod,q;
  float v=0;
  printf("Cod -   Produto    -  Preco");
  printf("\n 1  -    Cafe      - R$15,00");
  printf("\n 2  -    Leite     - R$ 9,90");
  printf("\n 3  - Pao de forma - R$12,00");
  printf("\n 4  -   Sabonete   - R$ 2,00");
  printf("\n 5  -  Detergente  - R$ 2,90");
  printf("\nEntre com o codigo do produto:");
  scanf("%d",&cod);
  if(cod==1){
    printf("Entre com a quantidade:");
    scanf("%d",&q);
    v=15.00*q;
  }else if(cod==2){
    printf("Entre com a quantidade:");
    scanf("%d",&q);
    v=9.90*q;
  }else if(cod==3){
    printf("Entre com a quantidade:");
    scanf("%d",&q);
    v=12.00*q;
  }else if(cod==4){
    printf("Entre com a quantidade:");
    scanf("%d",&q);
    v=9.00*q;
  }else if(cod==5){
    printf("Entre com a quantidade:");
    scanf("%d",&q);
    v=2.90*q;
  }
  printf("Total a pagar eh de R$ %.2f",v);
  return 0;
}*/
#include<stdio.h>
int main(){
  int cod,q;
  float v=0;
  printf("Cod -   Produto    -  Preco");
  printf("\n 1  -    Cafe      - R$15,00");
  printf("\n 2  -    Leite     - R$ 9,90");
  printf("\n 3  - Pao de forma - R$12,00");
  printf("\n 4  -   Sabonete   - R$ 2,00");
  printf("\n 5  -  Detergente  - R$ 2,90");
  printf("\nEntre com o codigo do produto:");
  scanf("%d",&cod);
  if(cod==1){
    printf("Entre com a quantidade:");
    scanf("%d",&q);
    v=15.00*q;
  }else if(cod==2){
    printf("Entre com a quantidade:");
    scanf("%d",&q);
    v=9.90*q;
  }else if(cod==3){
    printf("Entre com a quantidade:");
    scanf("%d",&q);
    v=12.00*q;
  }else if(cod==4){
    printf("Entre com a quantidade:");
    scanf("%d",&q);
    v=9.00*q;
  }else if(cod==5){
    printf("Entre com a quantidade:");
    scanf("%d",&q);
    v=2.90*q;
  }
  printf("Total a pagar eh de R$ %.2f",v);
  return 0;
}