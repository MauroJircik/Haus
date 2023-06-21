//Dados: v!=0, continue i==0
//-entrada: v valores posit/neg 10x
//-saida: soma
/*#include <stdio.h>
int main() {
  //processo
  int i,v2=0,v3=0,v1;
  //decisao
  for(i=0;i<=10;i=i+1){;
    //decisao
    if(i==0)continue;
    //entrada
    scanf("%d",&v1);
    //processo
    v2=v3;
    v3=v1+v2;
    }
  /exibicao
  printf("A soma: %d",v3);
  //fim
  return 0;
}*/
int main() {
  int i,v2=0,v3=0,v1;
  for(i=0;i<=10;i=i+1){;
    if(i==0)continue;
    scanf("%d",&v1);
    v2=v3;
    v3=v1+v2;
    }
  printf("A soma: %d",v3);
  return 0;
}