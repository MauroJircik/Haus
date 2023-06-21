//Dados:
//m1=p1*0.6+t1*0.4
//m2=p2*0.7+t2*0.3
//m=(m1+m2)/2
//-entrada: p1,t1,p2,t2
//-saida: m media
//        m>=6 Aprovado
//        m<4  Reprvado
//        m>=4 e m<6 Recuperacao
/*#include<stdio.h>
int main(){
  //processo
  float p1,t1,p2,t2,m1,m2,m;
  //exibicao
  printf("Digite a nota P1: ");
  //entrada
  scanf("%f",&p1);
  //exibicao
  printf("Digite a nota T1: ");
  //entrada
  scanf("%f",&t1);
  //exibicao
  printf("Digite a nota P2: ");
  //entrada
  scanf("%f",&p2);
  //exibicao
  printf("Digite a nota T2: ");
  //entrada
  scanf("%f",&t2);
  //processo
  m1=(p1*0.6)+(t1*0.4);
  m2=(p2*0.7)+(t2*0.3);
  m=(m1+m2)/2;
  //decisao
  if(m>=6){
  //sim_exibicao
    printf("Aprovado!");
  //nao_decisao
  }else if(m<4){
  //sim_exibicao
    printf("Reprovado!");
  //nao_exibicao
  }else{
    printf("Recuperacao!");
  }
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  float p1,t1,p2,t2,m1,m2,m;
  printf("Digite a nota P1: ");
  scanf("%f",&p1);
  printf("Digite a nota T1: ");
  scanf("%f",&t1);
  printf("Digite a nota P2: ");
  scanf("%f",&p2);
  printf("Digite a nota T2: ");
  scanf("%f",&t2);
  m1=(p1*0.6)+(t1*0.4);
  m2=(p2*0.7)+(t2*0.3);
  m=(m1+m2)/2;
  if(m>=6){
    printf("Aprovado!");
  }else if(m<4){
    printf("Reprovado!");
  }else{
    printf("Recuperacao!");
  }
  return 0;
}