//Dados: 100/-100,finaliza    break
//-entrada: v valores posit/neg
//-saida: v3 soma
/*int main() {
  //processo
  int i,v2=0,v3=0,v1;
  //decisao
  while(v1!=100){
    //entrada
    scanf("%d",&v1);
    //decisao
    if(v1==100 || v1==(-100)){
    //sim_paralaco
      break;
    //nao_continualaco
    }else{
    //processo
    v2=v3;
    v3=v1+v2;
    }
  }
  //exibicao
  printf("A soma: %d",v3);
  //fim
  return 0;
}*/
int main() {
  int i,v2=0,v3=0,v1;
  while(v1!=100){
    scanf("%d",&v1);
    if(v1==100 || v1==(-100)){
      break;
    }else{
    v2=v3;
    v3=v1+v2;
    }
  }
  printf("A soma: %d",v3);
  return 0;
}