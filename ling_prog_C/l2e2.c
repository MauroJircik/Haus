//Dados:
//conta 10+5=
//-entrada: r resposta
//-saida: r(V) A resposta esta correta
//        r(F) A resposta esta errada!
/*#include<stdio.h>
int main(){
  //processo
  int r;
  //exibicao
  printf("Qual eh o resultado da conta: 10+5=");
  //entrada
  scanf("%d",&r);
  //decisao
  if(r==15){
  //sim_exibicao
    printf("A resposta esta correta!");
  }else{
    //nao_exibicao
    printf("A resposta esta errada!");
  }
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  int r;
  printf("Qual eh o resultado da conta: 10+5=");
  scanf("%d",&r);
  if(r==15){printf("A resposta esta correta!");
  }else{printf("A resposta esta errada!");
  }
  return 0;
}