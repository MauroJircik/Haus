//Dados:
//-entrada: n1,n2,n3 notas
//          pesos 4xmaior, 3x, 3x
//-saida: mp media ponderada mp=((4.n1)+(3.n2)+(3.n3))/(4+3+3)
//        continuar? (s/n)
/*#include<stdio.h>
int main(){
  //processo
  int i,op;
  float n1,n2,n3,mp;
  //decisao
  for(i=0;i<=1;i=i+1){
  //sim_exibicao
    printf("\nDigite a nota 1: ");
    //entrada
    scanf("%f",&n1);
    printf("Digite a nota 2: ");
    scanf("%f",&n2);
    printf("Digite a nota 3: ");
    scanf("%f",&n3);
    //decisao
    if(n1>n2&&n2>n3){
    //sim_processo
      mp=((n1*4)+(n2*3)+(n3*3))/10;
    //nao_decisao
    }else if(n1>n3&&n3>n2){
      mp=((n1*4)+(n3*3)+(n2*3))/10;
    }else if(n2>n1&&n1>n3){
      mp=((n2*4)+(n1*3)+(n3*3))/10;
    }else if(n2>n3&&n3>n1){
      mp=((n2*4)+(n3*3)+(n1*3))/10;
    }else if(n3>n2&&n2>n1){
      mp=((n3*4)+(n2*3)+(n1*3))/10;
    }else{
      mp=((n3*4)+(n1*3)+(n2*3))/10;
    }
    //nao_exibicao
    printf("\nA media eh: %.2f",mp);
    //decisao
    if(mp>=5){
    //sim_exibicao
      printf("\nO aluno esta APROVADO.");
    //nao_exibicao
    }else{
      printf("\nO aluno esta REPROVADO.");
    }
  //exibicao
  printf("\n\nDeseja realizar mais um calculo (s1/n2):");
  //entrada
  scanf("%d",&op);
  //decisao
  if(op==1){
  //sim_processo
    i=0;
  //nao_decisao
  }else if(op==2){
	//sim_processo
    i=3;
    }
  }
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  int i,op;
  float n1,n2,n3,mp;
  for(i=0;i<=1;i=i+1){
    printf("\nDigite a nota 1: ");
    scanf("%f",&n1);
    printf("Digite a nota 2: ");
    scanf("%f",&n2);
    printf("Digite a nota 3: ");
    scanf("%f",&n3);
    if(n1>n2&&n2>n3){
      mp=((n1*4)+(n2*3)+(n3*3))/10;
    }else if(n1>n3&&n3>n2){
      mp=((n1*4)+(n3*3)+(n2*3))/10;
    }else if(n2>n1&&n1>n3){
      mp=((n2*4)+(n1*3)+(n3*3))/10;
    }else if(n2>n3&&n3>n1){
      mp=((n2*4)+(n3*3)+(n1*3))/10;
    }else if(n3>n2&&n2>n1){
      mp=((n3*4)+(n2*3)+(n1*3))/10;
    }else{
      mp=((n3*4)+(n1*3)+(n2*3))/10;
    }
    printf("\nA media eh: %.2f",mp);
    if(mp>=5){
      printf("\nO aluno esta APROVADO.");
    }else{
      printf("\nO aluno esta REPROVADO.");
    }
  printf("\n\nDeseja realizar mais um calculo (s1/n2):");
  scanf("%d",&op);
  if(op==1){
    i=0;
  }else if(op==2){
		i=3;
  }
  }
  return 0;
}
