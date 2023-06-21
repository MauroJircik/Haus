//Dados: menu(1,2,3,4,5)
//       v>0
//-entrada: v valor
//-saida: 1.0av; 2.va0;3.0av pares;4.0av impares;5.fim
/*#include<stdio.h>
int main(){
  //processo
  int v,o,i;
  //exibicao
  printf("Digite um valor: ");
  //entrada
  scanf("%d",&v);
  //decisao
  if(v>0){
  //sim_exibicao
  printf("\n\nOpcao1-Ordem crescente");
  printf("\nOpcao2-Ordem decrescente");
  printf("\nOpcao3-So valores pares");
  printf("\nOpcao4-So valores impares");
  printf("\nOpcao5-Finalizar");
  //decisao
  while(o!=5){
    //exibicao
    printf("\nOpcao(1-5):");
    //entrada
    scanf("%d",&o);
    //decisao
    switch(o){
      case 1:
        //laco
        for(i=0;i<=v;i=i+1){
          //exibicao
          printf("%d ",i);
        }
      break;
      case 2:
        for(i=v;i>=0;i=i-1){
          printf("%d ",i);
        }
      break;
      case 3:
        for(i=0;i<=v;i=i+1){
          if(i%2==0){
            printf("%d ",i);
          }
        }
      break;
      case 4:
        for(i=0;i<=v;i=i+1){
          if(i%2!=0){
            printf("%d ",i);
          }
        }
      break;
      case 5:
        printf("Finalizado!");
      break;
      default:
        printf("Escolha uma opcao valida.");
    }
  }
  //nao_exibicao
  }else{
    printf("Invalido - valor negativo.");
  }
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  int v,o,i;
  printf("Digite um valor: ");
  scanf("%d",&v);
  if(v>0){
  printf("\n\nOpcao1-Ordem crescente");
  printf("\nOpcao2-Ordem decrescente");
  printf("\nOpcao3-So valores pares");
  printf("\nOpcao4-So valores impares");
  printf("\nOpcao5-Finalizar");
  while(o!=5){
    printf("\nOpcao(1-5):");
    scanf("%d",&o);
    switch(o){
      case 1:
        for(i=0;i<=v;i=i+1){
          printf("%d ",i);
        }
      break;
      case 2:
        for(i=v;i>=0;i=i-1){
          printf("%d ",i);
        }
      break;
      case 3:
        for(i=0;i<=v;i=i+1){
          if(i%2==0){
            printf("%d ",i);
          }
        }
      break;
      case 4:
        for(i=0;i<=v;i=i+1){
          if(i%2!=0){
            printf("%d ",i);
          }
        }
      break;
      case 5:
        printf("Finalizado!");
      break;
      default:
        printf("Escolha uma opcao valida.");
    }
  }
  }else{
    printf("Invalido - valor negativo.");
  }
  return 0;
}