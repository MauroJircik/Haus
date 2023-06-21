//Dados:
//salario R$100,00/dia
//-entrada: d dias trabalhados
//-saida: sal R$100,00.d
//        desc imposto 8porcent.sal
//        pag pagamento sal-desc
/*#include<stdio.h>
int main(){
  //processo
  float d,sal,desc,pag;
  //exibicao
  printf("Digite o numero de dias trabalhados: ");
  //entrada
  scanf("%f",&d);
  //processo
  sal=100*d;
  desc=0.08*sal;
  pag=sal-desc;
  //exibicao
  printf("O salario total eh: R$%.2f.\nO valor do imposto a ser pago eh: R$%.2f.\nO pagamento ao trabalhador eh: R$%.2f.",sal,desc,pag);
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  float d,sal,desc,pag;
  printf("Digite o numero de dias trabalhados: ");
  scanf("%f",&d);
  sal=100*d;
  desc=0.08*sal;
  pag=sal-desc;
  printf("O salario total eh: R$%.2f.\nO valor do imposto a ser pago eh: R$%.2f.\nO pagamento ao trabalhador eh: R$%.2f.",sal,desc,pag);
  return 0;
}