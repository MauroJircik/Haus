//Dados:
//-entrada: n1,n2,n3,n4,n5
//-saida: ma-media aritmetica: ma=(n1+n2+n3)/3
//        mp-media ponderada: mp=(1*n1)+(2*n2)+(3*n3)/(1+2+3)
//        mh-media harmonica: mh=1/((1/n1)+(1/n2)+(1/n3))
/*#include <stdio.h>
int main(){
  //processo
  float n1,n2,n3,n4,n5,ma,mp,mh;
  //exibicao
  printf("Digite o 1o valor: ");
  //entrada
  scanf("%f", &n1);
  //exibicao
  printf("Digite o 2o valor: ");
  //entrada
  scanf("%f", &n2);
  //exibicao
  printf("Digite o 3o valor: ");
  ///entrada
  scanf("%f", &n3);  
  //exibicao
  printf("Digite o 4o valor: ");
  //entrada
  scanf("%f", &n4);
  //exibicao
  printf("Digite o 5o valor: ");
  //entrada
  scanf("%f", &n5);
  //processo
  ma=(n1+n2+n3+n4+n5)/5;  
  mp=((1*n1)+(2*n2)+(3*n3)+(4*n4)+(5*n5))/(1+2+3+4+5);
  mh=1/((1/n1)+(1/n2)+(1/n3)+(1/n4)+(1/n5));
  //exibicao
  printf("\nA media aritmetica eh: %.2f", ma);
  printf("\nA media ponderada eh: %.2f",mp);
  printf("\nA media harmonica eh: %.2f",mh);
  //fim
  return 0;
}*/
#include <stdio.h>
int main(){
  float n1,n2,n3,n4,n5,ma,mp,mh;
  printf("Digite o 1o valor: ");
  scanf("%f", &n1);
  printf("Digite o 2o valor: ");
  scanf("%f", &n2);
  printf("Digite o 3o valor: ");
  scanf("%f", &n3);  
  printf("Digite o 4o valor: ");
  scanf("%f", &n4);
  printf("Digite o 5o valor: ");
  scanf("%f", &n5);
  ma=(n1+n2+n3+n4+n5)/5;
  mp=((1*n1)+(2*n2)+(3*n3)+(4*n4)+(5*n5))/(1+2+3+4+5);
  mh=1/((1/n1)+(1/n2)+(1/n3)+(1/n4)+(1/n5));
  printf("\nA media aritmetica eh: %.2f",ma);
  printf("\nA media ponderada eh: %.2f",mp);
  printf("\nA media harmonica eh: %.2f",mh);
  return 0;
}