//Dados:
//-entrada: a,b,c a>1, b<c
//-saida: quant.s de i/a no intervalo (b,c)
/*#include<stdio.h>
int main(){
  //processo
  int a,b,c,i,s=0;
  //exibicao
  printf("Digite o divisor: ");
  //entrada
  scanf("%d",&a);
  //exibicao
  printf("Digite o inicio do intervalo: ");
  //entrada
  scanf("%d",&b);
  //exibicao
  printf("Digite o final do intervalo: ");
  //entrada
  scanf("%d",&c);
  //decisao
  if(a>1&&b<c){
  //sim_laco
    for(i=b;i<=c;i=i+1){
      //exibicao
      printf("\n%d",i);
      //decisao
      if(i%a==0){
        //sim_exibicao
        printf("%d",i);//para verificar!
        //processo
        s=s+1;
      }
    }
    //exibicao
    printf("\nA quantidade de numeros entre %d e %d divisiveis por %d eh:%d",b,c,a,s);
  //nao_exibicao
  }else{
    printf("Valor invalido.");
  }
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  int a,b,c,i,s=0;
  printf("Digite o divisor: ");
  scanf("%d",&a);
  printf("Digite o inicio do intervalo: ");
  scanf("%d",&b);
  printf("Digite o final do intervalo: ");
  scanf("%d",&c);
  if(a>1&&b<c){
    for(i=b;i<=c;i=i+1){
      printf("\n%d",i);
      if(i%a==0){
        printf("%d",i);//para verificar!
        s=s+1;
      }
    }
    printf("\nA quantidade de numeros entre %d e %d divisiveis por %d eh:%d",b,c,a,s);
  }else{
    printf("Invalido.");
  }
  return 0;
}