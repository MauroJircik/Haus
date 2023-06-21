//Dados:
//-entrada: id identificacao do vendedor
//          sal salario do vendedor R$
//          vend total de vendas o vendedor R$
//          perc percentual de ganho percent
//-saida: id identificacao
//        salt salario total do vendedor
/*#include<stdio.h>
int main(){
  int id;
  float sal,perc,vend,salt,acr;
  printf("Digite a identificacao do vendedor: ");
  scanf("%d",&id);
  printf("Digite o salario do vendedor: R$");
  scanf("%f",&sal);
  printf("Digite o valor de vendas do vendedor: R$");
  scanf("%f",&vend);
  printf("Digite o percentual de ganho nas vendas -%: ");
  scanf("%f",&perc);
  acr=(perc/100)*vend;
  salt=sal+acr;
  printf("\nVendedor: %d.\nSalario total: R$%.2f.",id,salt);
  return 0;
}*/
#include<stdio.h>
int main(){
  int id;
  float sal,perc,vend,salt,acr;
  printf("Digite a identificacao do vendedor: ");
  scanf("%d",&id);
  printf("Digite o salario do vendedor: R$");
  scanf("%f",&sal);
  printf("Digite o valor de vendas do vendedor: R$");
  scanf("%f",&vend);
  printf("Digite o percentual de ganho nas vendas -%: ");
  scanf("%f",&perc);
  acr=(perc/100)*vend;
  salt=sal+acr;
  printf("\nVendedor: %d.\nSalario total: R$%.2f.",id,salt);
  return 0;
}