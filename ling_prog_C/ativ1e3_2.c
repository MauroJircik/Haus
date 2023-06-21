//Dados: menu
//-entrada: cod codigo(1-6), q quantidade
//-saida: v conta R$
/*#include<stdio.h>
int main(){
  //processo
  int cod,q1,q2,q3,q4,q5;
  float v=0;
  //exibicao
  printf("Cod -   Produto    -  Preco");
  printf("\n 1  -    Cafe      - R$15,00");
  printf("\n 2  -    Leite     - R$ 9,90");
  printf("\n 3  - Pao de forma - R$12,00");
  printf("\n 4  -   Sabonete   - R$ 2,00");
  printf("\n 5  -  Detergente  - R$ 2,90");
  printf("\n 6:Finalizar");
  //decisao
  while(cod!=6){
    //sim_exibicao
    printf("\nOpcao (1-6):");
    //entrada
    scanf("%d",&cod);
    //processo
    switch(cod){
      case 1:
        //exibicao
        printf("  quant cafe:");
        //entrada
        scanf("%d",&q1);
        //processo
        v=v+(15.00*q1);
        //exibicao
        printf("+ %d Cafe:         R$ %.2f",q1,v);
      break;
      case 2:
        printf("  quant leite:");
        scanf("%d",&q2);
        v=v+(9.90*q2);
        printf("+ %d Leite:        R$ %.2f",q2,v);
      break;
      case 3:
        printf("  quant pao:");
        scanf("%d",&q3);
        v=v+(12.00*q3);
        printf("+ %d Pao de forma: R$ %.2f",q3,v);
      break;
      case 4:
        printf("  quant sabonete:");
        scanf("%d",&q4);
        v=v+(2.00*q4);
        printf("+ %d Sabonete:     R$ %.2f",q4,v);
      break;
      case 5:
        printf("  quant detergente:");
        scanf("%d",&q5);
        v=v+(2.90*q5);
        printf("+ %d Detergente:    R$ %.2f",q5,v);
      break;
      case 6:
        printf("Finalizado pedido.");
      break;
    //nao_exibicao
        default:
        printf("Escolha um codigo valido.");
    }
  }
  //exibicao
  printf("\n\nTotal a pagar: R$ %.2f",v);
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  int cod,q1,q2,q3,q4,q5;
  float v=0;
  printf("Cod -   Produto    -  Preco");
  printf("\n 1  -    Cafe      - R$15,00");
  printf("\n 2  -    Leite     - R$ 9,90");
  printf("\n 3  - Pao de forma - R$12,00");
  printf("\n 4  -   Sabonete   - R$ 2,00");
  printf("\n 5  -  Detergente  - R$ 2,90");
  printf("\n 6:Finalizar");
  while(cod!=6){
    printf("\nOpcao (1-6):");
    scanf("%d",&cod);
    switch(cod){
      case 1:
        printf("  quant cafe:");
        scanf("%d",&q1);
        v=v+(15.00*q1);
        printf("+ %d Cafe:         R$ %.2f",q1,v);
      break;
      case 2:
        printf("  quant leite:");
        scanf("%d",&q2);
        v=v+(9.90*q2);
        printf("+ %d Leite:        R$ %.2f",q2,v);
      break;
      case 3:
        printf("  quant pao:");
        scanf("%d",&q3);
        v=v+(12.00*q3);
        printf("+ %d Pao de forma: R$ %.2f",q3,v);
      break;
      case 4:
        printf("  quant sabonete:");
        scanf("%d",&q4);
        v=v+(2.00*q4);
        printf("+ %d Sabonete:     R$ %.2f",q4,v);
      break;
      case 5:
        printf("  quant detergente:");
        scanf("%d",&q5);
        v=v+(2.90*q5);
        printf("+ %d Detergente:    R$ %.2f",q5,v);
      break;
      case 6:
        printf("Finalizado pedido.");
      break;
      default:
        printf("Escolha um codigo valido.");
    }
  }
  printf("\n\nTotal a pagar: R$ %.2f",v);
  return 0;
}