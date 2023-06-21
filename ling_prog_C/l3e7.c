//Dados:
//-entrada: n numero entre (3,18)
//-saida: d1,d2,d3 3(111)
//        s vezes  4(112),(121),(211)
//                 5(113),(122),(131),(212),(221),(311)
/*#include<stdio.h>
int main(){
  //processo
  int n,i,s=0;
  //exibicao
  printf("Digite um valor entre 3 e 18: ");
  //entrada
  scanf("%d",&n);
  //decisao
  if(n>=3&&n<=18){
  //sim_laco
    for(i=(n-2);i>=0;i=i-1){
      //exibicao
      printf("%d",i);//para verificar!!
      //processo
      s=s+i;
    }
  }
  //exibicao
  printf("\nA quantidade de maneiras que o valor %d pode ser representado com tres dados: %d forma(s).",n,s);
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  int n,i,s=0;
  printf("Digite um valor entre 3 e 18: ");
  scanf("%d",&n);
  if(n>=3&&n<=18){
    for(i=(n-2);i>=0;i=i-1){
      printf("%d",i);//para verificar!!
      s=s+i;
    }
  }
  printf("\nA quantidade de maneiras que o valor %d pode ser representado com tres dados: %d forma(s).",n,s);
  return 0;
}