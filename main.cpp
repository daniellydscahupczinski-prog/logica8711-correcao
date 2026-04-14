#include<iostream>


int main (){
 
  int opcaoPagamento;
  int qtdParafuso;
  float valorParafuso = 1.40;
  float valorTotalParafuso;
  float desconto;
  float juros;

  std::cout<<"Digite a quantidade de parafusos desejada: "<<std::endl;
  std::cin>>qtdParafuso;

  valorTotalParafuso = qtdParafuso * valorParafuso;

  std::cout<<"Qual a forma de pagamento: "<<std::endl;
  std::cout<<"--- 1 - Pix"<<std::endl;
  std::cout<<"--- 2 - Dinheiro"<<std::endl;
  std::cout<<"--- 3 - Cartão"<<std::endl;
  std::cin>>opcaoPagamento;

  if(opcaoPagamento ==1){
    std::cout<<"Sua compra ficou no valor total de R$: "<<valorTotalParafuso<<std::endl;
  }else if(opcaoPagamento == 2){
    desconto = valorTotalParafuso * 0.90;
    std::cout<<"Sua compra ficou no valor total de R$: "<<desconto<<std::endl;
  }else{
    juros = valorTotalParafuso * 1.10;
    std::cout<<"Sua compra ficou no valor total de R$: "<<juros<<std::endl;
  }



  
    return 0;
}