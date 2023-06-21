//Dados:
//-entrada:
//-saida: pares e impares 0-100
/*#include <stdio.h>
int main(){
  int i;
  printf("Numeros pares de 0-100:\n");
  for(i=0;i<=100;i=i+1){
    if(i%2==0){
      printf("%d ",i);
    }
  }
  printf("\nNumeros impares de 0-100:\n");
  for(i=0;i<=100;i=i+1){
    if(i%2!=0){
      printf("%d ",i);
    }
  }
  return 0;
}*/
#include <stdio.h>
int main(){
  int i;
  printf("Numeros pares de 0-100:\n");
  for(i=0;i<=100;i=i+1){if(i%2==0){printf("%d ",i);
    }
  }
  printf("\nNumeros impares de 0-100:\n");
  for(i=0;i<=100;i=i+1){if(i%2!=0){printf("%d ",i);
    }
  }
  return 0;
}