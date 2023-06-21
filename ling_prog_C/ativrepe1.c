//Dados: Faixa Salarial    % de aumento
//        Até R$800,00        10%
//   R$800,01 até R$1000,00    9%
//     Acima de R$1.000,00     7%
//-entrada: sal salario
//-saida: nsal novo salario
/*#include<stdio.h>
int main(){
  //processo
  float sal,nsal;
  //exibicao
  printf("Digite o salario do funcionario: R$");
  //entrada
  scanf("%f",&sal);
  //decisao
  if(sal<=800.00){
  //sim_processo
    nsal=sal+(0.1*sal);
  //nao_decisao
  }else if(sal>800.00&&sal<=1000.00){
  //sim_decisao
    nsal=sal+(0.09*sal);
  //nao_processo
  }else{
    nsal=sal+(0.07*sal);
  }
  //exibicao
  printf("O novo salario eh: R$%.2f",nsal);
  //fim
  return 0;
}*/
#include<stdio.h>
int main(){
  float sal,nsal;
  printf("Digite o salario do funcionario: R$");
  scanf("%f",&sal);
  if(sal<=800.00){
    nsal=sal+(0.1*sal);
  }else if(sal>800.00&&sal<=1000.00){
    nsal=sal+(0.09*sal);
  }else{
    nsal=sal+(0.07*sal);
  }
  printf("O novo salario eh: R$%.2f",nsal);
  return 0;
}