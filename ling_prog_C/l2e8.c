//Dados:
//infantil 13-14anos, ate 45kg leve
//juvenil 15-17anos, ate 60kg leve
//adulto acima18anos, ate 85kg leve
//-entrada: id idade, p peso
//-saida: categoria
/*#include<stdio.h>
int main(){
  //processo
  int id;
  float p;
  //exibicao
  printf("Digite a idade do participante -anos: ");
  //entrada
  scanf("%d",&id);
  //exibicao
  printf("Digite o peso do particiante -kg: ");
  //entrada
  scanf("%f",&p);
  //decisao
  if(id>=13&&id<=14){
  //sim_decisao
    if(p<=45){
    //sim_xibicao
      printf("Infantil leve.");
    //nao_exibicao
    }else{
      printf("Infantil pesado.");
    }
  //nao_decisao
  }else if(id>=15&&id<=17){
  //sim_decisao
    if(p<=60){
    //sim_exibicao
      printf("Juvenil leve.");
    //nao_exibicao
    }else{
      printf("Juvenil pesado.");
    }
  //nao_decisao
  }else if(p<=85){
    //sim_exibicao
      printf("Adulto leve.");
      printf("Adulto leve.");
    //nao_exibicao
    }else{
      printf("Adulto pesado.");
    }
  //nao_exibicao
  }else{
    printf("Idade nao permitida.");
  }
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  int id;
  float p;
  printf("Digite a idade do participante -anos: ");
  scanf("%d",&id);
  printf("Digite o peso do particiante -kg: ");
  scanf("%f",&p);
  if(id>=13&&id<=14){
    if(p<=45){
      printf("Infantil leve.");
    }else{
      printf("Infantil pesado.");
    }
  }else if(id>=15&&id<=17){
    if(p<=60){
      printf("Juvenil leve.");
    }else{
      printf("Juvenil pesado.");
    }
  }else if(id>=18){
    if(p<=85){
      printf("Adulto leve.");
    }else{
      printf("Adulto pesado.");
    }
  }else{
    printf("Idade nao permitida");
  }
  return 0;
}