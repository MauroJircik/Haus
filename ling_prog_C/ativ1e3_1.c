//Dados: menu
//       escolha de 5 produtos
//-entrada: cod codigo(1-6), q quantidade
//-saida: v conta R$
/*#include<stdio.h>
int main(){
  //processo
  int i,cod,q;
  float v=0;
  //exibicao
  printf("Cod -   Produto    -  Preco");
  printf("\n 1  -    Cafe      - R$15,00");
  printf("\n 2  -    Leite     - R$ 9,90");
  printf("\n 3  - Pao de forma - R$12,00");
  printf("\n 4  -   Sabonete   - R$ 2,00");
  printf("\n 5  -  Detergente  - R$ 2,90\n");
  //decisao
  for(i=1;i<=5;i=i+1){
  //sim_exibicao
    printf("\nEntre com o codigo do %do produto(1-5):",i);
    //entrada
    scanf("%d",&cod);
    //decisao
    if(cod==1){
    //sim_exibicao
      printf("Entre com a quantidade de cafe:");
      //entrada
      scanf("%d",&q);
      //processo
      v=v+(15.00*q);
    //nao_decisao
    }else if(cod==2){
      printf("Entre com a quantidade de leite:");
      scanf("%d",&q);
      v=v+(9.90*q);
    }else if(cod==3){
      printf("Entre com a quantidade de pao:");
      scanf("%d",&q);
      v=v+(12.00*q);
    }else if(cod==4){
      printf("Entre com a quantidade de sabonete:");
      scanf("%d",&q);
      v=v+9.00*q;
    }else if(cod==5){
      printf("Entre com a quantidadede detergente:");
      scanf("%d",&q);
      v=v+(2.90*q);
    }
  }
  //nao_exibicao
  printf("\nConta a pagar:R$ %.2f",v);
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  int i,cod,q;
  float v=0;
  printf("Cod -   Produto    -  Preco");
  printf("\n 1  -    Cafe      - R$15,00");
  printf("\n 2  -    Leite     - R$ 9,90");
  printf("\n 3  - Pao de forma - R$12,00");
  printf("\n 4  -   Sabonete   - R$ 2,00");
  printf("\n 5  -  Detergente  - R$ 2,90\n");
  for(i=1;i<=5;i=i+1){
    printf("\nEntre com o codigo do %do produto(1-5):",i);
    scanf("%d",&cod);
    if(cod==1){
      printf("Entre com a quantidade de cafe:");
      scanf("%d",&q);
      v=v+(15.00*q);
    }else if(cod==2){
      printf("Entre com a quantidade de leite:");
      scanf("%d",&q);
      v=v+(9.90*q);
    }else if(cod==3){
      printf("Entre com a quantidade de pao:");
      scanf("%d",&q);
      v=v+(12.00*q);
    }else if(cod==4){
      printf("Entre com a quantidade de sabonete:");
      scanf("%d",&q);
      v=v+9.00*q;
    }else if(cod==5){
      printf("Entre com a quantidadede detergente:");
      scanf("%d",&q);
      v=v+(2.90*q);
    }
  }
  printf("\nConta a pagar:R$ %.2f",v);
  return 0;
}