//Dados: menu
//-entrada: o opcao(1,2,3,4,5,6)
//-saida: v conta R$
/*#include <stdio.h>
int main() {
  //processo
  int o=1;
  float v=0;
  //exibicao
  printf("Opcao1-Sanduiche natural-R$5,00");
  printf("\nOpcao2-X-salada-R$15,00");
  printf("\nOpcao3-Refrigerante-R$3,50");
  printf("\nOpcao4-Suco-R$3,00");
  printf("\nOpcao5-Sorvete-R$9,00");
  printf("\nOpcao6-Finalizar");
  //decisao
  while(o!=6){
    //exibicao
    printf("\nOpcao(1-6):");
    //entrada
    scanf("%d", &o);
    //processo
    switch(o){
    case 1:
      v=v+5;
      printf("+Sanduiche natural:R$%.2f",v);
    break;
    case 2:
      v=v+15;
      printf("+X-salada:         R$%.2f",v);
    break;
    case 3:
      v=v+3.5;
      printf("+Refrigerante:     R$%.2f",v);
    break;
    case 4:
      v=v+3;
      printf("+Suco:             R$%.2f",v);
    break;
    case 5:
      v=v+9;
      printf("+Sorvete:          R$%.2f",v);
    break;
    case 6:
      printf("Pedido Finalizado!");
    break;
    default:
      printf("Escolha uma opcao valida.");
    }
  }
  //exibicao
  printf("\nO valor total da conta:R$%.2f.",v);
  //fim
  return 0;
}*/
#include <stdio.h>
int main() {
  int o=1;
  float v=0;
  printf("Opcao1-Sanduiche natural-R$5,00");
  printf("\nOpcao2-X-salada-R$15,00");
  printf("\nOpcao3-Refrigerante-R$3,50");
  printf("\nOpcao4-Suco-R$3,00");
  printf("\nOpcao5-Sorvete-R$9,00");
  printf("\nOpcao6-Finalizar");
  while(o!=6){
    printf("\nOpcao(1-6):");
    scanf("%d", &o);
    switch(o){
    case 1:
      v=v+5;
      printf("+Sanduiche natural:R$%.2f",v);
    break;
    case 2:
      v=v+15;
      printf("+X-salada:         R$%.2f",v);
    break;
    case 3:
      v=v+3.5;
      printf("+Refrigerante:     R$%.2f",v);
    break;
    case 4:
      v=v+3;
      printf("+Suco:             R$%.2f",v);
    break;
    case 5:
      v=v+9;
      printf("+Sorvete:          R$%.2f",v);
    break;
    case 6:
      printf("Pedido Finalizado!");
    break;
    default:
      printf("Escolha uma opcao valida.");
    }
  }
  printf("\nO valor total da conta:R$%.2f.",v);
  return 0;
}