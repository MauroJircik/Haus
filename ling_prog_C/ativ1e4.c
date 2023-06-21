//Dados:
//-entrada: id idade, 0 fim
//-saida: q  quant idades lidas
//        md media das idades s/q
//        me menor idade
//        ma maior idade
/*#include<stdio.h>
int main(){
  //processo
  int id,q=0,i,me=150,ma=0;
  float s,md;
  //decisao
  while(id!=0){
  //sim_exibicao
    printf("Entre com uma idade (digite 0 para terminar):");
    //entrada
    scanf("%d",&id);
    //processo
    q=q+1;
    s=i+id;
    i=s;
    //decisao
    if(id!=0 && id<me){
      processo
      me=id;
    }
    //decisao
    if(id>ma){
      //processo
      ma=id;
    }
  }
  //processo
  md=s/(q-1);
  //exibicao
  printf("\nForam lidas idades: %d",q-1);
  printf("\nMedia de idade: %.2f",md);
  printf("\nMenor idade recebida: %d",me);
  printf("\nMaior idade recebida: %d",ma);
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  int id,q=0,i,me=150,ma=0;
  float s,md;
  while(id!=0){
    printf("Entre com uma idade (digite 0 para terminar):");
    scanf("%d",&id);
    q=q+1;
    s=i+id;
    i=s;
    if(id!=0 && id<me){
      me=id;
    }
    if(id>ma){
      ma=id;
    }
  }
  md=s/(q-1);
  printf("\nForam lidas idades: %d",q-1);
  printf("\nMedia de idade: %.2f",md);
  printf("\nMenor idade recebida: %d",me);
  printf("\nMaior idade recebida: %d",ma);
  return 0;
}