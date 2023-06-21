//Dados:
//-entrada: n numeros
//          0 - saida
//-saida: qtp quant de n pares
//        qti quant de n impares
//        mdp media n pares
//        mdi media n impares
/*#include<stdio.h>
int main(){
  int n,q=0,n1=0,n2=0,qp=0,qpt=0,qi=0,qit=0;
  float sp=0,si=0,mdp=0,mdi=0;
  while(n!=0){
    printf("Entre com um numero (digite 0 para terminar):");
    scanf("%d",&n);
    q=q+1;
    if(n%2==0){
      qpt=qp+1;
      qp=qpt;
      sp=n+n1;
      n1=sp;
    }
    if(n%2!=0){
      qit=qi+1;
      qi=qit;
      si=n+n2;
      n2=si;
    }
  }
  mdp=sp/(qpt-1);
  mdi=si/(qit);
  printf("\nForam lidos %d numeros:",q-1);
  printf(" %d pares e %d impares",qpt-1,qit);
  printf("\nMedia dos numeros pares: %.2f",mdp);
  printf("\nMedia dos numeros impares: %.2f",mdi);
  return 0;
}*/
#include<stdio.h>
int main(){
  int n,q=0,n1=0,n2=0,qp=0,qpt=0,qi=0,qit=0;
  float sp=0,si=0,mdp=0,mdi=0;
  while(n!=0){
    printf("Entre com um numero (digite 0 para terminar):");
    scanf("%d",&n);
    q=q+1;
    if(n%2==0){
      qpt=qp+1;
      qp=qpt;
      sp=n+n1;
      n1=sp;
    }
    if(n%2!=0){
      qit=qi+1;
      qi=qit;
      si=n+n2;
      n2=si;
    }
  }
  mdp=sp/(qpt-1);
  mdi=si/(qit);
  printf("\nForam lidos %d numeros:",q-1);
  printf(" %d pares e %d impares",qpt-1,qit);
  printf("\nMedia dos numeros pares: %.2f",mdp);
  printf("\nMedia dos numeros impares: %.2f",mdi);
  return 0;
}