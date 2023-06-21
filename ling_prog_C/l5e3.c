//Dados: menu(1,2,3,4,5)
//       v>0
//-entrada: v valor
//-saida: 1.0av; 2.va0;3.0av pares;4.0av impares;5.fim
//        A quantidade de cada opcao: Op1:x, Op2:x,..
/*#include<stdio.h>
int main(){
  int v,o,i,c1=0,c2=0,c3=0,c4=0;
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
        c1=c1+1;
      break;
      case 2:
        for(i=v;i>=0;i=i-1){
          printf("%d ",i);
        }
        c2=c2+1;
      break;
      case 3:
        for(i=0;i<=v;i=i+1){
          if(i%2==0){
            printf("%d ",i);
          }
        }
        c3=c3+1;
      break;
      case 4:
        for(i=0;i<=v;i=i+1){
          if(i%2!=0){
            printf("%d ",i);
          }
        }
        c4=c4+1;
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
  printf("\n\nAs Opcoes foram escolhidas:\n Op1:%dx, Op2:%dx, Op3:%dx, Op4:%dx.",c1,c2,c3,c4);
  return 0;
}*/
#include<stdio.h>
int main(){
  int v,o,i,c1=0,c2=0,c3=0,c4=0;
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
        c1=c1+1;
      break;
      case 2:
        for(i=v;i>=0;i=i-1){
          printf("%d ",i);
        }
        c2=c2+1;
      break;
      case 3:
        for(i=0;i<=v;i=i+1){
          if(i%2==0){
            printf("%d ",i);
          }
        }
        c3=c3+1;
      break;
      case 4:
        for(i=0;i<=v;i=i+1){
          if(i%2!=0){
            printf("%d ",i);
          }
        }
        c4=c4+1;
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
  printf("\n\nAs Opcoes foram escolhidas:\n Op1:%dx, Op2:%dx, Op3:%dx, Op4:%dx.",c1,c2,c3,c4);
  return 0;
}